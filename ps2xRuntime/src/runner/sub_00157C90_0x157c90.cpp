#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157C90
// Address: 0x157c90 - 0x157e20
void sub_00157C90_0x157c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157C90_0x157c90");
#endif

    switch (ctx->pc) {
        case 0x157d2cu: goto label_157d2c;
        case 0x157d3cu: goto label_157d3c;
        case 0x157d4cu: goto label_157d4c;
        case 0x157d5cu: goto label_157d5c;
        case 0x157de8u: goto label_157de8;
        case 0x157df8u: goto label_157df8;
        case 0x157e08u: goto label_157e08;
        default: break;
    }

    ctx->pc = 0x157c90u;

    // 0x157c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x157c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x157c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157c9c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x157c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157ca0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x157ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ca4: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x157ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x157ca8: 0x30e60008  andi        $a2, $a3, 0x8
    ctx->pc = 0x157ca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x157cac: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x157CACu;
    {
        const bool branch_taken_0x157cac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157CACu;
            // 0x157cb0: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cac) {
            ctx->pc = 0x157D64u;
            goto label_157d64;
        }
    }
    ctx->pc = 0x157CB4u;
    // 0x157cb4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x157cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x157cb8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x157cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x157cbc: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x157cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x157cc0: 0x50c40024  beql        $a2, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x157CC0u;
    {
        const bool branch_taken_0x157cc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157cc0) {
            ctx->pc = 0x157CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157CC0u;
            // 0x157cc4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157D54u;
            goto label_157d54;
        }
    }
    ctx->pc = 0x157CC8u;
    // 0x157cc8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x157cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157ccc: 0x50c4001d  beql        $a2, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x157CCCu;
    {
        const bool branch_taken_0x157ccc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157ccc) {
            ctx->pc = 0x157CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157CCCu;
            // 0x157cd0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157D44u;
            goto label_157d44;
        }
    }
    ctx->pc = 0x157CD4u;
    // 0x157cd4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x157cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x157cd8: 0x50c4004e  beql        $a2, $a0, . + 4 + (0x4E << 2)
    ctx->pc = 0x157CD8u;
    {
        const bool branch_taken_0x157cd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157cd8) {
            ctx->pc = 0x157CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157CD8u;
            // 0x157cdc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157E14u;
            goto label_157e14;
        }
    }
    ctx->pc = 0x157CE0u;
    // 0x157ce0: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x157ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x157ce4: 0x10c4004a  beq         $a2, $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x157CE4u;
    {
        const bool branch_taken_0x157ce4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157ce4) {
            ctx->pc = 0x157E10u;
            goto label_157e10;
        }
    }
    ctx->pc = 0x157CECu;
    // 0x157cec: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x157cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x157cf0: 0x10c40047  beq         $a2, $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x157CF0u;
    {
        const bool branch_taken_0x157cf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157cf0) {
            ctx->pc = 0x157E10u;
            goto label_157e10;
        }
    }
    ctx->pc = 0x157CF8u;
    // 0x157cf8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x157cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x157cfc: 0x50c4000d  beql        $a2, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x157CFCu;
    {
        const bool branch_taken_0x157cfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157cfc) {
            ctx->pc = 0x157D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157CFCu;
            // 0x157d00: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157D34u;
            goto label_157d34;
        }
    }
    ctx->pc = 0x157D04u;
    // 0x157d04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x157d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157d08: 0x50c40006  beql        $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157D08u;
    {
        const bool branch_taken_0x157d08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157d08) {
            ctx->pc = 0x157D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157D08u;
            // 0x157d0c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157D24u;
            goto label_157d24;
        }
    }
    ctx->pc = 0x157D10u;
    // 0x157d10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157d14: 0x10c3003e  beq         $a2, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x157D14u;
    {
        const bool branch_taken_0x157d14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x157d14) {
            ctx->pc = 0x157E10u;
            goto label_157e10;
        }
    }
    ctx->pc = 0x157D1Cu;
    // 0x157d1c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x157D1Cu;
    {
        const bool branch_taken_0x157d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d1c) {
            ctx->pc = 0x157E10u;
            goto label_157e10;
        }
    }
    ctx->pc = 0x157D24u;
label_157d24:
    // 0x157d24: 0xc04d8d0  jal         func_136340
    ctx->pc = 0x157D24u;
    SET_GPR_U32(ctx, 31, 0x157D2Cu);
    ctx->pc = 0x157D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D24u;
            // 0x157d28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136340u;
    if (runtime->hasFunction(0x136340u)) {
        auto targetFn = runtime->lookupFunction(0x136340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D2Cu; }
        if (ctx->pc != 0x157D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136340_0x136340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D2Cu; }
        if (ctx->pc != 0x157D2Cu) { return; }
    }
    ctx->pc = 0x157D2Cu;
label_157d2c:
    // 0x157d2c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x157D2Cu;
    {
        const bool branch_taken_0x157d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d2c) {
            ctx->pc = 0x157E10u;
            goto label_157e10;
        }
    }
    ctx->pc = 0x157D34u;
label_157d34:
    // 0x157d34: 0xc04d7e8  jal         func_135FA0
    ctx->pc = 0x157D34u;
    SET_GPR_U32(ctx, 31, 0x157D3Cu);
    ctx->pc = 0x157D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D34u;
            // 0x157d38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FA0u;
    if (runtime->hasFunction(0x135FA0u)) {
        auto targetFn = runtime->lookupFunction(0x135FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D3Cu; }
        if (ctx->pc != 0x157D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135FA0_0x135fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D3Cu; }
        if (ctx->pc != 0x157D3Cu) { return; }
    }
    ctx->pc = 0x157D3Cu;
label_157d3c:
    // 0x157d3c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x157D3Cu;
    {
        const bool branch_taken_0x157d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d3c) {
            ctx->pc = 0x157E10u;
            goto label_157e10;
        }
    }
    ctx->pc = 0x157D44u;
label_157d44:
    // 0x157d44: 0xc04dac4  jal         func_136B10
    ctx->pc = 0x157D44u;
    SET_GPR_U32(ctx, 31, 0x157D4Cu);
    ctx->pc = 0x157D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D44u;
            // 0x157d48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136B10u;
    if (runtime->hasFunction(0x136B10u)) {
        auto targetFn = runtime->lookupFunction(0x136B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D4Cu; }
        if (ctx->pc != 0x157D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136B10_0x136b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D4Cu; }
        if (ctx->pc != 0x157D4Cu) { return; }
    }
    ctx->pc = 0x157D4Cu;
label_157d4c:
    // 0x157d4c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x157D4Cu;
    {
        const bool branch_taken_0x157d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d4c) {
            ctx->pc = 0x157E10u;
            goto label_157e10;
        }
    }
    ctx->pc = 0x157D54u;
label_157d54:
    // 0x157d54: 0xc04dff0  jal         func_137FC0
    ctx->pc = 0x157D54u;
    SET_GPR_U32(ctx, 31, 0x157D5Cu);
    ctx->pc = 0x157D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D54u;
            // 0x157d58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137FC0u;
    if (runtime->hasFunction(0x137FC0u)) {
        auto targetFn = runtime->lookupFunction(0x137FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D5Cu; }
        if (ctx->pc != 0x157D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137FC0_0x137fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D5Cu; }
        if (ctx->pc != 0x157D5Cu) { return; }
    }
    ctx->pc = 0x157D5Cu;
label_157d5c:
    // 0x157d5c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x157D5Cu;
    {
        const bool branch_taken_0x157d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d5c) {
            ctx->pc = 0x157E10u;
            goto label_157e10;
        }
    }
    ctx->pc = 0x157D64u;
label_157d64:
    // 0x157d64: 0x30e60010  andi        $a2, $a3, 0x10
    ctx->pc = 0x157d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x157d68: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x157D68u;
    {
        const bool branch_taken_0x157d68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d68) {
            ctx->pc = 0x157E10u;
            goto label_157e10;
        }
    }
    ctx->pc = 0x157D70u;
    // 0x157d70: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x157d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x157d74: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x157d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x157d78: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x157d78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x157d7c: 0x50c40020  beql        $a2, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x157D7Cu;
    {
        const bool branch_taken_0x157d7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157d7c) {
            ctx->pc = 0x157D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157D7Cu;
            // 0x157d80: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157E00u;
            goto label_157e00;
        }
    }
    ctx->pc = 0x157D84u;
    // 0x157d84: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x157d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157d88: 0x50c40020  beql        $a2, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x157D88u;
    {
        const bool branch_taken_0x157d88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157d88) {
            ctx->pc = 0x157D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157D88u;
            // 0x157d8c: 0x87a3002e  lh          $v1, 0x2E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157E0Cu;
            goto label_157e0c;
        }
    }
    ctx->pc = 0x157D90u;
    // 0x157d90: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x157d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x157d94: 0x10c4001c  beq         $a2, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x157D94u;
    {
        const bool branch_taken_0x157d94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157d94) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157D9Cu;
    // 0x157d9c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x157d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x157da0: 0x10c40019  beq         $a2, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x157DA0u;
    {
        const bool branch_taken_0x157da0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157da0) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157DA8u;
    // 0x157da8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x157da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x157dac: 0x10c40016  beq         $a2, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x157DACu;
    {
        const bool branch_taken_0x157dac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157dac) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157DB4u;
    // 0x157db4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x157db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x157db8: 0x50c4000d  beql        $a2, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x157DB8u;
    {
        const bool branch_taken_0x157db8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157db8) {
            ctx->pc = 0x157DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157DB8u;
            // 0x157dbc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157DF0u;
            goto label_157df0;
        }
    }
    ctx->pc = 0x157DC0u;
    // 0x157dc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x157dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157dc4: 0x50c40006  beql        $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157DC4u;
    {
        const bool branch_taken_0x157dc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157dc4) {
            ctx->pc = 0x157DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157DC4u;
            // 0x157dc8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157DE0u;
            goto label_157de0;
        }
    }
    ctx->pc = 0x157DCCu;
    // 0x157dcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157dd0: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x157DD0u;
    {
        const bool branch_taken_0x157dd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x157dd0) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157DD8u;
    // 0x157dd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x157DD8u;
    {
        const bool branch_taken_0x157dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157dd8) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157DE0u;
label_157de0:
    // 0x157de0: 0xc04d954  jal         func_136550
    ctx->pc = 0x157DE0u;
    SET_GPR_U32(ctx, 31, 0x157DE8u);
    ctx->pc = 0x157DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157DE0u;
            // 0x157de4: 0x27a6002e  addiu       $a2, $sp, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136550u;
    if (runtime->hasFunction(0x136550u)) {
        auto targetFn = runtime->lookupFunction(0x136550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DE8u; }
        if (ctx->pc != 0x157DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136550_0x136550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DE8u; }
        if (ctx->pc != 0x157DE8u) { return; }
    }
    ctx->pc = 0x157DE8u;
label_157de8:
    // 0x157de8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157DE8u;
    {
        const bool branch_taken_0x157de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157de8) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157DF0u;
label_157df0:
    // 0x157df0: 0xc04d824  jal         func_136090
    ctx->pc = 0x157DF0u;
    SET_GPR_U32(ctx, 31, 0x157DF8u);
    ctx->pc = 0x157DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157DF0u;
            // 0x157df4: 0x27a6002e  addiu       $a2, $sp, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136090u;
    if (runtime->hasFunction(0x136090u)) {
        auto targetFn = runtime->lookupFunction(0x136090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DF8u; }
        if (ctx->pc != 0x157DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136090_0x136090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157DF8u; }
        if (ctx->pc != 0x157DF8u) { return; }
    }
    ctx->pc = 0x157DF8u;
label_157df8:
    // 0x157df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157DF8u;
    {
        const bool branch_taken_0x157df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157df8) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157E00u;
label_157e00:
    // 0x157e00: 0xc04e038  jal         func_1380E0
    ctx->pc = 0x157E00u;
    SET_GPR_U32(ctx, 31, 0x157E08u);
    ctx->pc = 0x157E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157E00u;
            // 0x157e04: 0x27a6002e  addiu       $a2, $sp, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1380E0u;
    if (runtime->hasFunction(0x1380E0u)) {
        auto targetFn = runtime->lookupFunction(0x1380E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E08u; }
        if (ctx->pc != 0x157E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001380E0_0x1380e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E08u; }
        if (ctx->pc != 0x157E08u) { return; }
    }
    ctx->pc = 0x157E08u;
label_157e08:
    // 0x157e08: 0x87a3002e  lh          $v1, 0x2E($sp)
    ctx->pc = 0x157e08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
label_157e0c:
    // 0x157e0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x157e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_157e10:
    // 0x157e10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_157e14:
    // 0x157e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157e18: 0x3e00008  jr          $ra
    ctx->pc = 0x157E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E18u;
            // 0x157e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157E20u;
}
