#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3600
// Address: 0x1e3600 - 0x1e37b0
void sub_001E3600_0x1e3600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3600_0x1e3600");
#endif

    switch (ctx->pc) {
        case 0x1e361cu: goto label_1e361c;
        case 0x1e3664u: goto label_1e3664;
        case 0x1e36d0u: goto label_1e36d0;
        case 0x1e3710u: goto label_1e3710;
        case 0x1e3750u: goto label_1e3750;
        case 0x1e3790u: goto label_1e3790;
        default: break;
    }

    ctx->pc = 0x1e3600u;

    // 0x1e3600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e3604: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e3604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e3608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e360c: 0x27a3002c  addiu       $v1, $sp, 0x2C
    ctx->pc = 0x1e360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e3610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3614: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3614u;
    {
        const bool branch_taken_0x1e3614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3614u;
            // 0x1e3618: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3614) {
            ctx->pc = 0x1E3638u;
            goto label_1e3638;
        }
    }
    ctx->pc = 0x1E361Cu;
label_1e361c:
    // 0x1e361c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1e361cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3620: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e3620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e3624: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e3624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e3628: 0x0  nop
    ctx->pc = 0x1e3628u;
    // NOP
    // 0x1e362c: 0x0  nop
    ctx->pc = 0x1e362cu;
    // NOP
    // 0x1e3630: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E3630u;
    {
        const bool branch_taken_0x1e3630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3630) {
            ctx->pc = 0x1E361Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e361c;
        }
    }
    ctx->pc = 0x1E3638u;
label_1e3638:
    // 0x1e3638: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1e3638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1e363c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1e363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x1e3640: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x1e3640u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
    // 0x1e3644: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1e3644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e3648: 0x54200007  bnel        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3648u;
    {
        const bool branch_taken_0x1e3648 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3648) {
            ctx->pc = 0x1E364Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3648u;
            // 0x1e364c: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3668u;
            goto label_1e3668;
        }
    }
    ctx->pc = 0x1E3650u;
    // 0x1e3650: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1e3650u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1e3654: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1e3654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e3658: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e3658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e365c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x1E365Cu;
    SET_GPR_U32(ctx, 31, 0x1E3664u);
    ctx->pc = 0x1E3660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E365Cu;
            // 0x1e3660: 0x24c6d040  addiu       $a2, $a2, -0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3664u; }
        if (ctx->pc != 0x1E3664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3664u; }
        if (ctx->pc != 0x1E3664u) { return; }
    }
    ctx->pc = 0x1E3664u;
label_1e3664:
    // 0x1e3664: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1e3664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1e3668:
    // 0x1e3668: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e366c: 0x41a03  sra         $v1, $a0, 8
    ctx->pc = 0x1e366cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1e3670: 0x50620029  beql        $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E3670u;
    {
        const bool branch_taken_0x1e3670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3670) {
            ctx->pc = 0x1E3674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3670u;
            // 0x1e3674: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3718u;
            goto label_1e3718;
        }
    }
    ctx->pc = 0x1E3678u;
    // 0x1e3678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e367c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E367Cu;
    {
        const bool branch_taken_0x1e367c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e367c) {
            ctx->pc = 0x1E3680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E367Cu;
            // 0x1e3680: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E36D8u;
            goto label_1e36d8;
        }
    }
    ctx->pc = 0x1E3684u;
    // 0x1e3684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3688: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3688u;
    {
        const bool branch_taken_0x1e3688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3688) {
            ctx->pc = 0x1E368Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3688u;
            // 0x1e368c: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3698u;
            goto label_1e3698;
        }
    }
    ctx->pc = 0x1E3690u;
    // 0x1e3690: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E3690u;
    {
        const bool branch_taken_0x1e3690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3690u;
            // 0x1e3694: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3690) {
            ctx->pc = 0x1E3758u;
            goto label_1e3758;
        }
    }
    ctx->pc = 0x1E3698u;
label_1e3698:
    // 0x1e3698: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e3698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1e369c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e369cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e36a0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e36a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1e36a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e36a8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1e36a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1e36ac: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x1e36acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
    // 0x1e36b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e36b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e36b8: 0x2484e430  addiu       $a0, $a0, -0x1BD0
    ctx->pc = 0x1e36b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960176));
    // 0x1e36bc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e36bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e36c0: 0x24c6d048  addiu       $a2, $a2, -0x2FB8
    ctx->pc = 0x1e36c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955080));
    // 0x1e36c4: 0x27a8002c  addiu       $t0, $sp, 0x2C
    ctx->pc = 0x1e36c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e36c8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x1E36C8u;
    SET_GPR_U32(ctx, 31, 0x1E36D0u);
    ctx->pc = 0x1E36CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36C8u;
            // 0x1e36cc: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E36D0u; }
        if (ctx->pc != 0x1E36D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E36D0u; }
        if (ctx->pc != 0x1E36D0u) { return; }
    }
    ctx->pc = 0x1E36D0u;
label_1e36d0:
    // 0x1e36d0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1E36D0u;
    {
        const bool branch_taken_0x1e36d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E36D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36D0u;
            // 0x1e36d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36d0) {
            ctx->pc = 0x1E3794u;
            goto label_1e3794;
        }
    }
    ctx->pc = 0x1E36D8u;
label_1e36d8:
    // 0x1e36d8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1e36dc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e36dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e36e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e36e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1e36e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e36e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e36e8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1e36e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1e36ec: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x1e36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
    // 0x1e36f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e36f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e36f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e36f8: 0x2484e430  addiu       $a0, $a0, -0x1BD0
    ctx->pc = 0x1e36f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960176));
    // 0x1e36fc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e36fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e3700: 0x24c6d058  addiu       $a2, $a2, -0x2FA8
    ctx->pc = 0x1e3700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955096));
    // 0x1e3704: 0x27a8002c  addiu       $t0, $sp, 0x2C
    ctx->pc = 0x1e3704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e3708: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x1E3708u;
    SET_GPR_U32(ctx, 31, 0x1E3710u);
    ctx->pc = 0x1E370Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3708u;
            // 0x1e370c: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3710u; }
        if (ctx->pc != 0x1E3710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3710u; }
        if (ctx->pc != 0x1E3710u) { return; }
    }
    ctx->pc = 0x1E3710u;
label_1e3710:
    // 0x1e3710: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E3710u;
    {
        const bool branch_taken_0x1e3710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3710) {
            ctx->pc = 0x1E3790u;
            goto label_1e3790;
        }
    }
    ctx->pc = 0x1E3718u;
label_1e3718:
    // 0x1e3718: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e3718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1e371c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e371cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e3720: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e3720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1e3724: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e3724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e3728: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1e3728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1e372c: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x1e372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
    // 0x1e3730: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e3730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e3734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3738: 0x2484e430  addiu       $a0, $a0, -0x1BD0
    ctx->pc = 0x1e3738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960176));
    // 0x1e373c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e373cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e3740: 0x24c6d068  addiu       $a2, $a2, -0x2F98
    ctx->pc = 0x1e3740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955112));
    // 0x1e3744: 0x27a8002c  addiu       $t0, $sp, 0x2C
    ctx->pc = 0x1e3744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e3748: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x1E3748u;
    SET_GPR_U32(ctx, 31, 0x1E3750u);
    ctx->pc = 0x1E374Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3748u;
            // 0x1e374c: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3750u; }
        if (ctx->pc != 0x1E3750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3750u; }
        if (ctx->pc != 0x1E3750u) { return; }
    }
    ctx->pc = 0x1E3750u;
label_1e3750:
    // 0x1e3750: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E3750u;
    {
        const bool branch_taken_0x1e3750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3750) {
            ctx->pc = 0x1E3790u;
            goto label_1e3790;
        }
    }
    ctx->pc = 0x1E3758u;
label_1e3758:
    // 0x1e3758: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e3758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1e375c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e375cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e3760: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e3760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1e3764: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e3764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e3768: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1e3768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1e376c: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x1e376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
    // 0x1e3770: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e3770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e3774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3778: 0x2484e430  addiu       $a0, $a0, -0x1BD0
    ctx->pc = 0x1e3778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960176));
    // 0x1e377c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e377cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e3780: 0x24c6d078  addiu       $a2, $a2, -0x2F88
    ctx->pc = 0x1e3780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955128));
    // 0x1e3784: 0x27a8002c  addiu       $t0, $sp, 0x2C
    ctx->pc = 0x1e3784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e3788: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x1E3788u;
    SET_GPR_U32(ctx, 31, 0x1E3790u);
    ctx->pc = 0x1E378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3788u;
            // 0x1e378c: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3790u; }
        if (ctx->pc != 0x1E3790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3790u; }
        if (ctx->pc != 0x1E3790u) { return; }
    }
    ctx->pc = 0x1E3790u;
label_1e3790:
    // 0x1e3790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3794:
    // 0x1e3794: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e3794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e3798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e379c: 0x2442e430  addiu       $v0, $v0, -0x1BD0
    ctx->pc = 0x1e379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960176));
    // 0x1e37a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E37A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E37A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37A0u;
            // 0x1e37a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E37A8u;
    // 0x1e37a8: 0x0  nop
    ctx->pc = 0x1e37a8u;
    // NOP
    // 0x1e37ac: 0x0  nop
    ctx->pc = 0x1e37acu;
    // NOP
}
