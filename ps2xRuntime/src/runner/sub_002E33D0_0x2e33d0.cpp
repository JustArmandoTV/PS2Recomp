#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E33D0
// Address: 0x2e33d0 - 0x2e3d40
void sub_002E33D0_0x2e33d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E33D0_0x2e33d0");
#endif

    switch (ctx->pc) {
        case 0x2e3428u: goto label_2e3428;
        case 0x2e343cu: goto label_2e343c;
        case 0x2e34dcu: goto label_2e34dc;
        case 0x2e34ecu: goto label_2e34ec;
        case 0x2e3554u: goto label_2e3554;
        case 0x2e3570u: goto label_2e3570;
        case 0x2e3584u: goto label_2e3584;
        case 0x2e3590u: goto label_2e3590;
        case 0x2e35c4u: goto label_2e35c4;
        case 0x2e35d4u: goto label_2e35d4;
        case 0x2e35ecu: goto label_2e35ec;
        case 0x2e35fcu: goto label_2e35fc;
        case 0x2e363cu: goto label_2e363c;
        case 0x2e3654u: goto label_2e3654;
        case 0x2e3668u: goto label_2e3668;
        case 0x2e3694u: goto label_2e3694;
        case 0x2e36acu: goto label_2e36ac;
        case 0x2e36b4u: goto label_2e36b4;
        case 0x2e3700u: goto label_2e3700;
        case 0x2e372cu: goto label_2e372c;
        case 0x2e3744u: goto label_2e3744;
        case 0x2e374cu: goto label_2e374c;
        case 0x2e3790u: goto label_2e3790;
        case 0x2e37a4u: goto label_2e37a4;
        case 0x2e37c8u: goto label_2e37c8;
        case 0x2e37e0u: goto label_2e37e0;
        case 0x2e37ecu: goto label_2e37ec;
        case 0x2e3810u: goto label_2e3810;
        case 0x2e3824u: goto label_2e3824;
        case 0x2e3848u: goto label_2e3848;
        case 0x2e3860u: goto label_2e3860;
        case 0x2e3868u: goto label_2e3868;
        case 0x2e388cu: goto label_2e388c;
        case 0x2e38d0u: goto label_2e38d0;
        case 0x2e38e0u: goto label_2e38e0;
        case 0x2e38e8u: goto label_2e38e8;
        case 0x2e38fcu: goto label_2e38fc;
        case 0x2e3920u: goto label_2e3920;
        case 0x2e3938u: goto label_2e3938;
        case 0x2e3940u: goto label_2e3940;
        case 0x2e3964u: goto label_2e3964;
        case 0x2e39acu: goto label_2e39ac;
        case 0x2e39dcu: goto label_2e39dc;
        case 0x2e39f4u: goto label_2e39f4;
        case 0x2e3a40u: goto label_2e3a40;
        case 0x2e3a70u: goto label_2e3a70;
        case 0x2e3ab0u: goto label_2e3ab0;
        case 0x2e3abcu: goto label_2e3abc;
        case 0x2e3aecu: goto label_2e3aec;
        case 0x2e3b20u: goto label_2e3b20;
        case 0x2e3b4cu: goto label_2e3b4c;
        case 0x2e3b64u: goto label_2e3b64;
        case 0x2e3b6cu: goto label_2e3b6c;
        case 0x2e3bb8u: goto label_2e3bb8;
        case 0x2e3be4u: goto label_2e3be4;
        case 0x2e3bfcu: goto label_2e3bfc;
        case 0x2e3c68u: goto label_2e3c68;
        case 0x2e3c9cu: goto label_2e3c9c;
        case 0x2e3d00u: goto label_2e3d00;
        case 0x2e3d0cu: goto label_2e3d0c;
        case 0x2e3d24u: goto label_2e3d24;
        default: break;
    }

    ctx->pc = 0x2e33d0u;

    // 0x2e33d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2e33d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2e33d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e33d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e33d8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2e33d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2e33dc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2e33dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2e33e0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2e33e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2e33e4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e33e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2e33e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e33e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e33ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e33ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2e33f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e33f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e33f4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2e33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2e33f8: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x2e33f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e33fc: 0x10200227  beqz        $at, . + 4 + (0x227 << 2)
    ctx->pc = 0x2E33FCu;
    {
        const bool branch_taken_0x2e33fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E33FCu;
            // 0x2e3400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33fc) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3404u;
    // 0x2e3404: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2e3404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2e3408: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e3408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e340c: 0x24a51b70  addiu       $a1, $a1, 0x1B70
    ctx->pc = 0x2e340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7024));
    // 0x2e3410: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e3410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e3414: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e3414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3418: 0x600008  jr          $v1
    ctx->pc = 0x2E3418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E3420u: goto label_2e3420;
            case 0x2E3444u: goto label_2e3444;
            case 0x2E3670u: goto label_2e3670;
            case 0x2E3708u: goto label_2e3708;
            case 0x2E3798u: goto label_2e3798;
            case 0x2E3818u: goto label_2e3818;
            case 0x2E3894u: goto label_2e3894;
            case 0x2E39B8u: goto label_2e39b8;
            case 0x2E3B28u: goto label_2e3b28;
            case 0x2E3BC0u: goto label_2e3bc0;
            case 0x2E3C9Cu: goto label_2e3c9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E3420u;
label_2e3420:
    // 0x2e3420: 0xc040180  jal         func_100600
    ctx->pc = 0x2E3420u;
    SET_GPR_U32(ctx, 31, 0x2E3428u);
    ctx->pc = 0x2E3424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3420u;
            // 0x2e3424: 0x240406a4  addiu       $a0, $zero, 0x6A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3428u; }
        if (ctx->pc != 0x2E3428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3428u; }
        if (ctx->pc != 0x2E3428u) { return; }
    }
    ctx->pc = 0x2E3428u;
label_2e3428:
    // 0x2e3428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e3428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e342c: 0x5080021c  beql        $a0, $zero, . + 4 + (0x21C << 2)
    ctx->pc = 0x2E342Cu;
    {
        const bool branch_taken_0x2e342c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e342c) {
            ctx->pc = 0x2E3430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E342Cu;
            // 0x2e3430: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E3CA0u;
            goto label_2e3ca0;
        }
    }
    ctx->pc = 0x2E3434u;
    // 0x2e3434: 0xc0ca39c  jal         func_328E70
    ctx->pc = 0x2E3434u;
    SET_GPR_U32(ctx, 31, 0x2E343Cu);
    ctx->pc = 0x328E70u;
    if (runtime->hasFunction(0x328E70u)) {
        auto targetFn = runtime->lookupFunction(0x328E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E343Cu; }
        if (ctx->pc != 0x2E343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328E70_0x328e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E343Cu; }
        if (ctx->pc != 0x2E343Cu) { return; }
    }
    ctx->pc = 0x2E343Cu;
label_2e343c:
    // 0x2e343c: 0x10000217  b           . + 4 + (0x217 << 2)
    ctx->pc = 0x2E343Cu;
    {
        const bool branch_taken_0x2e343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e343c) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3444u;
label_2e3444:
    // 0x2e3444: 0x8206008d  lb          $a2, 0x8D($s0)
    ctx->pc = 0x2e3444u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
    // 0x2e3448: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2e3448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2e344c: 0x24a51aa0  addiu       $a1, $a1, 0x1AA0
    ctx->pc = 0x2e344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6816));
    // 0x2e3450: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e3450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e3454: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e3454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e3458: 0xa206008d  sb          $a2, 0x8D($s0)
    ctx->pc = 0x2e3458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 6));
    // 0x2e345c: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x2e345cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2e3460: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x2e3460u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x2e3464: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2e3464u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2e3468: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x2e3468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2e346c: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x2e346cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e3470: 0x50a30076  beql        $a1, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x2E3470u;
    {
        const bool branch_taken_0x2e3470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3470) {
            ctx->pc = 0x2E3474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3470u;
            // 0x2e3474: 0x240406a4  addiu       $a0, $zero, 0x6A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1700));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E364Cu;
            goto label_2e364c;
        }
    }
    ctx->pc = 0x2E3478u;
    // 0x2e3478: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e3478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e347c: 0x50a30071  beql        $a1, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2E347Cu;
    {
        const bool branch_taken_0x2e347c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e347c) {
            ctx->pc = 0x2E3480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E347Cu;
            // 0x2e3480: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E3644u;
            goto label_2e3644;
        }
    }
    ctx->pc = 0x2E3484u;
    // 0x2e3484: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e3484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3488: 0x50a3005a  beql        $a1, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x2E3488u;
    {
        const bool branch_taken_0x2e3488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3488) {
            ctx->pc = 0x2E348Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3488u;
            // 0x2e348c: 0x90d00001  lbu         $s0, 0x1($a2) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E35F4u;
            goto label_2e35f4;
        }
    }
    ctx->pc = 0x2E3490u;
    // 0x2e3490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e3490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3494: 0x50a3004d  beql        $a1, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2E3494u;
    {
        const bool branch_taken_0x2e3494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3494) {
            ctx->pc = 0x2E3498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3494u;
            // 0x2e3498: 0x90d00001  lbu         $s0, 0x1($a2) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E35CCu;
            goto label_2e35cc;
        }
    }
    ctx->pc = 0x2E349Cu;
    // 0x2e349c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E349Cu;
    {
        const bool branch_taken_0x2e349c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e349c) {
            ctx->pc = 0x2E34A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E349Cu;
            // 0x2e34a0: 0x90c60001  lbu         $a2, 0x1($a2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E34ACu;
            goto label_2e34ac;
        }
    }
    ctx->pc = 0x2E34A4u;
    // 0x2e34a4: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x2E34A4u;
    {
        const bool branch_taken_0x2e34a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e34a4) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E34ACu;
label_2e34ac:
    // 0x2e34ac: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2e34acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2e34b0: 0x24421ad0  addiu       $v0, $v0, 0x1AD0
    ctx->pc = 0x2e34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6864));
    // 0x2e34b4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2e34b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e34b8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2e34b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e34bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e34c0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2e34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e34c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2e34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e34c8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2e34c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e34cc: 0x82360000  lb          $s6, 0x0($s1)
    ctx->pc = 0x2e34ccu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e34d0: 0x82270001  lb          $a3, 0x1($s1)
    ctx->pc = 0x2e34d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2e34d4: 0xc0b9084  jal         func_2E4210
    ctx->pc = 0x2E34D4u;
    SET_GPR_U32(ctx, 31, 0x2E34DCu);
    ctx->pc = 0x2E34D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E34D4u;
            // 0x2e34d8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4210u;
    if (runtime->hasFunction(0x2E4210u)) {
        auto targetFn = runtime->lookupFunction(0x2E4210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34DCu; }
        if (ctx->pc != 0x2E34DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4210_0x2e4210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E34DCu; }
        if (ctx->pc != 0x2E34DCu) { return; }
    }
    ctx->pc = 0x2E34DCu;
label_2e34dc:
    // 0x2e34dc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e34dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e34e0: 0x27b400b0  addiu       $s4, $sp, 0xB0
    ctx->pc = 0x2e34e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e34e4: 0x26330002  addiu       $s3, $s1, 0x2
    ctx->pc = 0x2e34e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2e34e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e34e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e34ec:
    // 0x2e34ec: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x2e34ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e34f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e34f4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E34F4u;
    {
        const bool branch_taken_0x2e34f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e34f4) {
            ctx->pc = 0x2E3528u;
            goto label_2e3528;
        }
    }
    ctx->pc = 0x2E34FCu;
    // 0x2e34fc: 0x16b2000a  bne         $s5, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2E34FCu;
    {
        const bool branch_taken_0x2e34fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e34fc) {
            ctx->pc = 0x2E3528u;
            goto label_2e3528;
        }
    }
    ctx->pc = 0x2E3504u;
    // 0x2e3504: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x2e3504u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e3508: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x2e3508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2e350c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2e350cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2e3510: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e3510u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e3514: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2e3514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2e3518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e3518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e351c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E351Cu;
    {
        const bool branch_taken_0x2e351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E351Cu;
            // 0x2e3520: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e351c) {
            ctx->pc = 0x2E3540u;
            goto label_2e3540;
        }
    }
    ctx->pc = 0x2E3524u;
    // 0x2e3524: 0x0  nop
    ctx->pc = 0x2e3524u;
    // NOP
label_2e3528:
    // 0x2e3528: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x2e3528u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e352c: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x2e352cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2e3530: 0x3243001f  andi        $v1, $s2, 0x1F
    ctx->pc = 0x2e3530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x2e3534: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2e3534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2e3538: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e3538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e353c: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x2e353cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_2e3540:
    // 0x2e3540: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e3540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3544: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e3544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e354c: 0xc0c90f4  jal         func_3243D0
    ctx->pc = 0x2E354Cu;
    SET_GPR_U32(ctx, 31, 0x2E3554u);
    ctx->pc = 0x2E3550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E354Cu;
            // 0x2e3550: 0xa2800001  sb          $zero, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3243D0u;
    if (runtime->hasFunction(0x3243D0u)) {
        auto targetFn = runtime->lookupFunction(0x3243D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3554u; }
        if (ctx->pc != 0x2E3554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003243D0_0x3243d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3554u; }
        if (ctx->pc != 0x2E3554u) { return; }
    }
    ctx->pc = 0x2E3554u;
label_2e3554:
    // 0x2e3554: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e3554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e3558: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e3558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e355c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x2e355cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e3560: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2E3560u;
    {
        const bool branch_taken_0x2e3560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3560u;
            // 0x2e3564: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3560) {
            ctx->pc = 0x2E34ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e34ec;
        }
    }
    ctx->pc = 0x2E3568u;
    // 0x2e3568: 0xc040180  jal         func_100600
    ctx->pc = 0x2E3568u;
    SET_GPR_U32(ctx, 31, 0x2E3570u);
    ctx->pc = 0x2E356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3568u;
            // 0x2e356c: 0x24040cbc  addiu       $a0, $zero, 0xCBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3570u; }
        if (ctx->pc != 0x2E3570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3570u; }
        if (ctx->pc != 0x2E3570u) { return; }
    }
    ctx->pc = 0x2E3570u;
label_2e3570:
    // 0x2e3570: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e3570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3574: 0x126001c9  beqz        $s3, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x2E3574u;
    {
        const bool branch_taken_0x2e3574 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3574) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E357Cu;
    // 0x2e357c: 0xc0b369c  jal         func_2CDA70
    ctx->pc = 0x2E357Cu;
    SET_GPR_U32(ctx, 31, 0x2E3584u);
    ctx->pc = 0x2E3580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E357Cu;
            // 0x2e3580: 0x82320001  lb          $s2, 0x1($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA70u;
    if (runtime->hasFunction(0x2CDA70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3584u; }
        if (ctx->pc != 0x2E3584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDA70_0x2cda70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3584u; }
        if (ctx->pc != 0x2E3584u) { return; }
    }
    ctx->pc = 0x2E3584u;
label_2e3584:
    // 0x2e3584: 0x82250000  lb          $a1, 0x0($s1)
    ctx->pc = 0x2e3584u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e3588: 0xc0b909c  jal         func_2E4270
    ctx->pc = 0x2E3588u;
    SET_GPR_U32(ctx, 31, 0x2E3590u);
    ctx->pc = 0x2E358Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3588u;
            // 0x2e358c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4270u;
    if (runtime->hasFunction(0x2E4270u)) {
        auto targetFn = runtime->lookupFunction(0x2E4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3590u; }
        if (ctx->pc != 0x2E3590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4270_0x2e4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3590u; }
        if (ctx->pc != 0x2E3590u) { return; }
    }
    ctx->pc = 0x2E3590u;
label_2e3590:
    // 0x2e3590: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e3590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e3594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3598: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2e3598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2e359c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e359cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e35a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e35a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e35a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35a8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2e35a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2e35ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e35acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35b0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2e35b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35b4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2e35b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35b8: 0x260a0004  addiu       $t2, $s0, 0x4
    ctx->pc = 0x2e35b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e35bc: 0xc0cd08c  jal         func_334230
    ctx->pc = 0x2E35BCu;
    SET_GPR_U32(ctx, 31, 0x2E35C4u);
    ctx->pc = 0x2E35C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35BCu;
            // 0x2e35c0: 0x260b0080  addiu       $t3, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334230u;
    if (runtime->hasFunction(0x334230u)) {
        auto targetFn = runtime->lookupFunction(0x334230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35C4u; }
        if (ctx->pc != 0x2E35C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334230_0x334230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35C4u; }
        if (ctx->pc != 0x2E35C4u) { return; }
    }
    ctx->pc = 0x2E35C4u;
label_2e35c4:
    // 0x2e35c4: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x2E35C4u;
    {
        const bool branch_taken_0x2e35c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e35c4) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E35CCu;
label_2e35cc:
    // 0x2e35cc: 0xc040180  jal         func_100600
    ctx->pc = 0x2E35CCu;
    SET_GPR_U32(ctx, 31, 0x2E35D4u);
    ctx->pc = 0x2E35D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35CCu;
            // 0x2e35d0: 0x240408b0  addiu       $a0, $zero, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35D4u; }
        if (ctx->pc != 0x2E35D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35D4u; }
        if (ctx->pc != 0x2E35D4u) { return; }
    }
    ctx->pc = 0x2E35D4u;
label_2e35d4:
    // 0x2e35d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e35d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35d8: 0x108001b0  beqz        $a0, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x2E35D8u;
    {
        const bool branch_taken_0x2e35d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e35d8) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E35E0u;
    // 0x2e35e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e35e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35e4: 0xc0d3168  jal         func_34C5A0
    ctx->pc = 0x2E35E4u;
    SET_GPR_U32(ctx, 31, 0x2E35ECu);
    ctx->pc = 0x2E35E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35E4u;
            // 0x2e35e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34C5A0u;
    if (runtime->hasFunction(0x34C5A0u)) {
        auto targetFn = runtime->lookupFunction(0x34C5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35ECu; }
        if (ctx->pc != 0x2E35ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034C5A0_0x34c5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35ECu; }
        if (ctx->pc != 0x2E35ECu) { return; }
    }
    ctx->pc = 0x2E35ECu;
label_2e35ec:
    // 0x2e35ec: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x2E35ECu;
    {
        const bool branch_taken_0x2e35ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e35ec) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E35F4u;
label_2e35f4:
    // 0x2e35f4: 0xc040180  jal         func_100600
    ctx->pc = 0x2E35F4u;
    SET_GPR_U32(ctx, 31, 0x2E35FCu);
    ctx->pc = 0x2E35F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E35F4u;
            // 0x2e35f8: 0x24040170  addiu       $a0, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35FCu; }
        if (ctx->pc != 0x2E35FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E35FCu; }
        if (ctx->pc != 0x2E35FCu) { return; }
    }
    ctx->pc = 0x2E35FCu;
label_2e35fc:
    // 0x2e35fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e35fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3600: 0x108001a6  beqz        $a0, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x2E3600u;
    {
        const bool branch_taken_0x2e3600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3600) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3608u;
    // 0x2e3608: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2e3608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e360c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2e360cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3610: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x2e3610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x2e3614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3618: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x2e3618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x2e361c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2e361cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3620: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x2e3620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x2e3624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e3624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3628: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x2e3628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x2e362c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e362cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3630: 0x240a0402  addiu       $t2, $zero, 0x402
    ctx->pc = 0x2e3630u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x2e3634: 0xc0f122c  jal         func_3C48B0
    ctx->pc = 0x2E3634u;
    SET_GPR_U32(ctx, 31, 0x2E363Cu);
    ctx->pc = 0x2E3638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3634u;
            // 0x2e3638: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C48B0u;
    if (runtime->hasFunction(0x3C48B0u)) {
        auto targetFn = runtime->lookupFunction(0x3C48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E363Cu; }
        if (ctx->pc != 0x2E363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C48B0_0x3c48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E363Cu; }
        if (ctx->pc != 0x2E363Cu) { return; }
    }
    ctx->pc = 0x2E363Cu;
label_2e363c:
    // 0x2e363c: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x2E363Cu;
    {
        const bool branch_taken_0x2e363c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e363c) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3644u;
label_2e3644:
    // 0x2e3644: 0xa202008d  sb          $v0, 0x8D($s0)
    ctx->pc = 0x2e3644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e3648: 0x240406a4  addiu       $a0, $zero, 0x6A4
    ctx->pc = 0x2e3648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1700));
label_2e364c:
    // 0x2e364c: 0xc040180  jal         func_100600
    ctx->pc = 0x2E364Cu;
    SET_GPR_U32(ctx, 31, 0x2E3654u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3654u; }
        if (ctx->pc != 0x2E3654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3654u; }
        if (ctx->pc != 0x2E3654u) { return; }
    }
    ctx->pc = 0x2E3654u;
label_2e3654:
    // 0x2e3654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e3654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3658: 0x10800190  beqz        $a0, . + 4 + (0x190 << 2)
    ctx->pc = 0x2E3658u;
    {
        const bool branch_taken_0x2e3658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3658) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3660u;
    // 0x2e3660: 0xc0ca39c  jal         func_328E70
    ctx->pc = 0x2E3660u;
    SET_GPR_U32(ctx, 31, 0x2E3668u);
    ctx->pc = 0x328E70u;
    if (runtime->hasFunction(0x328E70u)) {
        auto targetFn = runtime->lookupFunction(0x328E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3668u; }
        if (ctx->pc != 0x2E3668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00328E70_0x328e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3668u; }
        if (ctx->pc != 0x2E3668u) { return; }
    }
    ctx->pc = 0x2E3668u;
label_2e3668:
    // 0x2e3668: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x2E3668u;
    {
        const bool branch_taken_0x2e3668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3668) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3670u;
label_2e3670:
    // 0x2e3670: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e3670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2e3674: 0x82060028  lb          $a2, 0x28($s0)
    ctx->pc = 0x2e3674u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e3678: 0x8c51a348  lw          $s1, -0x5CB8($v0)
    ctx->pc = 0x2e3678u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x2e367c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2e367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e3680: 0x8207002a  lb          $a3, 0x2A($s0)
    ctx->pc = 0x2e3680u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e3684: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3688: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x2e3688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x2e368c: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x2E368Cu;
    SET_GPR_U32(ctx, 31, 0x2E3694u);
    ctx->pc = 0x2E3690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E368Cu;
            // 0x2e3690: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3694u; }
        if (ctx->pc != 0x2E3694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3694u; }
        if (ctx->pc != 0x2E3694u) { return; }
    }
    ctx->pc = 0x2E3694u;
label_2e3694:
    // 0x2e3694: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e3694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e3698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e3698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e369c: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x2e369cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e36a0: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e36a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e36a4: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x2E36A4u;
    SET_GPR_U32(ctx, 31, 0x2E36ACu);
    ctx->pc = 0x2E36A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E36A4u;
            // 0x2e36a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E36ACu; }
        if (ctx->pc != 0x2E36ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E36ACu; }
        if (ctx->pc != 0x2E36ACu) { return; }
    }
    ctx->pc = 0x2E36ACu;
label_2e36ac:
    // 0x2e36ac: 0xc040180  jal         func_100600
    ctx->pc = 0x2E36ACu;
    SET_GPR_U32(ctx, 31, 0x2E36B4u);
    ctx->pc = 0x2E36B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E36ACu;
            // 0x2e36b0: 0x24040cbc  addiu       $a0, $zero, 0xCBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E36B4u; }
        if (ctx->pc != 0x2E36B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E36B4u; }
        if (ctx->pc != 0x2E36B4u) { return; }
    }
    ctx->pc = 0x2E36B4u;
label_2e36b4:
    // 0x2e36b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e36b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36b8: 0x10800178  beqz        $a0, . + 4 + (0x178 << 2)
    ctx->pc = 0x2E36B8u;
    {
        const bool branch_taken_0x2e36b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e36b8) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E36C0u;
    // 0x2e36c0: 0x8207002a  lb          $a3, 0x2A($s0)
    ctx->pc = 0x2e36c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e36c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e36c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e36c8: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2e36c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e36cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e36d0: 0x260a0004  addiu       $t2, $s0, 0x4
    ctx->pc = 0x2e36d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e36d4: 0x260b0080  addiu       $t3, $s0, 0x80
    ctx->pc = 0x2e36d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e36d8: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2e36d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2e36dc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2e36dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2e36e0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x2e36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e36e4: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e36e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e36e8: 0x82060029  lb          $a2, 0x29($s0)
    ctx->pc = 0x2e36e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x2e36ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e36f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e36f4: 0x80490431  lb          $t1, 0x431($v0)
    ctx->pc = 0x2e36f4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1073)));
    // 0x2e36f8: 0xc0cd08c  jal         func_334230
    ctx->pc = 0x2E36F8u;
    SET_GPR_U32(ctx, 31, 0x2E3700u);
    ctx->pc = 0x2E36FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E36F8u;
            // 0x2e36fc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334230u;
    if (runtime->hasFunction(0x334230u)) {
        auto targetFn = runtime->lookupFunction(0x334230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3700u; }
        if (ctx->pc != 0x2E3700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334230_0x334230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3700u; }
        if (ctx->pc != 0x2E3700u) { return; }
    }
    ctx->pc = 0x2E3700u;
label_2e3700:
    // 0x2e3700: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x2E3700u;
    {
        const bool branch_taken_0x2e3700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3700) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3708u;
label_2e3708:
    // 0x2e3708: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e3708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2e370c: 0x82060028  lb          $a2, 0x28($s0)
    ctx->pc = 0x2e370cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e3710: 0x8c51a348  lw          $s1, -0x5CB8($v0)
    ctx->pc = 0x2e3710u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x2e3714: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2e3714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e3718: 0x8207002a  lb          $a3, 0x2A($s0)
    ctx->pc = 0x2e3718u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e371c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e371cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3720: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x2e3720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x2e3724: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x2E3724u;
    SET_GPR_U32(ctx, 31, 0x2E372Cu);
    ctx->pc = 0x2E3728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3724u;
            // 0x2e3728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E372Cu; }
        if (ctx->pc != 0x2E372Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E372Cu; }
        if (ctx->pc != 0x2E372Cu) { return; }
    }
    ctx->pc = 0x2E372Cu;
label_2e372c:
    // 0x2e372c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e372cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e3730: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e3730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3734: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x2e3734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e3738: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e3738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e373c: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x2E373Cu;
    SET_GPR_U32(ctx, 31, 0x2E3744u);
    ctx->pc = 0x2E3740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E373Cu;
            // 0x2e3740: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3744u; }
        if (ctx->pc != 0x2E3744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3744u; }
        if (ctx->pc != 0x2E3744u) { return; }
    }
    ctx->pc = 0x2E3744u;
label_2e3744:
    // 0x2e3744: 0xc040180  jal         func_100600
    ctx->pc = 0x2E3744u;
    SET_GPR_U32(ctx, 31, 0x2E374Cu);
    ctx->pc = 0x2E3748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3744u;
            // 0x2e3748: 0x24040ce4  addiu       $a0, $zero, 0xCE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E374Cu; }
        if (ctx->pc != 0x2E374Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E374Cu; }
        if (ctx->pc != 0x2E374Cu) { return; }
    }
    ctx->pc = 0x2E374Cu;
label_2e374c:
    // 0x2e374c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3750: 0x10800152  beqz        $a0, . + 4 + (0x152 << 2)
    ctx->pc = 0x2E3750u;
    {
        const bool branch_taken_0x2e3750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3750) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3758u;
    // 0x2e3758: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e3758u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e375c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2e375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2e3760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e3760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3764: 0x24421b18  addiu       $v0, $v0, 0x1B18
    ctx->pc = 0x2e3764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6936));
    // 0x2e3768: 0x8e0b0024  lw          $t3, 0x24($s0)
    ctx->pc = 0x2e3768u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e376c: 0x26090004  addiu       $t1, $s0, 0x4
    ctx->pc = 0x2e376cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e3770: 0x38a30007  xori        $v1, $a1, 0x7
    ctx->pc = 0x2e3770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
    // 0x2e3774: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2e3774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3778: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2e3778u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e377c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e377cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e3780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3784: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2e3784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3788: 0xc118ad8  jal         func_462B60
    ctx->pc = 0x2E3788u;
    SET_GPR_U32(ctx, 31, 0x2E3790u);
    ctx->pc = 0x2E378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3788u;
            // 0x2e378c: 0x260a0080  addiu       $t2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x462B60u;
    if (runtime->hasFunction(0x462B60u)) {
        auto targetFn = runtime->lookupFunction(0x462B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3790u; }
        if (ctx->pc != 0x2E3790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00462B60_0x462b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3790u; }
        if (ctx->pc != 0x2E3790u) { return; }
    }
    ctx->pc = 0x2E3790u;
label_2e3790:
    // 0x2e3790: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x2E3790u;
    {
        const bool branch_taken_0x2e3790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3790) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3798u;
label_2e3798:
    // 0x2e3798: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e3798u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e379c: 0xc0d047c  jal         func_3411F0
    ctx->pc = 0x2E379Cu;
    SET_GPR_U32(ctx, 31, 0x2E37A4u);
    ctx->pc = 0x2E37A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E379Cu;
            // 0x2e37a0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3411F0u;
    if (runtime->hasFunction(0x3411F0u)) {
        auto targetFn = runtime->lookupFunction(0x3411F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37A4u; }
        if (ctx->pc != 0x2E37A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003411F0_0x3411f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37A4u; }
        if (ctx->pc != 0x2E37A4u) { return; }
    }
    ctx->pc = 0x2E37A4u;
label_2e37a4:
    // 0x2e37a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2e37a8: 0x82060028  lb          $a2, 0x28($s0)
    ctx->pc = 0x2e37a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e37ac: 0x8c51a348  lw          $s1, -0x5CB8($v0)
    ctx->pc = 0x2e37acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x2e37b0: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x2e37b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2e37b4: 0x8207002b  lb          $a3, 0x2B($s0)
    ctx->pc = 0x2e37b4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x2e37b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e37bc: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x2e37bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x2e37c0: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x2E37C0u;
    SET_GPR_U32(ctx, 31, 0x2E37C8u);
    ctx->pc = 0x2E37C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37C0u;
            // 0x2e37c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37C8u; }
        if (ctx->pc != 0x2E37C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37C8u; }
        if (ctx->pc != 0x2E37C8u) { return; }
    }
    ctx->pc = 0x2E37C8u;
label_2e37c8:
    // 0x2e37c8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e37c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e37cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e37ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e37d0: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x2e37d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e37d4: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e37d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e37d8: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x2E37D8u;
    SET_GPR_U32(ctx, 31, 0x2E37E0u);
    ctx->pc = 0x2E37DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37D8u;
            // 0x2e37dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37E0u; }
        if (ctx->pc != 0x2E37E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37E0u; }
        if (ctx->pc != 0x2E37E0u) { return; }
    }
    ctx->pc = 0x2E37E0u;
label_2e37e0:
    // 0x2e37e0: 0x24040d4c  addiu       $a0, $zero, 0xD4C
    ctx->pc = 0x2e37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3404));
    // 0x2e37e4: 0xc040180  jal         func_100600
    ctx->pc = 0x2E37E4u;
    SET_GPR_U32(ctx, 31, 0x2E37ECu);
    ctx->pc = 0x2E37E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37E4u;
            // 0x2e37e8: 0xa20000f0  sb          $zero, 0xF0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37ECu; }
        if (ctx->pc != 0x2E37ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37ECu; }
        if (ctx->pc != 0x2E37ECu) { return; }
    }
    ctx->pc = 0x2E37ECu;
label_2e37ec:
    // 0x2e37ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e37f0: 0x1080012a  beqz        $a0, . + 4 + (0x12A << 2)
    ctx->pc = 0x2E37F0u;
    {
        const bool branch_taken_0x2e37f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e37f0) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E37F8u;
    // 0x2e37f8: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e37f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e37fc: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x2e37fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e3800: 0x8206002b  lb          $a2, 0x2B($s0)
    ctx->pc = 0x2e3800u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x2e3804: 0x8e090024  lw          $t1, 0x24($s0)
    ctx->pc = 0x2e3804u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e3808: 0xc0d041c  jal         func_341070
    ctx->pc = 0x2E3808u;
    SET_GPR_U32(ctx, 31, 0x2E3810u);
    ctx->pc = 0x2E380Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3808u;
            // 0x2e380c: 0x26080080  addiu       $t0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341070u;
    if (runtime->hasFunction(0x341070u)) {
        auto targetFn = runtime->lookupFunction(0x341070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3810u; }
        if (ctx->pc != 0x2E3810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341070_0x341070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3810u; }
        if (ctx->pc != 0x2E3810u) { return; }
    }
    ctx->pc = 0x2E3810u;
label_2e3810:
    // 0x2e3810: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x2E3810u;
    {
        const bool branch_taken_0x2e3810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3810) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3818u;
label_2e3818:
    // 0x2e3818: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e3818u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e381c: 0xc0d047c  jal         func_3411F0
    ctx->pc = 0x2E381Cu;
    SET_GPR_U32(ctx, 31, 0x2E3824u);
    ctx->pc = 0x2E3820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E381Cu;
            // 0x2e3820: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3411F0u;
    if (runtime->hasFunction(0x3411F0u)) {
        auto targetFn = runtime->lookupFunction(0x3411F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3824u; }
        if (ctx->pc != 0x2E3824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003411F0_0x3411f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3824u; }
        if (ctx->pc != 0x2E3824u) { return; }
    }
    ctx->pc = 0x2E3824u;
label_2e3824:
    // 0x2e3824: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e3824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2e3828: 0x82060028  lb          $a2, 0x28($s0)
    ctx->pc = 0x2e3828u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e382c: 0x8c51a348  lw          $s1, -0x5CB8($v0)
    ctx->pc = 0x2e382cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x2e3830: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x2e3830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2e3834: 0x8207002b  lb          $a3, 0x2B($s0)
    ctx->pc = 0x2e3834u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x2e3838: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e383c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x2e383cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x2e3840: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x2E3840u;
    SET_GPR_U32(ctx, 31, 0x2E3848u);
    ctx->pc = 0x2E3844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3840u;
            // 0x2e3844: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3848u; }
        if (ctx->pc != 0x2E3848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3848u; }
        if (ctx->pc != 0x2E3848u) { return; }
    }
    ctx->pc = 0x2E3848u;
label_2e3848:
    // 0x2e3848: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e3848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e384c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3850: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x2e3850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e3854: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e3854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e3858: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x2E3858u;
    SET_GPR_U32(ctx, 31, 0x2E3860u);
    ctx->pc = 0x2E385Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3858u;
            // 0x2e385c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3860u; }
        if (ctx->pc != 0x2E3860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3860u; }
        if (ctx->pc != 0x2E3860u) { return; }
    }
    ctx->pc = 0x2E3860u;
label_2e3860:
    // 0x2e3860: 0xc040180  jal         func_100600
    ctx->pc = 0x2E3860u;
    SET_GPR_U32(ctx, 31, 0x2E3868u);
    ctx->pc = 0x2E3864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3860u;
            // 0x2e3864: 0x24040d4c  addiu       $a0, $zero, 0xD4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3404));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3868u; }
        if (ctx->pc != 0x2E3868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3868u; }
        if (ctx->pc != 0x2E3868u) { return; }
    }
    ctx->pc = 0x2E3868u;
label_2e3868:
    // 0x2e3868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e3868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e386c: 0x1080010b  beqz        $a0, . + 4 + (0x10B << 2)
    ctx->pc = 0x2E386Cu;
    {
        const bool branch_taken_0x2e386c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e386c) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3874u;
    // 0x2e3874: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e3874u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e3878: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x2e3878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e387c: 0x8206002b  lb          $a2, 0x2B($s0)
    ctx->pc = 0x2e387cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x2e3880: 0x8e090024  lw          $t1, 0x24($s0)
    ctx->pc = 0x2e3880u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e3884: 0xc0d041c  jal         func_341070
    ctx->pc = 0x2E3884u;
    SET_GPR_U32(ctx, 31, 0x2E388Cu);
    ctx->pc = 0x2E3888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3884u;
            // 0x2e3888: 0x26080080  addiu       $t0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341070u;
    if (runtime->hasFunction(0x341070u)) {
        auto targetFn = runtime->lookupFunction(0x341070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E388Cu; }
        if (ctx->pc != 0x2E388Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341070_0x341070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E388Cu; }
        if (ctx->pc != 0x2E388Cu) { return; }
    }
    ctx->pc = 0x2E388Cu;
label_2e388c:
    // 0x2e388c: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x2E388Cu;
    {
        const bool branch_taken_0x2e388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e388c) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3894u;
label_2e3894:
    // 0x2e3894: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3898: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e3898u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e389c: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x2e389cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e38a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e38a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e38a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e38a8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2e38a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2e38ac: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x2e38acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x2e38b0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2e38b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e38b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e38b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e38b8: 0x450019  multu       $v0, $a1
    ctx->pc = 0x2e38b8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e38bc: 0x1010  mfhi        $v0
    ctx->pc = 0x2e38bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e38c0: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x2e38c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2e38c4: 0x3010  mfhi        $a2
    ctx->pc = 0x2e38c4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2e38c8: 0xc1204c8  jal         func_481320
    ctx->pc = 0x2E38C8u;
    SET_GPR_U32(ctx, 31, 0x2E38D0u);
    ctx->pc = 0x2E38CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38C8u;
            // 0x2e38cc: 0x22882  srl         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481320u;
    if (runtime->hasFunction(0x481320u)) {
        auto targetFn = runtime->lookupFunction(0x481320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38D0u; }
        if (ctx->pc != 0x2E38D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481320_0x481320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38D0u; }
        if (ctx->pc != 0x2E38D0u) { return; }
    }
    ctx->pc = 0x2E38D0u;
label_2e38d0:
    // 0x2e38d0: 0xa20000f0  sb          $zero, 0xF0($s0)
    ctx->pc = 0x2e38d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e38d4: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e38d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e38d8: 0xc0d047c  jal         func_3411F0
    ctx->pc = 0x2E38D8u;
    SET_GPR_U32(ctx, 31, 0x2E38E0u);
    ctx->pc = 0x2E38DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38D8u;
            // 0x2e38dc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3411F0u;
    if (runtime->hasFunction(0x3411F0u)) {
        auto targetFn = runtime->lookupFunction(0x3411F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38E0u; }
        if (ctx->pc != 0x2E38E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003411F0_0x3411f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38E0u; }
        if (ctx->pc != 0x2E38E0u) { return; }
    }
    ctx->pc = 0x2E38E0u;
label_2e38e0:
    // 0x2e38e0: 0xc040180  jal         func_100600
    ctx->pc = 0x2E38E0u;
    SET_GPR_U32(ctx, 31, 0x2E38E8u);
    ctx->pc = 0x2E38E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38E0u;
            // 0x2e38e4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38E8u; }
        if (ctx->pc != 0x2E38E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38E8u; }
        if (ctx->pc != 0x2E38E8u) { return; }
    }
    ctx->pc = 0x2E38E8u;
label_2e38e8:
    // 0x2e38e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E38E8u;
    {
        const bool branch_taken_0x2e38e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e38e8) {
            ctx->pc = 0x2E38FCu;
            goto label_2e38fc;
        }
    }
    ctx->pc = 0x2E38F0u;
    // 0x2e38f0: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e38f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e38f4: 0xc133b44  jal         func_4CED10
    ctx->pc = 0x2E38F4u;
    SET_GPR_U32(ctx, 31, 0x2E38FCu);
    ctx->pc = 0x2E38F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38F4u;
            // 0x2e38f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CED10u;
    if (runtime->hasFunction(0x4CED10u)) {
        auto targetFn = runtime->lookupFunction(0x4CED10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38FCu; }
        if (ctx->pc != 0x2E38FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CED10_0x4ced10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38FCu; }
        if (ctx->pc != 0x2E38FCu) { return; }
    }
    ctx->pc = 0x2E38FCu;
label_2e38fc:
    // 0x2e38fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2e3900: 0x82060028  lb          $a2, 0x28($s0)
    ctx->pc = 0x2e3900u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e3904: 0x8c51a348  lw          $s1, -0x5CB8($v0)
    ctx->pc = 0x2e3904u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x2e3908: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x2e3908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2e390c: 0x8207002a  lb          $a3, 0x2A($s0)
    ctx->pc = 0x2e390cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e3910: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3914: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x2e3914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x2e3918: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x2E3918u;
    SET_GPR_U32(ctx, 31, 0x2E3920u);
    ctx->pc = 0x2E391Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3918u;
            // 0x2e391c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3920u; }
        if (ctx->pc != 0x2E3920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3920u; }
        if (ctx->pc != 0x2E3920u) { return; }
    }
    ctx->pc = 0x2E3920u;
label_2e3920:
    // 0x2e3920: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e3920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e3924: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e3924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3928: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x2e3928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e392c: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e392cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e3930: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x2E3930u;
    SET_GPR_U32(ctx, 31, 0x2E3938u);
    ctx->pc = 0x2E3934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3930u;
            // 0x2e3934: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3938u; }
        if (ctx->pc != 0x2E3938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3938u; }
        if (ctx->pc != 0x2E3938u) { return; }
    }
    ctx->pc = 0x2E3938u;
label_2e3938:
    // 0x2e3938: 0xc040180  jal         func_100600
    ctx->pc = 0x2E3938u;
    SET_GPR_U32(ctx, 31, 0x2E3940u);
    ctx->pc = 0x2E393Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3938u;
            // 0x2e393c: 0x24040d78  addiu       $a0, $zero, 0xD78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3940u; }
        if (ctx->pc != 0x2E3940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3940u; }
        if (ctx->pc != 0x2E3940u) { return; }
    }
    ctx->pc = 0x2E3940u;
label_2e3940:
    // 0x2e3940: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2E3940u;
    {
        const bool branch_taken_0x2e3940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3940u;
            // 0x2e3944: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3940) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3948u;
    // 0x2e3948: 0x82060028  lb          $a2, 0x28($s0)
    ctx->pc = 0x2e3948u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e394c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e3950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3954: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x2e3954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e3958: 0x26080080  addiu       $t0, $s0, 0x80
    ctx->pc = 0x2e3958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e395c: 0xc0d041c  jal         func_341070
    ctx->pc = 0x2E395Cu;
    SET_GPR_U32(ctx, 31, 0x2E3964u);
    ctx->pc = 0x2E3960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E395Cu;
            // 0x2e3960: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x341070u;
    if (runtime->hasFunction(0x341070u)) {
        auto targetFn = runtime->lookupFunction(0x341070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3964u; }
        if (ctx->pc != 0x2E3964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341070_0x341070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3964u; }
        if (ctx->pc != 0x2E3964u) { return; }
    }
    ctx->pc = 0x2E3964u;
label_2e3964:
    // 0x2e3964: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2e3964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2e3968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e3968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e396c: 0x24421440  addiu       $v0, $v0, 0x1440
    ctx->pc = 0x2e396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
    // 0x2e3970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3974: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e3974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e3978: 0xae200d4c  sw          $zero, 0xD4C($s1)
    ctx->pc = 0x2e3978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3404), GPR_U32(ctx, 0));
    // 0x2e397c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e397cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3980: 0xae200d50  sw          $zero, 0xD50($s1)
    ctx->pc = 0x2e3980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3408), GPR_U32(ctx, 0));
    // 0x2e3984: 0xae200d54  sw          $zero, 0xD54($s1)
    ctx->pc = 0x2e3984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3412), GPR_U32(ctx, 0));
    // 0x2e3988: 0xae200d58  sw          $zero, 0xD58($s1)
    ctx->pc = 0x2e3988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3416), GPR_U32(ctx, 0));
    // 0x2e398c: 0xae200d5c  sw          $zero, 0xD5C($s1)
    ctx->pc = 0x2e398cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3420), GPR_U32(ctx, 0));
    // 0x2e3990: 0xae200d60  sw          $zero, 0xD60($s1)
    ctx->pc = 0x2e3990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3424), GPR_U32(ctx, 0));
    // 0x2e3994: 0xae200d6c  sw          $zero, 0xD6C($s1)
    ctx->pc = 0x2e3994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3436), GPR_U32(ctx, 0));
    // 0x2e3998: 0xa2230d74  sb          $v1, 0xD74($s1)
    ctx->pc = 0x2e3998u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3444), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e399c: 0xa2200d75  sb          $zero, 0xD75($s1)
    ctx->pc = 0x2e399cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3445), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e39a0: 0xa2200d76  sb          $zero, 0xD76($s1)
    ctx->pc = 0x2e39a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3446), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e39a4: 0xc130bb0  jal         func_4C2EC0
    ctx->pc = 0x2E39A4u;
    SET_GPR_U32(ctx, 31, 0x2E39ACu);
    ctx->pc = 0x2E39A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E39A4u;
            // 0x2e39a8: 0xa0436068  sb          $v1, 0x6068($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 24680), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C2EC0u;
    if (runtime->hasFunction(0x4C2EC0u)) {
        auto targetFn = runtime->lookupFunction(0x4C2EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39ACu; }
        if (ctx->pc != 0x2E39ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C2EC0_0x4c2ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39ACu; }
        if (ctx->pc != 0x2E39ACu) { return; }
    }
    ctx->pc = 0x2E39ACu;
label_2e39ac:
    // 0x2e39ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e39acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e39b0: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2E39B0u;
    {
        const bool branch_taken_0x2e39b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E39B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E39B0u;
            // 0x2e39b4: 0xa2230cc0  sb          $v1, 0xCC0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3264), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e39b0) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E39B8u;
label_2e39b8:
    // 0x2e39b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2e39bc: 0x82060028  lb          $a2, 0x28($s0)
    ctx->pc = 0x2e39bcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e39c0: 0x8c51a348  lw          $s1, -0x5CB8($v0)
    ctx->pc = 0x2e39c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x2e39c4: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x2e39c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x2e39c8: 0x8207002a  lb          $a3, 0x2A($s0)
    ctx->pc = 0x2e39c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e39cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e39d0: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x2e39d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x2e39d4: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x2E39D4u;
    SET_GPR_U32(ctx, 31, 0x2E39DCu);
    ctx->pc = 0x2E39D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E39D4u;
            // 0x2e39d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39DCu; }
        if (ctx->pc != 0x2E39DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39DCu; }
        if (ctx->pc != 0x2E39DCu) { return; }
    }
    ctx->pc = 0x2E39DCu;
label_2e39dc:
    // 0x2e39dc: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e39dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e39e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e39e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e39e4: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x2e39e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e39e8: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e39e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e39ec: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x2E39ECu;
    SET_GPR_U32(ctx, 31, 0x2E39F4u);
    ctx->pc = 0x2E39F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E39ECu;
            // 0x2e39f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39F4u; }
        if (ctx->pc != 0x2E39F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E39F4u; }
        if (ctx->pc != 0x2E39F4u) { return; }
    }
    ctx->pc = 0x2E39F4u;
label_2e39f4:
    // 0x2e39f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e39f8: 0x8203002a  lb          $v1, 0x2A($s0)
    ctx->pc = 0x2e39f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e39fc: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x2e39fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e3a00: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2e3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e3a04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e3a08: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2e3a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e3a0c: 0x80910436  lb          $s1, 0x436($a0)
    ctx->pc = 0x2e3a0cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1078)));
    // 0x2e3a10: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E3A10u;
    {
        const bool branch_taken_0x2e3a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A10u;
            // 0x2e3a14: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a10) {
            ctx->pc = 0x2E3AA0u;
            goto label_2e3aa0;
        }
    }
    ctx->pc = 0x2E3A18u;
    // 0x2e3a18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e3a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3a1c: 0x50640012  beql        $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E3A1Cu;
    {
        const bool branch_taken_0x2e3a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e3a1c) {
            ctx->pc = 0x2E3A20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A1Cu;
            // 0x2e3a20: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E3A68u;
            goto label_2e3a68;
        }
    }
    ctx->pc = 0x2E3A24u;
    // 0x2e3a24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e3a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3a28: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3A28u;
    {
        const bool branch_taken_0x2e3a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e3a28) {
            ctx->pc = 0x2E3A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A28u;
            // 0x2e3a2c: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E3A38u;
            goto label_2e3a38;
        }
    }
    ctx->pc = 0x2E3A30u;
    // 0x2e3a30: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E3A30u;
    {
        const bool branch_taken_0x2e3a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A30u;
            // 0x2e3a34: 0x24040dc0  addiu       $a0, $zero, 0xDC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a30) {
            ctx->pc = 0x2E3AE4u;
            goto label_2e3ae4;
        }
    }
    ctx->pc = 0x2E3A38u;
label_2e3a38:
    // 0x2e3a38: 0xc12f394  jal         func_4BCE50
    ctx->pc = 0x2E3A38u;
    SET_GPR_U32(ctx, 31, 0x2E3A40u);
    ctx->pc = 0x4BCE50u;
    if (runtime->hasFunction(0x4BCE50u)) {
        auto targetFn = runtime->lookupFunction(0x4BCE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A40u; }
        if (ctx->pc != 0x2E3A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BCE50_0x4bce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A40u; }
        if (ctx->pc != 0x2E3A40u) { return; }
    }
    ctx->pc = 0x2E3A40u;
label_2e3a40:
    // 0x2e3a40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e3a44: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2e3a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2e3a48: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3A48u;
    {
        const bool branch_taken_0x2e3a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A48u;
            // 0x2e3a4c: 0xa2030029  sb          $v1, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a48) {
            ctx->pc = 0x2E3A54u;
            goto label_2e3a54;
        }
    }
    ctx->pc = 0x2E3A50u;
    // 0x2e3a50: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2e3a50u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2e3a54:
    // 0x2e3a54: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x2e3a54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3a58: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E3A58u;
    {
        const bool branch_taken_0x2e3a58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3a58) {
            ctx->pc = 0x2E3AE0u;
            goto label_2e3ae0;
        }
    }
    ctx->pc = 0x2E3A60u;
    // 0x2e3a60: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E3A60u;
    {
        const bool branch_taken_0x2e3a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A60u;
            // 0x2e3a64: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a60) {
            ctx->pc = 0x2E3AE0u;
            goto label_2e3ae0;
        }
    }
    ctx->pc = 0x2E3A68u;
label_2e3a68:
    // 0x2e3a68: 0xc12f394  jal         func_4BCE50
    ctx->pc = 0x2E3A68u;
    SET_GPR_U32(ctx, 31, 0x2E3A70u);
    ctx->pc = 0x4BCE50u;
    if (runtime->hasFunction(0x4BCE50u)) {
        auto targetFn = runtime->lookupFunction(0x4BCE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A70u; }
        if (ctx->pc != 0x2E3A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BCE50_0x4bce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3A70u; }
        if (ctx->pc != 0x2E3A70u) { return; }
    }
    ctx->pc = 0x2E3A70u;
label_2e3a70:
    // 0x2e3a70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3a74: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2e3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e3a78: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x2e3a78u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x2e3a7c: 0x1010  mfhi        $v0
    ctx->pc = 0x2e3a7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e3a80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3A80u;
    {
        const bool branch_taken_0x2e3a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A80u;
            // 0x2e3a84: 0xa2030029  sb          $v1, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a80) {
            ctx->pc = 0x2E3A8Cu;
            goto label_2e3a8c;
        }
    }
    ctx->pc = 0x2E3A88u;
    // 0x2e3a88: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2e3a88u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2e3a8c:
    // 0x2e3a8c: 0x2e210003  sltiu       $at, $s1, 0x3
    ctx->pc = 0x2e3a8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e3a90: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E3A90u;
    {
        const bool branch_taken_0x2e3a90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3a90) {
            ctx->pc = 0x2E3AE0u;
            goto label_2e3ae0;
        }
    }
    ctx->pc = 0x2E3A98u;
    // 0x2e3a98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E3A98u;
    {
        const bool branch_taken_0x2e3a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3A98u;
            // 0x2e3a9c: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a98) {
            ctx->pc = 0x2E3AE0u;
            goto label_2e3ae0;
        }
    }
    ctx->pc = 0x2E3AA0u;
label_2e3aa0:
    // 0x2e3aa0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2e3aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3aa4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2e3aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e3aa8: 0xc12f394  jal         func_4BCE50
    ctx->pc = 0x2E3AA8u;
    SET_GPR_U32(ctx, 31, 0x2E3AB0u);
    ctx->pc = 0x2E3AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AA8u;
            // 0x2e3aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BCE50u;
    if (runtime->hasFunction(0x4BCE50u)) {
        auto targetFn = runtime->lookupFunction(0x4BCE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AB0u; }
        if (ctx->pc != 0x2E3AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BCE50_0x4bce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AB0u; }
        if (ctx->pc != 0x2E3AB0u) { return; }
    }
    ctx->pc = 0x2E3AB0u;
label_2e3ab0:
    // 0x2e3ab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e3ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ab4: 0xc12f394  jal         func_4BCE50
    ctx->pc = 0x2E3AB4u;
    SET_GPR_U32(ctx, 31, 0x2E3ABCu);
    ctx->pc = 0x2E3AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AB4u;
            // 0x2e3ab8: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BCE50u;
    if (runtime->hasFunction(0x4BCE50u)) {
        auto targetFn = runtime->lookupFunction(0x4BCE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3ABCu; }
        if (ctx->pc != 0x2E3ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BCE50_0x4bce50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3ABCu; }
        if (ctx->pc != 0x2E3ABCu) { return; }
    }
    ctx->pc = 0x2E3ABCu;
label_2e3abc:
    // 0x2e3abc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e3abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e3ac0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2e3ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2e3ac4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3AC4u;
    {
        const bool branch_taken_0x2e3ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3AC4u;
            // 0x2e3ac8: 0xa2030029  sb          $v1, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ac4) {
            ctx->pc = 0x2E3AD0u;
            goto label_2e3ad0;
        }
    }
    ctx->pc = 0x2E3ACCu;
    // 0x2e3acc: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2e3accu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2e3ad0:
    // 0x2e3ad0: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x2e3ad0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3ad4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3AD4u;
    {
        const bool branch_taken_0x2e3ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ad4) {
            ctx->pc = 0x2E3AE0u;
            goto label_2e3ae0;
        }
    }
    ctx->pc = 0x2E3ADCu;
    // 0x2e3adc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2e3adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e3ae0:
    // 0x2e3ae0: 0x24040dc0  addiu       $a0, $zero, 0xDC0
    ctx->pc = 0x2e3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3520));
label_2e3ae4:
    // 0x2e3ae4: 0xc040180  jal         func_100600
    ctx->pc = 0x2E3AE4u;
    SET_GPR_U32(ctx, 31, 0x2E3AECu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AECu; }
        if (ctx->pc != 0x2E3AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3AECu; }
        if (ctx->pc != 0x2E3AECu) { return; }
    }
    ctx->pc = 0x2E3AECu;
label_2e3aec:
    // 0x2e3aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e3aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3af0: 0x1080006a  beqz        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2E3AF0u;
    {
        const bool branch_taken_0x2e3af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3af0) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3AF8u;
    // 0x2e3af8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e3afc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2e3afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b00: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2e3b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2e3b04: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2e3b04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b08: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e3b08u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e3b0c: 0x260a0004  addiu       $t2, $s0, 0x4
    ctx->pc = 0x2e3b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e3b10: 0x82060029  lb          $a2, 0x29($s0)
    ctx->pc = 0x2e3b10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x2e3b14: 0x8207002a  lb          $a3, 0x2A($s0)
    ctx->pc = 0x2e3b14u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e3b18: 0xc12f330  jal         func_4BCCC0
    ctx->pc = 0x2E3B18u;
    SET_GPR_U32(ctx, 31, 0x2E3B20u);
    ctx->pc = 0x2E3B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B18u;
            // 0x2e3b1c: 0x260b0080  addiu       $t3, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BCCC0u;
    if (runtime->hasFunction(0x4BCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x4BCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B20u; }
        if (ctx->pc != 0x2E3B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BCCC0_0x4bccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B20u; }
        if (ctx->pc != 0x2E3B20u) { return; }
    }
    ctx->pc = 0x2E3B20u;
label_2e3b20:
    // 0x2e3b20: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2E3B20u;
    {
        const bool branch_taken_0x2e3b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3b20) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3B28u;
label_2e3b28:
    // 0x2e3b28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2e3b2c: 0x82060028  lb          $a2, 0x28($s0)
    ctx->pc = 0x2e3b2cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e3b30: 0x8c51a348  lw          $s1, -0x5CB8($v0)
    ctx->pc = 0x2e3b30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x2e3b34: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x2e3b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2e3b38: 0x8207002a  lb          $a3, 0x2A($s0)
    ctx->pc = 0x2e3b38u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e3b3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3b40: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x2e3b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x2e3b44: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x2E3B44u;
    SET_GPR_U32(ctx, 31, 0x2E3B4Cu);
    ctx->pc = 0x2E3B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B44u;
            // 0x2e3b48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B4Cu; }
        if (ctx->pc != 0x2E3B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B4Cu; }
        if (ctx->pc != 0x2E3B4Cu) { return; }
    }
    ctx->pc = 0x2E3B4Cu;
label_2e3b4c:
    // 0x2e3b4c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e3b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e3b50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e3b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b54: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x2e3b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e3b58: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e3b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e3b5c: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x2E3B5Cu;
    SET_GPR_U32(ctx, 31, 0x2E3B64u);
    ctx->pc = 0x2E3B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B5Cu;
            // 0x2e3b60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B64u; }
        if (ctx->pc != 0x2E3B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B64u; }
        if (ctx->pc != 0x2E3B64u) { return; }
    }
    ctx->pc = 0x2E3B64u;
label_2e3b64:
    // 0x2e3b64: 0xc040180  jal         func_100600
    ctx->pc = 0x2E3B64u;
    SET_GPR_U32(ctx, 31, 0x2E3B6Cu);
    ctx->pc = 0x2E3B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3B64u;
            // 0x2e3b68: 0x24040d0c  addiu       $a0, $zero, 0xD0C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3340));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B6Cu; }
        if (ctx->pc != 0x2E3B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3B6Cu; }
        if (ctx->pc != 0x2E3B6Cu) { return; }
    }
    ctx->pc = 0x2E3B6Cu;
label_2e3b6c:
    // 0x2e3b6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e3b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b70: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2E3B70u;
    {
        const bool branch_taken_0x2e3b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3b70) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3B78u;
    // 0x2e3b78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3b7c: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x2e3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e3b80: 0x8c450ec8  lw          $a1, 0xEC8($v0)
    ctx->pc = 0x2e3b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e3b84: 0x240a0063  addiu       $t2, $zero, 0x63
    ctx->pc = 0x2e3b84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2e3b88: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2e3b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e3b8c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e3b90: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x2e3b90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e3b94: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2e3b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x2e3b98: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2e3b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2e3b9c: 0x80e60438  lb          $a2, 0x438($a3)
    ctx->pc = 0x2e3b9cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1080)));
    // 0x2e3ba0: 0x82050028  lb          $a1, 0x28($s0)
    ctx->pc = 0x2e3ba0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e3ba4: 0x82080029  lb          $t0, 0x29($s0)
    ctx->pc = 0x2e3ba4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x2e3ba8: 0x80e70439  lb          $a3, 0x439($a3)
    ctx->pc = 0x2e3ba8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1081)));
    // 0x2e3bac: 0x8209002a  lb          $t1, 0x2A($s0)
    ctx->pc = 0x2e3bacu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e3bb0: 0xc10aae8  jal         func_42ABA0
    ctx->pc = 0x2E3BB0u;
    SET_GPR_U32(ctx, 31, 0x2E3BB8u);
    ctx->pc = 0x2E3BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BB0u;
            // 0x2e3bb4: 0x260b0004  addiu       $t3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42ABA0u;
    if (runtime->hasFunction(0x42ABA0u)) {
        auto targetFn = runtime->lookupFunction(0x42ABA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BB8u; }
        if (ctx->pc != 0x2E3BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042ABA0_0x42aba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BB8u; }
        if (ctx->pc != 0x2E3BB8u) { return; }
    }
    ctx->pc = 0x2E3BB8u;
label_2e3bb8:
    // 0x2e3bb8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2E3BB8u;
    {
        const bool branch_taken_0x2e3bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3bb8) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3BC0u;
label_2e3bc0:
    // 0x2e3bc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2e3bc4: 0x82060028  lb          $a2, 0x28($s0)
    ctx->pc = 0x2e3bc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e3bc8: 0x8c51a348  lw          $s1, -0x5CB8($v0)
    ctx->pc = 0x2e3bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x2e3bcc: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2e3bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2e3bd0: 0x8207002a  lb          $a3, 0x2A($s0)
    ctx->pc = 0x2e3bd0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e3bd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3bd8: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x2e3bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x2e3bdc: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x2E3BDCu;
    SET_GPR_U32(ctx, 31, 0x2E3BE4u);
    ctx->pc = 0x2E3BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BDCu;
            // 0x2e3be0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BE4u; }
        if (ctx->pc != 0x2E3BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BE4u; }
        if (ctx->pc != 0x2E3BE4u) { return; }
    }
    ctx->pc = 0x2E3BE4u;
label_2e3be4:
    // 0x2e3be4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2e3be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e3be8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e3be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3bec: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x2e3becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e3bf0: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e3bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e3bf4: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x2E3BF4u;
    SET_GPR_U32(ctx, 31, 0x2E3BFCu);
    ctx->pc = 0x2E3BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3BF4u;
            // 0x2e3bf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BFCu; }
        if (ctx->pc != 0x2E3BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3BFCu; }
        if (ctx->pc != 0x2E3BFCu) { return; }
    }
    ctx->pc = 0x2E3BFCu;
label_2e3bfc:
    // 0x2e3bfc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e3c00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3c04: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x2e3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x2e3c08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e3c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e3c10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e3c14: 0x8082043a  lb          $v0, 0x43A($a0)
    ctx->pc = 0x2e3c14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1082)));
    // 0x2e3c18: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E3C18u;
    {
        const bool branch_taken_0x2e3c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E3C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C18u;
            // 0x2e3c1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c18) {
            ctx->pc = 0x2E3C58u;
            goto label_2e3c58;
        }
    }
    ctx->pc = 0x2E3C20u;
    // 0x2e3c20: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3C20u;
    {
        const bool branch_taken_0x2e3c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3c20) {
            ctx->pc = 0x2E3C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C20u;
            // 0x2e3c24: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E3C30u;
            goto label_2e3c30;
        }
    }
    ctx->pc = 0x2E3C28u;
    // 0x2e3c28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E3C28u;
    {
        const bool branch_taken_0x2e3c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C28u;
            // 0x2e3c2c: 0x24040ce8  addiu       $a0, $zero, 0xCE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c28) {
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3C30u;
label_2e3c30:
    // 0x2e3c30: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x2e3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x2e3c34: 0x8083043b  lb          $v1, 0x43B($a0)
    ctx->pc = 0x2e3c34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1083)));
    // 0x2e3c38: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x2e3c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x2e3c3c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2e3c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e3c40: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2e3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e3c44: 0x0  nop
    ctx->pc = 0x2e3c44u;
    // NOP
    // 0x2e3c48: 0x1010  mfhi        $v0
    ctx->pc = 0x2e3c48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e3c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3c50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3C50u;
    {
        const bool branch_taken_0x2e3c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C50u;
            // 0x2e3c54: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c50) {
            ctx->pc = 0x2E3C5Cu;
            goto label_2e3c5c;
        }
    }
    ctx->pc = 0x2E3C58u;
label_2e3c58:
    // 0x2e3c58: 0x8091043c  lb          $s1, 0x43C($a0)
    ctx->pc = 0x2e3c58u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1084)));
label_2e3c5c:
    // 0x2e3c5c: 0x24040ce8  addiu       $a0, $zero, 0xCE8
    ctx->pc = 0x2e3c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3304));
label_2e3c60:
    // 0x2e3c60: 0xc040180  jal         func_100600
    ctx->pc = 0x2E3C60u;
    SET_GPR_U32(ctx, 31, 0x2E3C68u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C68u; }
        if (ctx->pc != 0x2E3C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C68u; }
        if (ctx->pc != 0x2E3C68u) { return; }
    }
    ctx->pc = 0x2E3C68u;
label_2e3c68:
    // 0x2e3c68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e3c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c6c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3C6Cu;
    {
        const bool branch_taken_0x2e3c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3c6c) {
            ctx->pc = 0x2E3C9Cu;
            goto label_2e3c9c;
        }
    }
    ctx->pc = 0x2E3C74u;
    // 0x2e3c74: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2e3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e3c78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e3c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c7c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2e3c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2e3c80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e3c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c84: 0x82070028  lb          $a3, 0x28($s0)
    ctx->pc = 0x2e3c84u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2e3c88: 0x260a0004  addiu       $t2, $s0, 0x4
    ctx->pc = 0x2e3c88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e3c8c: 0x82080029  lb          $t0, 0x29($s0)
    ctx->pc = 0x2e3c8cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x2e3c90: 0x8209002a  lb          $t1, 0x2A($s0)
    ctx->pc = 0x2e3c90u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x2e3c94: 0xc13bc18  jal         func_4EF060
    ctx->pc = 0x2E3C94u;
    SET_GPR_U32(ctx, 31, 0x2E3C9Cu);
    ctx->pc = 0x2E3C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3C94u;
            // 0x2e3c98: 0x260b0080  addiu       $t3, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EF060u;
    if (runtime->hasFunction(0x4EF060u)) {
        auto targetFn = runtime->lookupFunction(0x4EF060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C9Cu; }
        if (ctx->pc != 0x2E3C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EF060_0x4ef060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3C9Cu; }
        if (ctx->pc != 0x2E3C9Cu) { return; }
    }
    ctx->pc = 0x2E3C9Cu;
label_2e3c9c:
    // 0x2e3c9c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e3c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e3ca0:
    // 0x2e3ca0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2e3ca0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e3ca4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2e3ca4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3ca8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2e3ca8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3cac: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e3cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e3cb0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e3cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3cb4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e3cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3cb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e3cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CBCu;
            // 0x2e3cc0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3CC4u;
    // 0x2e3cc4: 0x0  nop
    ctx->pc = 0x2e3cc4u;
    // NOP
    // 0x2e3cc8: 0x0  nop
    ctx->pc = 0x2e3cc8u;
    // NOP
    // 0x2e3ccc: 0x0  nop
    ctx->pc = 0x2e3cccu;
    // NOP
    // 0x2e3cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3cd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e3cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e3cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3ce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ce4: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E3CE4u;
    {
        const bool branch_taken_0x2e3ce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CE4u;
            // 0x2e3ce8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ce4) {
            ctx->pc = 0x2E3D24u;
            goto label_2e3d24;
        }
    }
    ctx->pc = 0x2E3CECu;
    // 0x2e3cec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2e3cf0: 0x24425470  addiu       $v0, $v0, 0x5470
    ctx->pc = 0x2e3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21616));
    // 0x2e3cf4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e3cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e3cf8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2E3CF8u;
    SET_GPR_U32(ctx, 31, 0x2E3D00u);
    ctx->pc = 0x2E3CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CF8u;
            // 0x2e3cfc: 0x8e240d28  lw          $a0, 0xD28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D00u; }
        if (ctx->pc != 0x2E3D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D00u; }
        if (ctx->pc != 0x2E3D00u) { return; }
    }
    ctx->pc = 0x2E3D00u;
label_2e3d00:
    // 0x2e3d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d04: 0xc0ccf5c  jal         func_333D70
    ctx->pc = 0x2E3D04u;
    SET_GPR_U32(ctx, 31, 0x2E3D0Cu);
    ctx->pc = 0x2E3D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D04u;
            // 0x2e3d08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333D70u;
    if (runtime->hasFunction(0x333D70u)) {
        auto targetFn = runtime->lookupFunction(0x333D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D0Cu; }
        if (ctx->pc != 0x2E3D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333D70_0x333d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D0Cu; }
        if (ctx->pc != 0x2E3D0Cu) { return; }
    }
    ctx->pc = 0x2E3D0Cu;
label_2e3d0c:
    // 0x2e3d0c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2e3d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2e3d10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e3d10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e3d14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3D14u;
    {
        const bool branch_taken_0x2e3d14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e3d14) {
            ctx->pc = 0x2E3D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D14u;
            // 0x2e3d18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E3D28u;
            goto label_2e3d28;
        }
    }
    ctx->pc = 0x2E3D1Cu;
    // 0x2e3d1c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2E3D1Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D24u);
    ctx->pc = 0x2E3D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D1Cu;
            // 0x2e3d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D24u; }
        if (ctx->pc != 0x2E3D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D24u; }
        if (ctx->pc != 0x2E3D24u) { return; }
    }
    ctx->pc = 0x2E3D24u;
label_2e3d24:
    // 0x2e3d24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e3d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e3d28:
    // 0x2e3d28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e3d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3d34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3D34u;
            // 0x2e3d38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3D3Cu;
    // 0x2e3d3c: 0x0  nop
    ctx->pc = 0x2e3d3cu;
    // NOP
}
