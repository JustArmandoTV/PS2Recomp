#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A3640
// Address: 0x2a3640 - 0x2a3910
void sub_002A3640_0x2a3640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3640_0x2a3640");
#endif

    switch (ctx->pc) {
        case 0x2a36e8u: goto label_2a36e8;
        case 0x2a3764u: goto label_2a3764;
        case 0x2a37e0u: goto label_2a37e0;
        case 0x2a383cu: goto label_2a383c;
        case 0x2a3894u: goto label_2a3894;
        case 0x2a38e0u: goto label_2a38e0;
        case 0x2a38f8u: goto label_2a38f8;
        default: break;
    }

    ctx->pc = 0x2a3640u;

label_2a3640:
    // 0x2a3640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3644: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a3644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a3648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a364c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3654: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x2a3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x2a3658: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a3658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a365c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2a365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2a3660: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a3660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a3664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3668: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a366c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2a366cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a3670: 0x2442faa0  addiu       $v0, $v0, -0x560
    ctx->pc = 0x2a3670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965920));
    // 0x2a3674: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a3674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a3678: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a3678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a367c: 0x2463fa90  addiu       $v1, $v1, -0x570
    ctx->pc = 0x2a367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965904));
    // 0x2a3680: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a3680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2a3684: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a3684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a3688: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a3688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a368c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a368cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3690: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2a3690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2a3694: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2a3694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2a3698: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2a3698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x2a369c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2a369cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a36a0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2a36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a36a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A36A4u;
    {
        const bool branch_taken_0x2a36a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A36A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A36A4u;
            // 0x2a36a8: 0x2485002c  addiu       $a1, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36a4) {
            ctx->pc = 0x2A36C8u;
            goto label_2a36c8;
        }
    }
    ctx->pc = 0x2A36ACu;
    // 0x2a36ac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2a36acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a36b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a36b4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2a36b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2a36b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a36bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a36c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A36C0u;
    {
        const bool branch_taken_0x2a36c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A36C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A36C0u;
            // 0x2a36c4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36c0) {
            ctx->pc = 0x2A36D0u;
            goto label_2a36d0;
        }
    }
    ctx->pc = 0x2A36C8u;
label_2a36c8:
    // 0x2a36c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a36c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36cc: 0x0  nop
    ctx->pc = 0x2a36ccu;
    // NOP
label_2a36d0:
    // 0x2a36d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A36D0u;
    {
        const bool branch_taken_0x2a36d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A36D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A36D0u;
            // 0x2a36d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36d0) {
            ctx->pc = 0x2A36E0u;
            goto label_2a36e0;
        }
    }
    ctx->pc = 0x2A36D8u;
    // 0x2a36d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A36D8u;
    {
        const bool branch_taken_0x2a36d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A36DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A36D8u;
            // 0x2a36dc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36d8) {
            ctx->pc = 0x2A36ECu;
            goto label_2a36ec;
        }
    }
    ctx->pc = 0x2A36E0u;
label_2a36e0:
    // 0x2a36e0: 0xc0a79c0  jal         func_29E700
    ctx->pc = 0x2A36E0u;
    SET_GPR_U32(ctx, 31, 0x2A36E8u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A36E8u; }
        if (ctx->pc != 0x2A36E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A36E8u; }
        if (ctx->pc != 0x2A36E8u) { return; }
    }
    ctx->pc = 0x2A36E8u;
label_2a36e8:
    // 0x2a36e8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2a36e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2a36ec:
    // 0x2a36ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a36ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a36f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a36f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a36f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a36f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A36F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A36FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A36F8u;
            // 0x2a36fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3700u;
    // 0x2a3700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a370c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a370cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3710: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A3710u;
    {
        const bool branch_taken_0x2a3710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3710u;
            // 0x2a3714: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3710) {
            ctx->pc = 0x2A3768u;
            goto label_2a3768;
        }
    }
    ctx->pc = 0x2A3718u;
    // 0x2a3718: 0x2442faa0  addiu       $v0, $v0, -0x560
    ctx->pc = 0x2a3718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965920));
    // 0x2a371c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A371Cu;
    {
        const bool branch_taken_0x2a371c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A371Cu;
            // 0x2a3720: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a371c) {
            ctx->pc = 0x2A3740u;
            goto label_2a3740;
        }
    }
    ctx->pc = 0x2A3724u;
    // 0x2a3724: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3728: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2a3728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2a372c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A372Cu;
    {
        const bool branch_taken_0x2a372c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A372Cu;
            // 0x2a3730: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a372c) {
            ctx->pc = 0x2A3740u;
            goto label_2a3740;
        }
    }
    ctx->pc = 0x2A3734u;
    // 0x2a3734: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3738: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2a3738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2a373c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a373cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2a3740:
    // 0x2a3740: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2a3740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2a3744: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3744u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a3748: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3748u;
    {
        const bool branch_taken_0x2a3748 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3748u;
            // 0x2a374c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3748) {
            ctx->pc = 0x2A3768u;
            goto label_2a3768;
        }
    }
    ctx->pc = 0x2A3750u;
    // 0x2a3750: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2a3750u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a3754: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2a3754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a3758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a3758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a375c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2A375Cu;
    SET_GPR_U32(ctx, 31, 0x2A3764u);
    ctx->pc = 0x2A3760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A375Cu;
            // 0x2a3760: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3764u; }
        if (ctx->pc != 0x2A3764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3764u; }
        if (ctx->pc != 0x2A3764u) { return; }
    }
    ctx->pc = 0x2A3764u;
label_2a3764:
    // 0x2a3764: 0x0  nop
    ctx->pc = 0x2a3764u;
    // NOP
label_2a3768:
    // 0x2a3768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a376c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a376cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3774: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3774u;
            // 0x2a3778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A377Cu;
    // 0x2a377c: 0x0  nop
    ctx->pc = 0x2a377cu;
    // NOP
    // 0x2a3780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a3780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a3784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a3784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a3788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a3788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a378c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a3790: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a3790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a3794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a3798: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a3798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a379c: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A379Cu;
    {
        const bool branch_taken_0x2a379c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A379Cu;
            // 0x2a37a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a379c) {
            ctx->pc = 0x2A3898u;
            goto label_2a3898;
        }
    }
    ctx->pc = 0x2A37A4u;
    // 0x2a37a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a37a8: 0x2442fa90  addiu       $v0, $v0, -0x570
    ctx->pc = 0x2a37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x2a37ac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2a37acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2a37b0: 0x8e710014  lw          $s1, 0x14($s3)
    ctx->pc = 0x2a37b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2a37b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A37B4u;
    {
        const bool branch_taken_0x2a37b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37B4u;
            // 0x2a37b8: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37b4) {
            ctx->pc = 0x2A37F8u;
            goto label_2a37f8;
        }
    }
    ctx->pc = 0x2A37BCu;
    // 0x2a37bc: 0x8c30ea40  lw          $s0, -0x15C0($at)
    ctx->pc = 0x2a37bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a37c0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2a37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a37c4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a37c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2a37c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a37cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A37CCu;
    {
        const bool branch_taken_0x2a37cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A37D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37CCu;
            // 0x2a37d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37cc) {
            ctx->pc = 0x2A37E0u;
            goto label_2a37e0;
        }
    }
    ctx->pc = 0x2A37D4u;
    // 0x2a37d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a37d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a37d8: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x2A37D8u;
    SET_GPR_U32(ctx, 31, 0x2A37E0u);
    ctx->pc = 0x2A37DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37D8u;
            // 0x2a37dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A37E0u; }
        if (ctx->pc != 0x2A37E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A37E0u; }
        if (ctx->pc != 0x2A37E0u) { return; }
    }
    ctx->pc = 0x2A37E0u;
label_2a37e0:
    // 0x2a37e0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2a37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a37e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a37e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a37e8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2a37e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2a37ec: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2a37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a37f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a37f4: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x2a37f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
label_2a37f8:
    // 0x2a37f8: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x2a37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2a37fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A37FCu;
    {
        const bool branch_taken_0x2a37fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a37fc) {
            ctx->pc = 0x2A3840u;
            goto label_2a3840;
        }
    }
    ctx->pc = 0x2A3804u;
    // 0x2a3804: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2a3804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a3808: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a3808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a380c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a3810: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A3810u;
    {
        const bool branch_taken_0x2a3810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3810) {
            ctx->pc = 0x2A3840u;
            goto label_2a3840;
        }
    }
    ctx->pc = 0x2A3818u;
    // 0x2a3818: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2a3818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a381c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2a381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2a3820: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2a3820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a3824: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2a3824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a3828: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2a3828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a382c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2a382cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2a3830: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2a3830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2a3834: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2A3834u;
    SET_GPR_U32(ctx, 31, 0x2A383Cu);
    ctx->pc = 0x2A3838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3834u;
            // 0x2a3838: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A383Cu; }
        if (ctx->pc != 0x2A383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A383Cu; }
        if (ctx->pc != 0x2A383Cu) { return; }
    }
    ctx->pc = 0x2A383Cu;
label_2a383c:
    // 0x2a383c: 0x0  nop
    ctx->pc = 0x2a383cu;
    // NOP
label_2a3840:
    // 0x2a3840: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2A3840u;
    {
        const bool branch_taken_0x2a3840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3840u;
            // 0x2a3844: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3840) {
            ctx->pc = 0x2A3870u;
            goto label_2a3870;
        }
    }
    ctx->pc = 0x2A3848u;
    // 0x2a3848: 0x2442faa0  addiu       $v0, $v0, -0x560
    ctx->pc = 0x2a3848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965920));
    // 0x2a384c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A384Cu;
    {
        const bool branch_taken_0x2a384c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A384Cu;
            // 0x2a3850: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a384c) {
            ctx->pc = 0x2A3870u;
            goto label_2a3870;
        }
    }
    ctx->pc = 0x2A3854u;
    // 0x2a3854: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3858: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2a3858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2a385c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A385Cu;
    {
        const bool branch_taken_0x2a385c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A385Cu;
            // 0x2a3860: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a385c) {
            ctx->pc = 0x2A3870u;
            goto label_2a3870;
        }
    }
    ctx->pc = 0x2A3864u;
    // 0x2a3864: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a3864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a3868: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2a3868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2a386c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2a386cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2a3870:
    // 0x2a3870: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2a3870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2a3874: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a3878: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3878u;
    {
        const bool branch_taken_0x2a3878 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A387Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3878u;
            // 0x2a387c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3878) {
            ctx->pc = 0x2A3898u;
            goto label_2a3898;
        }
    }
    ctx->pc = 0x2A3880u;
    // 0x2a3880: 0x96660004  lhu         $a2, 0x4($s3)
    ctx->pc = 0x2a3880u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a3884: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2a3884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a3888: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a3888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a388c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2A388Cu;
    SET_GPR_U32(ctx, 31, 0x2A3894u);
    ctx->pc = 0x2A3890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A388Cu;
            // 0x2a3890: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3894u; }
        if (ctx->pc != 0x2A3894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3894u; }
        if (ctx->pc != 0x2A3894u) { return; }
    }
    ctx->pc = 0x2A3894u;
label_2a3894:
    // 0x2a3894: 0x0  nop
    ctx->pc = 0x2a3894u;
    // NOP
label_2a3898:
    // 0x2a3898: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2a3898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a389c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a389cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a38a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a38a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a38a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a38a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a38a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a38a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a38ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a38acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a38b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A38B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A38B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A38B0u;
            // 0x2a38b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A38B8u;
    // 0x2a38b8: 0x0  nop
    ctx->pc = 0x2a38b8u;
    // NOP
    // 0x2a38bc: 0x0  nop
    ctx->pc = 0x2a38bcu;
    // NOP
    // 0x2a38c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a38c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a38c4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2a38c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2a38c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a38c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a38cc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2a38ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a38d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a38d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a38d4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2a38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2a38d8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2A38D8u;
    SET_GPR_U32(ctx, 31, 0x2A38E0u);
    ctx->pc = 0x2A38DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A38D8u;
            // 0x2a38dc: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38E0u; }
        if (ctx->pc != 0x2A38E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38E0u; }
        if (ctx->pc != 0x2A38E0u) { return; }
    }
    ctx->pc = 0x2A38E0u;
label_2a38e0:
    // 0x2a38e0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2a38e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a38e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a38e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A38E8u;
    {
        const bool branch_taken_0x2a38e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A38E8u;
            // 0x2a38ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38e8) {
            ctx->pc = 0x2A38F8u;
            goto label_2a38f8;
        }
    }
    ctx->pc = 0x2A38F0u;
    // 0x2a38f0: 0xc0a8d90  jal         func_2A3640
    ctx->pc = 0x2A38F0u;
    SET_GPR_U32(ctx, 31, 0x2A38F8u);
    ctx->pc = 0x2A38F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A38F0u;
            // 0x2a38f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3640u;
    goto label_2a3640;
    ctx->pc = 0x2A38F8u;
label_2a38f8:
    // 0x2a38f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a38f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a38fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3904: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3904u;
            // 0x2a3908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A390Cu;
    // 0x2a390c: 0x0  nop
    ctx->pc = 0x2a390cu;
    // NOP
}
