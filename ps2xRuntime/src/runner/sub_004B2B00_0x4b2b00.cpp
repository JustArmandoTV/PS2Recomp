#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B2B00
// Address: 0x4b2b00 - 0x4b2bb0
void sub_004B2B00_0x4b2b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2B00_0x4b2b00");
#endif

    switch (ctx->pc) {
        case 0x4b2b20u: goto label_4b2b20;
        case 0x4b2b78u: goto label_4b2b78;
        case 0x4b2b90u: goto label_4b2b90;
        default: break;
    }

    ctx->pc = 0x4b2b00u;

    // 0x4b2b00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4b2b04: 0x2442d008  addiu       $v0, $v0, -0x2FF8
    ctx->pc = 0x4b2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955016));
    // 0x4b2b08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b2b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b2b0c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4b2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x4b2b10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b2b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2b14: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4b2b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x4b2b18: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2B18u;
            // 0x4b2b1c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B2B20u;
label_4b2b20:
    // 0x4b2b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b2b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b2b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b2b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b2b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b2b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b2b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b2b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b2b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b2b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2b34: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B2B34u;
    {
        const bool branch_taken_0x4b2b34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2B34u;
            // 0x4b2b38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2b34) {
            ctx->pc = 0x4B2B90u;
            goto label_4b2b90;
        }
    }
    ctx->pc = 0x4B2B3Cu;
    // 0x4b2b3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b2b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b2b40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b2b44: 0x246306b0  addiu       $v1, $v1, 0x6B0
    ctx->pc = 0x4b2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1712));
    // 0x4b2b48: 0x244206e8  addiu       $v0, $v0, 0x6E8
    ctx->pc = 0x4b2b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1768));
    // 0x4b2b4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b2b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b2b50: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B2B50u;
    {
        const bool branch_taken_0x4b2b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2B50u;
            // 0x4b2b54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2b50) {
            ctx->pc = 0x4B2B78u;
            goto label_4b2b78;
        }
    }
    ctx->pc = 0x4B2B58u;
    // 0x4b2b58: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4b2b5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4b2b60: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x4b2b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x4b2b64: 0x24420838  addiu       $v0, $v0, 0x838
    ctx->pc = 0x4b2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2104));
    // 0x4b2b68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b2b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b2b6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b2b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2b70: 0xc12caec  jal         func_4B2BB0
    ctx->pc = 0x4B2B70u;
    SET_GPR_U32(ctx, 31, 0x4B2B78u);
    ctx->pc = 0x4B2B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2B70u;
            // 0x4b2b74: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2BB0u;
    if (runtime->hasFunction(0x4B2BB0u)) {
        auto targetFn = runtime->lookupFunction(0x4B2BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2B78u; }
        if (ctx->pc != 0x4B2B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B2BB0_0x4b2bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2B78u; }
        if (ctx->pc != 0x4B2B78u) { return; }
    }
    ctx->pc = 0x4B2B78u;
label_4b2b78:
    // 0x4b2b78: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4b2b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4b2b7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b2b7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4b2b80: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B2B80u;
    {
        const bool branch_taken_0x4b2b80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b2b80) {
            ctx->pc = 0x4B2B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2B80u;
            // 0x4b2b84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2B94u;
            goto label_4b2b94;
        }
    }
    ctx->pc = 0x4B2B88u;
    // 0x4b2b88: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B2B88u;
    SET_GPR_U32(ctx, 31, 0x4B2B90u);
    ctx->pc = 0x4B2B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2B88u;
            // 0x4b2b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2B90u; }
        if (ctx->pc != 0x4B2B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2B90u; }
        if (ctx->pc != 0x4B2B90u) { return; }
    }
    ctx->pc = 0x4B2B90u;
label_4b2b90:
    // 0x4b2b90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b2b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b2b94:
    // 0x4b2b94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b2b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b2b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b2b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2BA0u;
            // 0x4b2ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B2BA8u;
    // 0x4b2ba8: 0x0  nop
    ctx->pc = 0x4b2ba8u;
    // NOP
    // 0x4b2bac: 0x0  nop
    ctx->pc = 0x4b2bacu;
    // NOP
}
