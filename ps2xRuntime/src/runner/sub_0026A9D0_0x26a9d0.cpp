#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A9D0
// Address: 0x26a9d0 - 0x26aa60
void sub_0026A9D0_0x26a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A9D0_0x26a9d0");
#endif

    switch (ctx->pc) {
        case 0x26aa44u: goto label_26aa44;
        default: break;
    }

    ctx->pc = 0x26a9d0u;

    // 0x26a9d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26a9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26a9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26a9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26a9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a9dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26a9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9e0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26A9E0u;
    {
        const bool branch_taken_0x26a9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9E0u;
            // 0x26a9e4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9e0) {
            ctx->pc = 0x26AA48u;
            goto label_26aa48;
        }
    }
    ctx->pc = 0x26A9E8u;
    // 0x26a9e8: 0x2442f2e0  addiu       $v0, $v0, -0xD20
    ctx->pc = 0x26a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963936));
    // 0x26a9ec: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x26A9ECu;
    {
        const bool branch_taken_0x26a9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9ECu;
            // 0x26a9f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9ec) {
            ctx->pc = 0x26AA20u;
            goto label_26aa20;
        }
    }
    ctx->pc = 0x26A9F4u;
    // 0x26a9f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a9f8: 0x2442f300  addiu       $v0, $v0, -0xD00
    ctx->pc = 0x26a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963968));
    // 0x26a9fc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A9FCu;
    {
        const bool branch_taken_0x26a9fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A9FCu;
            // 0x26aa00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9fc) {
            ctx->pc = 0x26AA20u;
            goto label_26aa20;
        }
    }
    ctx->pc = 0x26AA04u;
    // 0x26aa04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26aa08: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x26aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x26aa0c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AA0Cu;
    {
        const bool branch_taken_0x26aa0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA0Cu;
            // 0x26aa10: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa0c) {
            ctx->pc = 0x26AA20u;
            goto label_26aa20;
        }
    }
    ctx->pc = 0x26AA14u;
    // 0x26aa14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26aa18: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x26aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x26aa1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x26aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_26aa20:
    // 0x26aa20: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x26aa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x26aa24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26aa24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26aa28: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AA28u;
    {
        const bool branch_taken_0x26aa28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26AA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA28u;
            // 0x26aa2c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa28) {
            ctx->pc = 0x26AA48u;
            goto label_26aa48;
        }
    }
    ctx->pc = 0x26AA30u;
    // 0x26aa30: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x26aa30u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26aa34: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26aa38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26aa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa3c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x26AA3Cu;
    SET_GPR_U32(ctx, 31, 0x26AA44u);
    ctx->pc = 0x26AA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA3Cu;
            // 0x26aa40: 0x24070026  addiu       $a3, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA44u; }
        if (ctx->pc != 0x26AA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA44u; }
        if (ctx->pc != 0x26AA44u) { return; }
    }
    ctx->pc = 0x26AA44u;
label_26aa44:
    // 0x26aa44: 0x0  nop
    ctx->pc = 0x26aa44u;
    // NOP
label_26aa48:
    // 0x26aa48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26aa48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26aa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26aa50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26aa50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26aa54: 0x3e00008  jr          $ra
    ctx->pc = 0x26AA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA54u;
            // 0x26aa58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AA5Cu;
    // 0x26aa5c: 0x0  nop
    ctx->pc = 0x26aa5cu;
    // NOP
}
