#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A5B0
// Address: 0x26a5b0 - 0x26a9d0
void sub_0026A5B0_0x26a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A5B0_0x26a5b0");
#endif

    switch (ctx->pc) {
        case 0x26a888u: goto label_26a888;
        case 0x26a924u: goto label_26a924;
        case 0x26a9b4u: goto label_26a9b4;
        default: break;
    }

    ctx->pc = 0x26a5b0u;

    // 0x26a5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26a5b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x26a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x26a5b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26a5bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a5c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a5c4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x26a5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x26a5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a5cc: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x26a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x26a5d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a5d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26a5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x26a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x26a5dc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x26a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x26a5e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x26a5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x26a5e4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x26a5e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a5e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x26a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x26a5ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a5f0: 0x2463f300  addiu       $v1, $v1, -0xD00
    ctx->pc = 0x26a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963968));
    // 0x26a5f4: 0xa48a0006  sh          $t2, 0x6($a0)
    ctx->pc = 0x26a5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 10));
    // 0x26a5f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x26a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x26a5fc: 0x2442f2e0  addiu       $v0, $v0, -0xD20
    ctx->pc = 0x26a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963936));
    // 0x26a600: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x26a600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x26a604: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x26a604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x26a608: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x26a608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x26a60c: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x26a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x26a610: 0x3449cccd  ori         $t1, $v0, 0xCCCD
    ctx->pc = 0x26a610u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26a614: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x26a614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a618: 0xac890044  sw          $t1, 0x44($a0)
    ctx->pc = 0x26a618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 9));
    // 0x26a61c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26a620: 0xac880048  sw          $t0, 0x48($a0)
    ctx->pc = 0x26a620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 8));
    // 0x26a624: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x26a624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x26a628: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x26a628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x26a62c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26a62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26a630: 0xac890050  sw          $t1, 0x50($a0)
    ctx->pc = 0x26a630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 9));
    // 0x26a634: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a638: 0xac890054  sw          $t1, 0x54($a0)
    ctx->pc = 0x26a638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 9));
    // 0x26a63c: 0x3c07bf80  lui         $a3, 0xBF80
    ctx->pc = 0x26a63cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49024 << 16));
    // 0x26a640: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x26a640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x26a644: 0x3c063e80  lui         $a2, 0x3E80
    ctx->pc = 0x26a644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16000 << 16));
    // 0x26a648: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x26a648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x26a64c: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x26a64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x26a650: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x26a650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x26a654: 0xa08a0064  sb          $t2, 0x64($a0)
    ctx->pc = 0x26a654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 10));
    // 0x26a658: 0xac23e960  sw          $v1, -0x16A0($at)
    ctx->pc = 0x26a658u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961504), GPR_U32(ctx, 3));
    // 0x26a65c: 0x3c023ea3  lui         $v0, 0x3EA3
    ctx->pc = 0x26a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16035 << 16));
    // 0x26a660: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a664: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x26a664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26a668: 0xac28e830  sw          $t0, -0x17D0($at)
    ctx->pc = 0x26a668u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961200), GPR_U32(ctx, 8));
    // 0x26a66c: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x26a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
    // 0x26a670: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a674: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26a674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a678: 0xac20e834  sw          $zero, -0x17CC($at)
    ctx->pc = 0x26a678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961204), GPR_U32(ctx, 0));
    // 0x26a67c: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x26a67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x26a680: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a684: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x26a684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x26a688: 0xac22e9c0  sw          $v0, -0x1640($at)
    ctx->pc = 0x26a688u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961600), GPR_U32(ctx, 2));
    // 0x26a68c: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x26a68cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26a690: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a694: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26a694u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a698: 0xac20e838  sw          $zero, -0x17C8($at)
    ctx->pc = 0x26a698u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961208), GPR_U32(ctx, 0));
    // 0x26a69c: 0x2484e830  addiu       $a0, $a0, -0x17D0
    ctx->pc = 0x26a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961200));
    // 0x26a6a0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6a4: 0xac20e83c  sw          $zero, -0x17C4($at)
    ctx->pc = 0x26a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961212), GPR_U32(ctx, 0));
    // 0x26a6a8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6ac: 0xac20e850  sw          $zero, -0x17B0($at)
    ctx->pc = 0x26a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961232), GPR_U32(ctx, 0));
    // 0x26a6b0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6b4: 0xac28e854  sw          $t0, -0x17AC($at)
    ctx->pc = 0x26a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961236), GPR_U32(ctx, 8));
    // 0x26a6b8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6bc: 0xac20e858  sw          $zero, -0x17A8($at)
    ctx->pc = 0x26a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961240), GPR_U32(ctx, 0));
    // 0x26a6c0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6c4: 0xac20e85c  sw          $zero, -0x17A4($at)
    ctx->pc = 0x26a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961244), GPR_U32(ctx, 0));
    // 0x26a6c8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6cc: 0xac20e870  sw          $zero, -0x1790($at)
    ctx->pc = 0x26a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961264), GPR_U32(ctx, 0));
    // 0x26a6d0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6d4: 0xac20e874  sw          $zero, -0x178C($at)
    ctx->pc = 0x26a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961268), GPR_U32(ctx, 0));
    // 0x26a6d8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6dc: 0xac28e878  sw          $t0, -0x1788($at)
    ctx->pc = 0x26a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961272), GPR_U32(ctx, 8));
    // 0x26a6e0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6e4: 0xac20e87c  sw          $zero, -0x1784($at)
    ctx->pc = 0x26a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961276), GPR_U32(ctx, 0));
    // 0x26a6e8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6ec: 0xac20e840  sw          $zero, -0x17C0($at)
    ctx->pc = 0x26a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961216), GPR_U32(ctx, 0));
    // 0x26a6f0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6f4: 0xac20e860  sw          $zero, -0x17A0($at)
    ctx->pc = 0x26a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961248), GPR_U32(ctx, 0));
    // 0x26a6f8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a6fc: 0xac20e880  sw          $zero, -0x1780($at)
    ctx->pc = 0x26a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961280), GPR_U32(ctx, 0));
    // 0x26a700: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a704: 0xac20e890  sw          $zero, -0x1770($at)
    ctx->pc = 0x26a704u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961296), GPR_U32(ctx, 0));
    // 0x26a708: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a70c: 0xac28e894  sw          $t0, -0x176C($at)
    ctx->pc = 0x26a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961300), GPR_U32(ctx, 8));
    // 0x26a710: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a714: 0xac28e898  sw          $t0, -0x1768($at)
    ctx->pc = 0x26a714u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961304), GPR_U32(ctx, 8));
    // 0x26a718: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a71c: 0xac20e89c  sw          $zero, -0x1764($at)
    ctx->pc = 0x26a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961308), GPR_U32(ctx, 0));
    // 0x26a720: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a724: 0xac28e8b0  sw          $t0, -0x1750($at)
    ctx->pc = 0x26a724u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961328), GPR_U32(ctx, 8));
    // 0x26a728: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a72c: 0xac20e8b4  sw          $zero, -0x174C($at)
    ctx->pc = 0x26a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961332), GPR_U32(ctx, 0));
    // 0x26a730: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a734: 0xac28e8b8  sw          $t0, -0x1748($at)
    ctx->pc = 0x26a734u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961336), GPR_U32(ctx, 8));
    // 0x26a738: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a73c: 0xac20e8bc  sw          $zero, -0x1744($at)
    ctx->pc = 0x26a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961340), GPR_U32(ctx, 0));
    // 0x26a740: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a744: 0xac28e8d0  sw          $t0, -0x1730($at)
    ctx->pc = 0x26a744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961360), GPR_U32(ctx, 8));
    // 0x26a748: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a74c: 0xac28e8d4  sw          $t0, -0x172C($at)
    ctx->pc = 0x26a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961364), GPR_U32(ctx, 8));
    // 0x26a750: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a754: 0xac20e8d8  sw          $zero, -0x1728($at)
    ctx->pc = 0x26a754u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961368), GPR_U32(ctx, 0));
    // 0x26a758: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a75c: 0xac20e8dc  sw          $zero, -0x1724($at)
    ctx->pc = 0x26a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961372), GPR_U32(ctx, 0));
    // 0x26a760: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a764: 0xac29e8a0  sw          $t1, -0x1760($at)
    ctx->pc = 0x26a764u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961312), GPR_U32(ctx, 9));
    // 0x26a768: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a76c: 0xac29e8c0  sw          $t1, -0x1740($at)
    ctx->pc = 0x26a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961344), GPR_U32(ctx, 9));
    // 0x26a770: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a774: 0xac29e8e0  sw          $t1, -0x1720($at)
    ctx->pc = 0x26a774u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961376), GPR_U32(ctx, 9));
    // 0x26a778: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a77c: 0xac20e8f0  sw          $zero, -0x1710($at)
    ctx->pc = 0x26a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961392), GPR_U32(ctx, 0));
    // 0x26a780: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a784: 0xac28e8f4  sw          $t0, -0x170C($at)
    ctx->pc = 0x26a784u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961396), GPR_U32(ctx, 8));
    // 0x26a788: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a78c: 0xac27e8f8  sw          $a3, -0x1708($at)
    ctx->pc = 0x26a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961400), GPR_U32(ctx, 7));
    // 0x26a790: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a794: 0xac20e8fc  sw          $zero, -0x1704($at)
    ctx->pc = 0x26a794u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961404), GPR_U32(ctx, 0));
    // 0x26a798: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a79c: 0xac28e910  sw          $t0, -0x16F0($at)
    ctx->pc = 0x26a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961424), GPR_U32(ctx, 8));
    // 0x26a7a0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7a4: 0xac20e914  sw          $zero, -0x16EC($at)
    ctx->pc = 0x26a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961428), GPR_U32(ctx, 0));
    // 0x26a7a8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7ac: 0xac27e918  sw          $a3, -0x16E8($at)
    ctx->pc = 0x26a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961432), GPR_U32(ctx, 7));
    // 0x26a7b0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7b4: 0xac20e91c  sw          $zero, -0x16E4($at)
    ctx->pc = 0x26a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961436), GPR_U32(ctx, 0));
    // 0x26a7b8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7bc: 0xac28e930  sw          $t0, -0x16D0($at)
    ctx->pc = 0x26a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961456), GPR_U32(ctx, 8));
    // 0x26a7c0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7c4: 0xac27e934  sw          $a3, -0x16CC($at)
    ctx->pc = 0x26a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961460), GPR_U32(ctx, 7));
    // 0x26a7c8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7cc: 0xac20e938  sw          $zero, -0x16C8($at)
    ctx->pc = 0x26a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961464), GPR_U32(ctx, 0));
    // 0x26a7d0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7d4: 0xac20e93c  sw          $zero, -0x16C4($at)
    ctx->pc = 0x26a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961468), GPR_U32(ctx, 0));
    // 0x26a7d8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7dc: 0xac26e900  sw          $a2, -0x1700($at)
    ctx->pc = 0x26a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961408), GPR_U32(ctx, 6));
    // 0x26a7e0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7e4: 0xac26e920  sw          $a2, -0x16E0($at)
    ctx->pc = 0x26a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961440), GPR_U32(ctx, 6));
    // 0x26a7e8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7ec: 0xac26e940  sw          $a2, -0x16C0($at)
    ctx->pc = 0x26a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961472), GPR_U32(ctx, 6));
    // 0x26a7f0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7f4: 0xac28e950  sw          $t0, -0x16B0($at)
    ctx->pc = 0x26a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961488), GPR_U32(ctx, 8));
    // 0x26a7f8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a7fc: 0xac28e954  sw          $t0, -0x16AC($at)
    ctx->pc = 0x26a7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961492), GPR_U32(ctx, 8));
    // 0x26a800: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a804: 0xac28e958  sw          $t0, -0x16A8($at)
    ctx->pc = 0x26a804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961496), GPR_U32(ctx, 8));
    // 0x26a808: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a80c: 0xac20e95c  sw          $zero, -0x16A4($at)
    ctx->pc = 0x26a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961500), GPR_U32(ctx, 0));
    // 0x26a810: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a814: 0xac28e970  sw          $t0, -0x1690($at)
    ctx->pc = 0x26a814u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961520), GPR_U32(ctx, 8));
    // 0x26a818: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a81c: 0xac28e974  sw          $t0, -0x168C($at)
    ctx->pc = 0x26a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961524), GPR_U32(ctx, 8));
    // 0x26a820: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a824: 0xac27e978  sw          $a3, -0x1688($at)
    ctx->pc = 0x26a824u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961528), GPR_U32(ctx, 7));
    // 0x26a828: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a82c: 0xac20e97c  sw          $zero, -0x1684($at)
    ctx->pc = 0x26a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961532), GPR_U32(ctx, 0));
    // 0x26a830: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a834: 0xac28e990  sw          $t0, -0x1670($at)
    ctx->pc = 0x26a834u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961552), GPR_U32(ctx, 8));
    // 0x26a838: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a83c: 0xac27e994  sw          $a3, -0x166C($at)
    ctx->pc = 0x26a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961556), GPR_U32(ctx, 7));
    // 0x26a840: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a844: 0xac28e998  sw          $t0, -0x1668($at)
    ctx->pc = 0x26a844u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961560), GPR_U32(ctx, 8));
    // 0x26a848: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a84c: 0xac28e9b0  sw          $t0, -0x1650($at)
    ctx->pc = 0x26a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961584), GPR_U32(ctx, 8));
    // 0x26a850: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a854: 0xac20e99c  sw          $zero, -0x1664($at)
    ctx->pc = 0x26a854u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961564), GPR_U32(ctx, 0));
    // 0x26a858: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a85c: 0xac27e9b4  sw          $a3, -0x164C($at)
    ctx->pc = 0x26a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961588), GPR_U32(ctx, 7));
    // 0x26a860: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a864: 0xac27e9b8  sw          $a3, -0x1648($at)
    ctx->pc = 0x26a864u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961592), GPR_U32(ctx, 7));
    // 0x26a868: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a86c: 0xac20e9bc  sw          $zero, -0x1644($at)
    ctx->pc = 0x26a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961596), GPR_U32(ctx, 0));
    // 0x26a870: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a874: 0xac23e980  sw          $v1, -0x1680($at)
    ctx->pc = 0x26a874u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961536), GPR_U32(ctx, 3));
    // 0x26a878: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a87c: 0xac23e9a0  sw          $v1, -0x1660($at)
    ctx->pc = 0x26a87cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961568), GPR_U32(ctx, 3));
    // 0x26a880: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26a880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a884: 0x0  nop
    ctx->pc = 0x26a884u;
    // NOP
label_26a888:
    // 0x26a888: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x26a888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a88c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x26a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a890: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x26a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a894: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x26a894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26a898: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x26a898u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26a89c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x26a89cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x26a8a0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x26a8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x26a8a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x26a8a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a8a8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x26A8A8u;
    {
        const bool branch_taken_0x26a8a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a8a8) {
            ctx->pc = 0x26A8D0u;
            goto label_26a8d0;
        }
    }
    ctx->pc = 0x26A8B0u;
    // 0x26a8b0: 0x0  nop
    ctx->pc = 0x26a8b0u;
    // NOP
    // 0x26a8b4: 0x0  nop
    ctx->pc = 0x26a8b4u;
    // NOP
    // 0x26a8b8: 0x46001896  rsqrt.s     $f2, $f3, $f0
    ctx->pc = 0x26a8b8u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[3]);
    // 0x26a8bc: 0x0  nop
    ctx->pc = 0x26a8bcu;
    // NOP
    // 0x26a8c0: 0x0  nop
    ctx->pc = 0x26a8c0u;
    // NOP
    // 0x26a8c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26A8C4u;
    {
        const bool branch_taken_0x26a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a8c4) {
            ctx->pc = 0x26A8D8u;
            goto label_26a8d8;
        }
    }
    ctx->pc = 0x26A8CCu;
    // 0x26a8cc: 0x0  nop
    ctx->pc = 0x26a8ccu;
    // NOP
label_26a8d0:
    // 0x26a8d0: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x26a8d0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x26a8d4: 0x0  nop
    ctx->pc = 0x26a8d4u;
    // NOP
label_26a8d8:
    // 0x26a8d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x26a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a8dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26a8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26a8e0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x26a8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x26a8e4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x26a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a8e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26a8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26a8ec: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x26a8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x26a8f0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x26a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a8f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26a8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26a8f8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x26a8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x26a8fc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x26a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a900: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x26a900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x26a904: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x26a904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x26a908: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x26a908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x26a90c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x26a90cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x26a910: 0x2942000d  slti        $v0, $t2, 0xD
    ctx->pc = 0x26a910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x26a914: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x26A914u;
    {
        const bool branch_taken_0x26a914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A914u;
            // 0x26a918: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a914) {
            ctx->pc = 0x26A888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26a888;
        }
    }
    ctx->pc = 0x26A91Cu;
    // 0x26a91c: 0xc09a958  jal         func_26A560
    ctx->pc = 0x26A91Cu;
    SET_GPR_U32(ctx, 31, 0x26A924u);
    ctx->pc = 0x26A920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A91Cu;
            // 0x26a920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A560u;
    if (runtime->hasFunction(0x26A560u)) {
        auto targetFn = runtime->lookupFunction(0x26A560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A924u; }
        if (ctx->pc != 0x26A924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A560_0x26a560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A924u; }
        if (ctx->pc != 0x26A924u) { return; }
    }
    ctx->pc = 0x26A924u;
label_26a924:
    // 0x26a924: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x26a924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x26a928: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26a928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a92c: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x26a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x26a930: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x26a930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x26a934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26a934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a938: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a93c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a93cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a944: 0x3e00008  jr          $ra
    ctx->pc = 0x26A944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A944u;
            // 0x26a948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A94Cu;
    // 0x26a94c: 0x0  nop
    ctx->pc = 0x26a94cu;
    // NOP
    // 0x26a950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26a954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26a958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26a95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a960: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26A960u;
    {
        const bool branch_taken_0x26a960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A960u;
            // 0x26a964: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a960) {
            ctx->pc = 0x26A9B8u;
            goto label_26a9b8;
        }
    }
    ctx->pc = 0x26A968u;
    // 0x26a968: 0x2442f300  addiu       $v0, $v0, -0xD00
    ctx->pc = 0x26a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963968));
    // 0x26a96c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A96Cu;
    {
        const bool branch_taken_0x26a96c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A96Cu;
            // 0x26a970: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a96c) {
            ctx->pc = 0x26A990u;
            goto label_26a990;
        }
    }
    ctx->pc = 0x26A974u;
    // 0x26a974: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a978: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x26a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x26a97c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A97Cu;
    {
        const bool branch_taken_0x26a97c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A97Cu;
            // 0x26a980: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a97c) {
            ctx->pc = 0x26A990u;
            goto label_26a990;
        }
    }
    ctx->pc = 0x26A984u;
    // 0x26a984: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a988: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x26a988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x26a98c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x26a98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_26a990:
    // 0x26a990: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x26a990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x26a994: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a998: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A998u;
    {
        const bool branch_taken_0x26a998 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26A99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A998u;
            // 0x26a99c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a998) {
            ctx->pc = 0x26A9B8u;
            goto label_26a9b8;
        }
    }
    ctx->pc = 0x26A9A0u;
    // 0x26a9a0: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x26a9a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26a9a4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26a9a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9ac: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x26A9ACu;
    SET_GPR_U32(ctx, 31, 0x26A9B4u);
    ctx->pc = 0x26A9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9ACu;
            // 0x26a9b0: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9B4u; }
        if (ctx->pc != 0x26A9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A9B4u; }
        if (ctx->pc != 0x26A9B4u) { return; }
    }
    ctx->pc = 0x26A9B4u;
label_26a9b4:
    // 0x26a9b4: 0x0  nop
    ctx->pc = 0x26a9b4u;
    // NOP
label_26a9b8:
    // 0x26a9b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26a9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26a9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a9c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x26A9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9C4u;
            // 0x26a9c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A9CCu;
    // 0x26a9cc: 0x0  nop
    ctx->pc = 0x26a9ccu;
    // NOP
}
