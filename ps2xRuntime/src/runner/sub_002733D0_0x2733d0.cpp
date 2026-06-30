#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002733D0
// Address: 0x2733d0 - 0x273470
void sub_002733D0_0x2733d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002733D0_0x2733d0");
#endif

    switch (ctx->pc) {
        case 0x273454u: goto label_273454;
        default: break;
    }

    ctx->pc = 0x2733d0u;

    // 0x2733d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2733d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2733d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2733d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2733d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2733d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2733dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2733dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2733e0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2733E0u;
    {
        const bool branch_taken_0x2733e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2733E0u;
            // 0x2733e4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733e0) {
            ctx->pc = 0x273458u;
            goto label_273458;
        }
    }
    ctx->pc = 0x2733E8u;
    // 0x2733e8: 0x2442f3e0  addiu       $v0, $v0, -0xC20
    ctx->pc = 0x2733e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964192));
    // 0x2733ec: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2733ECu;
    {
        const bool branch_taken_0x2733ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2733F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2733ECu;
            // 0x2733f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733ec) {
            ctx->pc = 0x273430u;
            goto label_273430;
        }
    }
    ctx->pc = 0x2733F4u;
    // 0x2733f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2733f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2733f8: 0x2442f400  addiu       $v0, $v0, -0xC00
    ctx->pc = 0x2733f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964224));
    // 0x2733fc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2733FCu;
    {
        const bool branch_taken_0x2733fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2733FCu;
            // 0x273400: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2733fc) {
            ctx->pc = 0x273430u;
            goto label_273430;
        }
    }
    ctx->pc = 0x273404u;
    // 0x273404: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x273404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273408: 0x2442f420  addiu       $v0, $v0, -0xBE0
    ctx->pc = 0x273408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964256));
    // 0x27340c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27340Cu;
    {
        const bool branch_taken_0x27340c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27340Cu;
            // 0x273410: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27340c) {
            ctx->pc = 0x273430u;
            goto label_273430;
        }
    }
    ctx->pc = 0x273414u;
    // 0x273414: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x273414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273418: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x273418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x27341c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27341Cu;
    {
        const bool branch_taken_0x27341c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x273420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27341Cu;
            // 0x273420: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27341c) {
            ctx->pc = 0x273430u;
            goto label_273430;
        }
    }
    ctx->pc = 0x273424u;
    // 0x273424: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x273424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273428: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x273428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x27342c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27342cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_273430:
    // 0x273430: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x273430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x273434: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273434u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273438: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x273438u;
    {
        const bool branch_taken_0x273438 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27343Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273438u;
            // 0x27343c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273438) {
            ctx->pc = 0x273458u;
            goto label_273458;
        }
    }
    ctx->pc = 0x273440u;
    // 0x273440: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x273440u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x273444: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x273444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x273448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27344c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x27344Cu;
    SET_GPR_U32(ctx, 31, 0x273454u);
    ctx->pc = 0x273450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27344Cu;
            // 0x273450: 0x2407001c  addiu       $a3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273454u; }
        if (ctx->pc != 0x273454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273454u; }
        if (ctx->pc != 0x273454u) { return; }
    }
    ctx->pc = 0x273454u;
label_273454:
    // 0x273454: 0x0  nop
    ctx->pc = 0x273454u;
    // NOP
label_273458:
    // 0x273458: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x273458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27345c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27345cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273464: 0x3e00008  jr          $ra
    ctx->pc = 0x273464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273464u;
            // 0x273468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27346Cu;
    // 0x27346c: 0x0  nop
    ctx->pc = 0x27346cu;
    // NOP
}
