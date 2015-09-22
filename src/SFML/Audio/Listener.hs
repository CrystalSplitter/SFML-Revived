module SFML.Audio.Listener
(
    setGlobalVolume
,   getGlobalVolume
,   setListenerPosition
,   getListenerPosition
,   setListenerDirection
,   getListenerDirection
,   setListenerUpVector
,   getListenerUpVector
)
where


import SFML.System.Vector3

import Control.Monad ((>=>))
import Foreign.C.Types
import Foreign.Marshal.Alloc (alloca)
import Foreign.Marshal.Utils (with)
import Foreign.Ptr (Ptr)
import Foreign.Storable (peek)


-- | Change the global volume of all the sounds and musics.
--
-- The volume is a number between 0 and 100; it is combined with
-- the individual volume of each sound or music.
--
-- The default value for the volume is 100 (maximum).
setGlobalVolume
    :: Float -- ^ New global volume, in the range [0, 100]
    -> IO ()

setGlobalVolume = sfListener_setGlobalVolume . realToFrac

foreign import ccall unsafe "sfListener_setGlobalVolume"
    sfListener_setGlobalVolume :: CFloat -> IO ()

--CSFML_AUDIO_API void sfListener_setGlobalVolume(float volume);


-- | Get the current value of the global volume.
getGlobalVolume :: IO Float -- ^ Current global volume, in the range [0, 100]
getGlobalVolume = fmap realToFrac sfListener_getGlobalVolume

foreign import ccall unsafe "sfListener_getGlobalVolume"
    sfListener_getGlobalVolume :: IO CFloat

--CSFML_AUDIO_API float sfListener_getGlobalVolume(void);


-- | Set the position of the listener in the scene.
--
-- The default listener's position is (0, 0, 0).
setListenerPosition :: Vec3f -> IO ()
setListenerPosition pos = with pos sfListener_setPosition_helper

foreign import ccall unsafe "sfListener_setPosition_helper"
    sfListener_setPosition_helper :: Ptr Vec3f -> IO ()

--CSFML_AUDIO_API void sfListener_setPosition(sfVector3f position);


-- | Get the current position of the listener in the scene.
getListenerPosition :: IO Vec3f
getListenerPosition = alloca $ \ptr -> sfListener_getPosition_helper ptr >> peek ptr

foreign import ccall unsafe "sfListener_getPosition_helper"
    sfListener_getPosition_helper :: Ptr Vec3f -> IO ()

--CSFML_AUDIO_API sfVector3f sfListener_getPosition();


-- | Set the orientation of the forward vector in the scene.
--
-- The direction (also called "at vector") is the vector
-- pointing forward from the listener's perspective. Together
-- with the up vector, it defines the 3D orientation of the
-- listener in the scene. The direction vector doesn't
-- have to be normalized.
--
-- The default listener's direction is (0, 0, -1).
setListenerDirection :: Vec3f -> IO ()
setListenerDirection dir = with dir sfListener_setDirection_helper

foreign import ccall unsafe "sfListener_setDirection_helper"
    sfListener_setDirection_helper :: Ptr Vec3f -> IO ()

--CSFML_AUDIO_API void sfListener_setDirection(sfVector3f orientation);


-- | Get the current orientation of the listener in the scene.
getListenerDirection :: IO Vec3f
getListenerDirection = alloca $ \ptr -> sfListener_getDirection_helper ptr >> peek ptr

foreign import ccall unsafe "sfListener_getDirection_helper"
    sfListener_getDirection_helper :: Ptr Vec3f -> IO ()

--CSFML_AUDIO_API sfVector3f sfListener_getDirection();


-- | Set the upward vector of the listener in the scene
--
-- The up vector is the vector that points upward from the
-- listener's perspective. Together with the direction, it
-- defines the 3D orientation of the listener in the scene.
-- The up vector doesn't have to be normalized.
-- The default listener's up vector is (0, 1, 0). It is usually
-- not necessary to change it, especially in 2D scenarios.
setListenerUpVector :: Vec3f -> IO ()
setListenerUpVector dir = with dir sfListener_setUpVector_helper

foreign import ccall unsafe "sfListener_setUpVector_helper"
    sfListener_setUpVector_helper :: Ptr Vec3f -> IO ()

--CSFML_AUDIO_API void sfListener_setUpVector(sfVector3f upVector);


-- | Get the current upward vector (unnormalised) of the listener in the scene.
getListenerUpVector :: IO Vec3f
getListenerUpVector = alloca $ \ptr -> sfListener_getUpVector_helper ptr >> peek ptr

foreign import ccall unsafe "sfListener_getUpVector_helper"
    sfListener_getUpVector_helper :: Ptr Vec3f -> IO ()

--CSFML_AUDIO_API sfVector3f sfListener_getUpVector();
