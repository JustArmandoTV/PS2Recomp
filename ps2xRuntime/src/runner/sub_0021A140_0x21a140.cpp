#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021A140
// Address: 0x21a140 - 0x21a420
void sub_0021A140_0x21a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A140_0x21a140");
#endif

    switch (ctx->pc) {
        case 0x21a140u: goto label_21a140;
        case 0x21a144u: goto label_21a144;
        case 0x21a148u: goto label_21a148;
        case 0x21a14cu: goto label_21a14c;
        case 0x21a150u: goto label_21a150;
        case 0x21a154u: goto label_21a154;
        case 0x21a158u: goto label_21a158;
        case 0x21a15cu: goto label_21a15c;
        case 0x21a160u: goto label_21a160;
        case 0x21a164u: goto label_21a164;
        case 0x21a168u: goto label_21a168;
        case 0x21a16cu: goto label_21a16c;
        case 0x21a170u: goto label_21a170;
        case 0x21a174u: goto label_21a174;
        case 0x21a178u: goto label_21a178;
        case 0x21a17cu: goto label_21a17c;
        case 0x21a180u: goto label_21a180;
        case 0x21a184u: goto label_21a184;
        case 0x21a188u: goto label_21a188;
        case 0x21a18cu: goto label_21a18c;
        case 0x21a190u: goto label_21a190;
        case 0x21a194u: goto label_21a194;
        case 0x21a198u: goto label_21a198;
        case 0x21a19cu: goto label_21a19c;
        case 0x21a1a0u: goto label_21a1a0;
        case 0x21a1a4u: goto label_21a1a4;
        case 0x21a1a8u: goto label_21a1a8;
        case 0x21a1acu: goto label_21a1ac;
        case 0x21a1b0u: goto label_21a1b0;
        case 0x21a1b4u: goto label_21a1b4;
        case 0x21a1b8u: goto label_21a1b8;
        case 0x21a1bcu: goto label_21a1bc;
        case 0x21a1c0u: goto label_21a1c0;
        case 0x21a1c4u: goto label_21a1c4;
        case 0x21a1c8u: goto label_21a1c8;
        case 0x21a1ccu: goto label_21a1cc;
        case 0x21a1d0u: goto label_21a1d0;
        case 0x21a1d4u: goto label_21a1d4;
        case 0x21a1d8u: goto label_21a1d8;
        case 0x21a1dcu: goto label_21a1dc;
        case 0x21a1e0u: goto label_21a1e0;
        case 0x21a1e4u: goto label_21a1e4;
        case 0x21a1e8u: goto label_21a1e8;
        case 0x21a1ecu: goto label_21a1ec;
        case 0x21a1f0u: goto label_21a1f0;
        case 0x21a1f4u: goto label_21a1f4;
        case 0x21a1f8u: goto label_21a1f8;
        case 0x21a1fcu: goto label_21a1fc;
        case 0x21a200u: goto label_21a200;
        case 0x21a204u: goto label_21a204;
        case 0x21a208u: goto label_21a208;
        case 0x21a20cu: goto label_21a20c;
        case 0x21a210u: goto label_21a210;
        case 0x21a214u: goto label_21a214;
        case 0x21a218u: goto label_21a218;
        case 0x21a21cu: goto label_21a21c;
        case 0x21a220u: goto label_21a220;
        case 0x21a224u: goto label_21a224;
        case 0x21a228u: goto label_21a228;
        case 0x21a22cu: goto label_21a22c;
        case 0x21a230u: goto label_21a230;
        case 0x21a234u: goto label_21a234;
        case 0x21a238u: goto label_21a238;
        case 0x21a23cu: goto label_21a23c;
        case 0x21a240u: goto label_21a240;
        case 0x21a244u: goto label_21a244;
        case 0x21a248u: goto label_21a248;
        case 0x21a24cu: goto label_21a24c;
        case 0x21a250u: goto label_21a250;
        case 0x21a254u: goto label_21a254;
        case 0x21a258u: goto label_21a258;
        case 0x21a25cu: goto label_21a25c;
        case 0x21a260u: goto label_21a260;
        case 0x21a264u: goto label_21a264;
        case 0x21a268u: goto label_21a268;
        case 0x21a26cu: goto label_21a26c;
        case 0x21a270u: goto label_21a270;
        case 0x21a274u: goto label_21a274;
        case 0x21a278u: goto label_21a278;
        case 0x21a27cu: goto label_21a27c;
        case 0x21a280u: goto label_21a280;
        case 0x21a284u: goto label_21a284;
        case 0x21a288u: goto label_21a288;
        case 0x21a28cu: goto label_21a28c;
        case 0x21a290u: goto label_21a290;
        case 0x21a294u: goto label_21a294;
        case 0x21a298u: goto label_21a298;
        case 0x21a29cu: goto label_21a29c;
        case 0x21a2a0u: goto label_21a2a0;
        case 0x21a2a4u: goto label_21a2a4;
        case 0x21a2a8u: goto label_21a2a8;
        case 0x21a2acu: goto label_21a2ac;
        case 0x21a2b0u: goto label_21a2b0;
        case 0x21a2b4u: goto label_21a2b4;
        case 0x21a2b8u: goto label_21a2b8;
        case 0x21a2bcu: goto label_21a2bc;
        case 0x21a2c0u: goto label_21a2c0;
        case 0x21a2c4u: goto label_21a2c4;
        case 0x21a2c8u: goto label_21a2c8;
        case 0x21a2ccu: goto label_21a2cc;
        case 0x21a2d0u: goto label_21a2d0;
        case 0x21a2d4u: goto label_21a2d4;
        case 0x21a2d8u: goto label_21a2d8;
        case 0x21a2dcu: goto label_21a2dc;
        case 0x21a2e0u: goto label_21a2e0;
        case 0x21a2e4u: goto label_21a2e4;
        case 0x21a2e8u: goto label_21a2e8;
        case 0x21a2ecu: goto label_21a2ec;
        case 0x21a2f0u: goto label_21a2f0;
        case 0x21a2f4u: goto label_21a2f4;
        case 0x21a2f8u: goto label_21a2f8;
        case 0x21a2fcu: goto label_21a2fc;
        case 0x21a300u: goto label_21a300;
        case 0x21a304u: goto label_21a304;
        case 0x21a308u: goto label_21a308;
        case 0x21a30cu: goto label_21a30c;
        case 0x21a310u: goto label_21a310;
        case 0x21a314u: goto label_21a314;
        case 0x21a318u: goto label_21a318;
        case 0x21a31cu: goto label_21a31c;
        case 0x21a320u: goto label_21a320;
        case 0x21a324u: goto label_21a324;
        case 0x21a328u: goto label_21a328;
        case 0x21a32cu: goto label_21a32c;
        case 0x21a330u: goto label_21a330;
        case 0x21a334u: goto label_21a334;
        case 0x21a338u: goto label_21a338;
        case 0x21a33cu: goto label_21a33c;
        case 0x21a340u: goto label_21a340;
        case 0x21a344u: goto label_21a344;
        case 0x21a348u: goto label_21a348;
        case 0x21a34cu: goto label_21a34c;
        case 0x21a350u: goto label_21a350;
        case 0x21a354u: goto label_21a354;
        case 0x21a358u: goto label_21a358;
        case 0x21a35cu: goto label_21a35c;
        case 0x21a360u: goto label_21a360;
        case 0x21a364u: goto label_21a364;
        case 0x21a368u: goto label_21a368;
        case 0x21a36cu: goto label_21a36c;
        case 0x21a370u: goto label_21a370;
        case 0x21a374u: goto label_21a374;
        case 0x21a378u: goto label_21a378;
        case 0x21a37cu: goto label_21a37c;
        case 0x21a380u: goto label_21a380;
        case 0x21a384u: goto label_21a384;
        case 0x21a388u: goto label_21a388;
        case 0x21a38cu: goto label_21a38c;
        case 0x21a390u: goto label_21a390;
        case 0x21a394u: goto label_21a394;
        case 0x21a398u: goto label_21a398;
        case 0x21a39cu: goto label_21a39c;
        case 0x21a3a0u: goto label_21a3a0;
        case 0x21a3a4u: goto label_21a3a4;
        case 0x21a3a8u: goto label_21a3a8;
        case 0x21a3acu: goto label_21a3ac;
        case 0x21a3b0u: goto label_21a3b0;
        case 0x21a3b4u: goto label_21a3b4;
        case 0x21a3b8u: goto label_21a3b8;
        case 0x21a3bcu: goto label_21a3bc;
        case 0x21a3c0u: goto label_21a3c0;
        case 0x21a3c4u: goto label_21a3c4;
        case 0x21a3c8u: goto label_21a3c8;
        case 0x21a3ccu: goto label_21a3cc;
        case 0x21a3d0u: goto label_21a3d0;
        case 0x21a3d4u: goto label_21a3d4;
        case 0x21a3d8u: goto label_21a3d8;
        case 0x21a3dcu: goto label_21a3dc;
        case 0x21a3e0u: goto label_21a3e0;
        case 0x21a3e4u: goto label_21a3e4;
        case 0x21a3e8u: goto label_21a3e8;
        case 0x21a3ecu: goto label_21a3ec;
        case 0x21a3f0u: goto label_21a3f0;
        case 0x21a3f4u: goto label_21a3f4;
        case 0x21a3f8u: goto label_21a3f8;
        case 0x21a3fcu: goto label_21a3fc;
        case 0x21a400u: goto label_21a400;
        case 0x21a404u: goto label_21a404;
        case 0x21a408u: goto label_21a408;
        case 0x21a40cu: goto label_21a40c;
        case 0x21a410u: goto label_21a410;
        case 0x21a414u: goto label_21a414;
        case 0x21a418u: goto label_21a418;
        case 0x21a41cu: goto label_21a41c;
        default: break;
    }

    ctx->pc = 0x21a140u;

label_21a140:
    // 0x21a140: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x21a140u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_21a144:
    // 0x21a144: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21a144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_21a148:
    // 0x21a148: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x21a148u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_21a14c:
    // 0x21a14c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21a14cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a150:
    // 0x21a150: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x21a150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_21a154:
    // 0x21a154: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x21a154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_21a158:
    // 0x21a158: 0xc35021  addu        $t2, $a2, $v1
    ctx->pc = 0x21a158u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_21a15c:
    // 0x21a15c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x21a15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21a160:
    // 0x21a160: 0xd95a0010  lqc2        $vf26, 0x10($t2)
    ctx->pc = 0x21a160u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_21a164:
    // 0x21a164: 0xd95b0020  lqc2        $vf27, 0x20($t2)
    ctx->pc = 0x21a164u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_21a168:
    // 0x21a168: 0xd95c0030  lqc2        $vf28, 0x30($t2)
    ctx->pc = 0x21a168u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 48)));
label_21a16c:
    // 0x21a16c: 0xd8dd0010  lqc2        $vf29, 0x10($a2)
    ctx->pc = 0x21a16cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_21a170:
    // 0x21a170: 0xd8de0020  lqc2        $vf30, 0x20($a2)
    ctx->pc = 0x21a170u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_21a174:
    // 0x21a174: 0xd8df0030  lqc2        $vf31, 0x30($a2)
    ctx->pc = 0x21a174u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_21a178:
    // 0x21a178: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x21a178u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
label_21a17c:
    // 0x21a17c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x21a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_21a180:
    // 0x21a180: 0x80a90000  lb          $t1, 0x0($a1)
    ctx->pc = 0x21a180u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21a184:
    // 0x21a184: 0x2d220019  sltiu       $v0, $t1, 0x19
    ctx->pc = 0x21a184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_21a188:
    // 0x21a188: 0x0  nop
    ctx->pc = 0x21a188u;
    // NOP
label_21a18c:
    // 0x21a18c: 0x0  nop
    ctx->pc = 0x21a18cu;
    // NOP
label_21a190:
    // 0x21a190: 0x0  nop
    ctx->pc = 0x21a190u;
    // NOP
label_21a194:
    // 0x21a194: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
label_21a198:
    if (ctx->pc == 0x21A198u) {
        ctx->pc = 0x21A198u;
            // 0x21a198: 0x80a90000  lb          $t1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x21A19Cu;
        goto label_21a19c;
    }
    ctx->pc = 0x21A194u;
    {
        const bool branch_taken_0x21a194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a194) {
            ctx->pc = 0x21A198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A194u;
            // 0x21a198: 0x80a90000  lb          $t1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A184u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a184;
        }
    }
    ctx->pc = 0x21A19Cu;
label_21a19c:
    // 0x21a19c: 0x2582eba0  addiu       $v0, $t4, -0x1460
    ctx->pc = 0x21a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962080));
label_21a1a0:
    // 0x21a1a0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x21a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_21a1a4:
    // 0x21a1a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21a1a8:
    // 0x21a1a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21a1ac:
    // 0x21a1ac: 0x800008  jr          $a0
label_21a1b0:
    if (ctx->pc == 0x21A1B0u) {
        ctx->pc = 0x21A1B4u;
        goto label_21a1b4;
    }
    ctx->pc = 0x21A1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A1B4u;
label_21a1b4:
    // 0x21a1b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x21a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_21a1b8:
    // 0x21a1b8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x21a1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21a1bc:
    // 0x21a1bc: 0x2449c1b0  addiu       $t1, $v0, -0x3E50
    ctx->pc = 0x21a1bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951344));
label_21a1c0:
    // 0x21a1c0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x21a1c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21a1c4:
    // 0x21a1c4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x21a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_21a1c8:
    // 0x21a1c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21a1c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21a1cc:
    // 0x21a1cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x21a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_21a1d0:
    // 0x21a1d0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x21a1d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21a1d4:
    // 0x21a1d4: 0x0  nop
    ctx->pc = 0x21a1d4u;
    // NOP
label_21a1d8:
    // 0x21a1d8: 0x1044fffb  beq         $v0, $a0, . + 4 + (-0x5 << 2)
label_21a1dc:
    if (ctx->pc == 0x21A1DCu) {
        ctx->pc = 0x21A1DCu;
            // 0x21a1dc: 0x491021  addu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->pc = 0x21A1E0u;
        goto label_21a1e0;
    }
    ctx->pc = 0x21A1D8u;
    {
        const bool branch_taken_0x21a1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x21A1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A1D8u;
            // 0x21a1dc: 0x491021  addu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1d8) {
            ctx->pc = 0x21A1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a1c8;
        }
    }
    ctx->pc = 0x21A1E0u;
label_21a1e0:
    // 0x21a1e0: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_21a1e4:
    if (ctx->pc == 0x21A1E4u) {
        ctx->pc = 0x21A1E4u;
            // 0x21a1e4: 0x80a90000  lb          $t1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x21A1E8u;
        goto label_21a1e8;
    }
    ctx->pc = 0x21A1E0u;
    {
        const bool branch_taken_0x21a1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A1E0u;
            // 0x21a1e4: 0x80a90000  lb          $t1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1e0) {
            ctx->pc = 0x21A184u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a184;
        }
    }
    ctx->pc = 0x21A1E8u;
label_21a1e8:
    // 0x21a1e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_21a1ec:
    // 0x21a1ec: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_21a1f0:
    if (ctx->pc == 0x21A1F0u) {
        ctx->pc = 0x21A1F0u;
            // 0x21a1f0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x21A1F4u;
        goto label_21a1f4;
    }
    ctx->pc = 0x21A1ECu;
    {
        const bool branch_taken_0x21a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A1ECu;
            // 0x21a1f0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1ec) {
            ctx->pc = 0x21A180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a180;
        }
    }
    ctx->pc = 0x21A1F4u;
label_21a1f4:
    // 0x21a1f4: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x21a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_21a1f8:
    // 0x21a1f8: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x21a1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21a1fc:
    // 0x21a1fc: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
label_21a200:
    if (ctx->pc == 0x21A200u) {
        ctx->pc = 0x21A200u;
            // 0x21a200: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21A204u;
        goto label_21a204;
    }
    ctx->pc = 0x21A1FCu;
    {
        const bool branch_taken_0x21a1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A1FCu;
            // 0x21a200: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1fc) {
            ctx->pc = 0x21A414u;
            goto label_21a414;
        }
    }
    ctx->pc = 0x21A204u;
label_21a204:
    // 0x21a204: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x21a204u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_21a208:
    // 0x21a208: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x21a208u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21a20c:
    // 0x21a20c: 0xd9430020  lqc2        $vf3, 0x20($t2)
    ctx->pc = 0x21a20cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_21a210:
    // 0x21a210: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x21a210u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a214:
    // 0x21a214: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x21a214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_21a218:
    // 0x21a218: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x21a218u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_21a21c:
    // 0x21a21c: 0x4be2296c  vsub.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x21a21cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a220:
    // 0x21a220: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x21a220u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_21a224:
    // 0x21a224: 0xd8c40020  lqc2        $vf4, 0x20($a2)
    ctx->pc = 0x21a224u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_21a228:
    // 0x21a228: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x21a228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a22c:
    // 0x21a22c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x21a22cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21a230:
    // 0x21a230: 0x4be2296a  vmul.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x21a230u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a234:
    // 0x21a234: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x21a234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a238:
    // 0x21a238: 0x4be518e8  vadd.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x21a238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a23c:
    // 0x21a23c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21a23cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21a240:
    // 0x21a240: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x21a240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21a244:
    // 0x21a244: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x21a244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21a248:
    // 0x21a248: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x21a248u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_21a24c:
    // 0x21a24c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21a24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21a250:
    // 0x21a250: 0x0  nop
    ctx->pc = 0x21a250u;
    // NOP
label_21a254:
    // 0x21a254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21a254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a258:
    // 0x21a258: 0x0  nop
    ctx->pc = 0x21a258u;
    // NOP
label_21a25c:
    // 0x21a25c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_21a260:
    if (ctx->pc == 0x21A260u) {
        ctx->pc = 0x21A260u;
            // 0x21a260: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x21A264u;
        goto label_21a264;
    }
    ctx->pc = 0x21A25Cu;
    {
        const bool branch_taken_0x21a25c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a25c) {
            ctx->pc = 0x21A260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A25Cu;
            // 0x21a260: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A264u;
            goto label_21a264;
        }
    }
    ctx->pc = 0x21A264u;
label_21a264:
    // 0x21a264: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x21a264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_21a268:
    // 0x21a268: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x21a268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_21a26c:
    // 0x21a26c: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_21a270:
    if (ctx->pc == 0x21A270u) {
        ctx->pc = 0x21A270u;
            // 0x21a270: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x21A274u;
        goto label_21a274;
    }
    ctx->pc = 0x21A26Cu;
    {
        const bool branch_taken_0x21a26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A26Cu;
            // 0x21a270: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a26c) {
            ctx->pc = 0x21A180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a180;
        }
    }
    ctx->pc = 0x21A274u;
label_21a274:
    // 0x21a274: 0x25630002  addiu       $v1, $t3, 0x2
    ctx->pc = 0x21a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_21a278:
    // 0x21a278: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x21a278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21a27c:
    // 0x21a27c: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_21a280:
    if (ctx->pc == 0x21A280u) {
        ctx->pc = 0x21A280u;
            // 0x21a280: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21A284u;
        goto label_21a284;
    }
    ctx->pc = 0x21A27Cu;
    {
        const bool branch_taken_0x21a27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A27Cu;
            // 0x21a280: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a27c) {
            ctx->pc = 0x21A414u;
            goto label_21a414;
        }
    }
    ctx->pc = 0x21A284u;
label_21a284:
    // 0x21a284: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x21a284u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_21a288:
    // 0x21a288: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x21a288u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21a28c:
    // 0x21a28c: 0xd9430020  lqc2        $vf3, 0x20($t2)
    ctx->pc = 0x21a28cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_21a290:
    // 0x21a290: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x21a290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a294:
    // 0x21a294: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x21a294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_21a298:
    // 0x21a298: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x21a298u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_21a29c:
    // 0x21a29c: 0x4be2296c  vsub.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x21a29cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a2a0:
    // 0x21a2a0: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x21a2a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_21a2a4:
    // 0x21a2a4: 0xd8c40020  lqc2        $vf4, 0x20($a2)
    ctx->pc = 0x21a2a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_21a2a8:
    // 0x21a2a8: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x21a2a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a2ac:
    // 0x21a2ac: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x21a2acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21a2b0:
    // 0x21a2b0: 0x4be2296a  vmul.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x21a2b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a2b4:
    // 0x21a2b4: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x21a2b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a2b8:
    // 0x21a2b8: 0x4be518e8  vadd.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x21a2b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a2bc:
    // 0x21a2bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21a2bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21a2c0:
    // 0x21a2c0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x21a2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21a2c4:
    // 0x21a2c4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x21a2c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21a2c8:
    // 0x21a2c8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x21a2c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_21a2cc:
    // 0x21a2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21a2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21a2d0:
    // 0x21a2d0: 0x0  nop
    ctx->pc = 0x21a2d0u;
    // NOP
label_21a2d4:
    // 0x21a2d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21a2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a2d8:
    // 0x21a2d8: 0x0  nop
    ctx->pc = 0x21a2d8u;
    // NOP
label_21a2dc:
    // 0x21a2dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_21a2e0:
    if (ctx->pc == 0x21A2E0u) {
        ctx->pc = 0x21A2E0u;
            // 0x21a2e0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x21A2E4u;
        goto label_21a2e4;
    }
    ctx->pc = 0x21A2DCu;
    {
        const bool branch_taken_0x21a2dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a2dc) {
            ctx->pc = 0x21A2E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A2DCu;
            // 0x21a2e0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A2E4u;
            goto label_21a2e4;
        }
    }
    ctx->pc = 0x21A2E4u;
label_21a2e4:
    // 0x21a2e4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x21a2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_21a2e8:
    // 0x21a2e8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x21a2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_21a2ec:
    // 0x21a2ec: 0xd8a10040  lqc2        $vf1, 0x40($a1)
    ctx->pc = 0x21a2ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 64)));
label_21a2f0:
    // 0x21a2f0: 0xd9430020  lqc2        $vf3, 0x20($t2)
    ctx->pc = 0x21a2f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_21a2f4:
    // 0x21a2f4: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x21a2f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a2f8:
    // 0x21a2f8: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x21a2f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_21a2fc:
    // 0x21a2fc: 0xd9450010  lqc2        $vf5, 0x10($t2)
    ctx->pc = 0x21a2fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_21a300:
    // 0x21a300: 0x4be2296c  vsub.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x21a300u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a304:
    // 0x21a304: 0xd8a10050  lqc2        $vf1, 0x50($a1)
    ctx->pc = 0x21a304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 80)));
label_21a308:
    // 0x21a308: 0xd8c40020  lqc2        $vf4, 0x20($a2)
    ctx->pc = 0x21a308u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_21a30c:
    // 0x21a30c: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x21a30cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a310:
    // 0x21a310: 0xd8a20030  lqc2        $vf2, 0x30($a1)
    ctx->pc = 0x21a310u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_21a314:
    // 0x21a314: 0x4be2296a  vmul.xyzw   $vf5, $vf5, $vf2
    ctx->pc = 0x21a314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_21a318:
    // 0x21a318: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x21a318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a31c:
    // 0x21a31c: 0x4be518e8  vadd.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x21a31cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a320:
    // 0x21a320: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x21a320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21a324:
    // 0x21a324: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x21a324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21a328:
    // 0x21a328: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x21a328u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_21a32c:
    // 0x21a32c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21a32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21a330:
    // 0x21a330: 0x0  nop
    ctx->pc = 0x21a330u;
    // NOP
label_21a334:
    // 0x21a334: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21a334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21a338:
    // 0x21a338: 0x0  nop
    ctx->pc = 0x21a338u;
    // NOP
label_21a33c:
    // 0x21a33c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_21a340:
    if (ctx->pc == 0x21A340u) {
        ctx->pc = 0x21A340u;
            // 0x21a340: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x21A344u;
        goto label_21a344;
    }
    ctx->pc = 0x21A33Cu;
    {
        const bool branch_taken_0x21a33c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a33c) {
            ctx->pc = 0x21A340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21A33Cu;
            // 0x21a340: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21A344u;
            goto label_21a344;
        }
    }
    ctx->pc = 0x21A344u;
label_21a344:
    // 0x21a344: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x21a344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_21a348:
    // 0x21a348: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x21a348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_21a34c:
    // 0x21a34c: 0x1000ff8c  b           . + 4 + (-0x74 << 2)
label_21a350:
    if (ctx->pc == 0x21A350u) {
        ctx->pc = 0x21A350u;
            // 0x21a350: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x21A354u;
        goto label_21a354;
    }
    ctx->pc = 0x21A34Cu;
    {
        const bool branch_taken_0x21a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A34Cu;
            // 0x21a350: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a34c) {
            ctx->pc = 0x21A180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a180;
        }
    }
    ctx->pc = 0x21A354u;
label_21a354:
    // 0x21a354: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x21a354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_21a358:
    // 0x21a358: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x21a358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21a35c:
    // 0x21a35c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_21a360:
    if (ctx->pc == 0x21A360u) {
        ctx->pc = 0x21A360u;
            // 0x21a360: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21A364u;
        goto label_21a364;
    }
    ctx->pc = 0x21A35Cu;
    {
        const bool branch_taken_0x21a35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A35Cu;
            // 0x21a360: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a35c) {
            ctx->pc = 0x21A414u;
            goto label_21a414;
        }
    }
    ctx->pc = 0x21A364u;
label_21a364:
    // 0x21a364: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x21a364u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_21a368:
    // 0x21a368: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x21a368u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21a36c:
    // 0x21a36c: 0xd9420020  lqc2        $vf2, 0x20($t2)
    ctx->pc = 0x21a36cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_21a370:
    // 0x21a370: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x21a370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_21a374:
    // 0x21a374: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x21a374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a378:
    // 0x21a378: 0xd9440010  lqc2        $vf4, 0x10($t2)
    ctx->pc = 0x21a378u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_21a37c:
    // 0x21a37c: 0xd8a50020  lqc2        $vf5, 0x20($a1)
    ctx->pc = 0x21a37cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_21a380:
    // 0x21a380: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x21a380u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a384:
    // 0x21a384: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x21a384u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_21a388:
    // 0x21a388: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x21a388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21a38c:
    // 0x21a38c: 0x4be518ea  vmul.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x21a38cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a390:
    // 0x21a390: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x21a390u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a394:
    // 0x21a394: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x21a394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a398:
    // 0x21a398: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x21a398u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a39c:
    // 0x21a39c: 0x10000014  b           . + 4 + (0x14 << 2)
label_21a3a0:
    if (ctx->pc == 0x21A3A0u) {
        ctx->pc = 0x21A3A0u;
            // 0x21a3a0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->pc = 0x21A3A4u;
        goto label_21a3a4;
    }
    ctx->pc = 0x21A39Cu;
    {
        const bool branch_taken_0x21a39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A39Cu;
            // 0x21a3a0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a39c) {
            ctx->pc = 0x21A3F0u;
            goto label_21a3f0;
        }
    }
    ctx->pc = 0x21A3A4u;
label_21a3a4:
    // 0x21a3a4: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x21a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_21a3a8:
    // 0x21a3a8: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x21a3a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21a3ac:
    // 0x21a3ac: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_21a3b0:
    if (ctx->pc == 0x21A3B0u) {
        ctx->pc = 0x21A3B0u;
            // 0x21a3b0: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21A3B4u;
        goto label_21a3b4;
    }
    ctx->pc = 0x21A3ACu;
    {
        const bool branch_taken_0x21a3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A3ACu;
            // 0x21a3b0: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3ac) {
            ctx->pc = 0x21A414u;
            goto label_21a414;
        }
    }
    ctx->pc = 0x21A3B4u;
label_21a3b4:
    // 0x21a3b4: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x21a3b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_21a3b8:
    // 0x21a3b8: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x21a3b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21a3bc:
    // 0x21a3bc: 0xd9420020  lqc2        $vf2, 0x20($t2)
    ctx->pc = 0x21a3bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_21a3c0:
    // 0x21a3c0: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x21a3c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_21a3c4:
    // 0x21a3c4: 0x4be310aa  vmul.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x21a3c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a3c8:
    // 0x21a3c8: 0xd9440010  lqc2        $vf4, 0x10($t2)
    ctx->pc = 0x21a3c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_21a3cc:
    // 0x21a3cc: 0xd8a50020  lqc2        $vf5, 0x20($a1)
    ctx->pc = 0x21a3ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_21a3d0:
    // 0x21a3d0: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x21a3d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a3d4:
    // 0x21a3d4: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x21a3d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_21a3d8:
    // 0x21a3d8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x21a3d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21a3dc:
    // 0x21a3dc: 0x4be518ea  vmul.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x21a3dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_21a3e0:
    // 0x21a3e0: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x21a3e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_21a3e4:
    // 0x21a3e4: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x21a3e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a3e8:
    // 0x21a3e8: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x21a3e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21a3ec:
    // 0x21a3ec: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x21a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_21a3f0:
    // 0x21a3f0: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x21a3f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21a3f4:
    // 0x21a3f4: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x21a3f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_21a3f8:
    // 0x21a3f8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x21a3f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_21a3fc:
    // 0x21a3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21a3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21a400:
    // 0x21a400: 0x0  nop
    ctx->pc = 0x21a400u;
    // NOP
label_21a404:
    // 0x21a404: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x21a404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_21a408:
    // 0x21a408: 0x1000ff5d  b           . + 4 + (-0xA3 << 2)
label_21a40c:
    if (ctx->pc == 0x21A40Cu) {
        ctx->pc = 0x21A40Cu;
            // 0x21a40c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x21A410u;
        goto label_21a410;
    }
    ctx->pc = 0x21A408u;
    {
        const bool branch_taken_0x21a408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A408u;
            // 0x21a40c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a408) {
            ctx->pc = 0x21A180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a180;
        }
    }
    ctx->pc = 0x21A410u;
label_21a410:
    // 0x21a410: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x21a410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_21a414:
    // 0x21a414: 0x3e00008  jr          $ra
label_21a418:
    if (ctx->pc == 0x21A418u) {
        ctx->pc = 0x21A418u;
            // 0x21a418: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x21A41Cu;
        goto label_21a41c;
    }
    ctx->pc = 0x21A414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A414u;
            // 0x21a418: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A41Cu;
label_21a41c:
    // 0x21a41c: 0x0  nop
    ctx->pc = 0x21a41cu;
    // NOP
}
