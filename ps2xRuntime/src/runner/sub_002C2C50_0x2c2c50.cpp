#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2C50
// Address: 0x2c2c50 - 0x2c2de0
void sub_002C2C50_0x2c2c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2C50_0x2c2c50");
#endif

    switch (ctx->pc) {
        case 0x2c2c78u: goto label_2c2c78;
        case 0x2c2c98u: goto label_2c2c98;
        case 0x2c2cd0u: goto label_2c2cd0;
        case 0x2c2cecu: goto label_2c2cec;
        case 0x2c2d10u: goto label_2c2d10;
        case 0x2c2d70u: goto label_2c2d70;
        case 0x2c2d7cu: goto label_2c2d7c;
        case 0x2c2d88u: goto label_2c2d88;
        case 0x2c2d94u: goto label_2c2d94;
        case 0x2c2da0u: goto label_2c2da0;
        case 0x2c2dacu: goto label_2c2dac;
        case 0x2c2dc4u: goto label_2c2dc4;
        default: break;
    }

    ctx->pc = 0x2c2c50u;

    // 0x2c2c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c2c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c2c54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c2c58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c2c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c2c5c: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2c2c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x2c2c60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c2c64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2c6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c70: 0xc0b0c2c  jal         func_2C30B0
    ctx->pc = 0x2C2C70u;
    SET_GPR_U32(ctx, 31, 0x2C2C78u);
    ctx->pc = 0x2C2C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C70u;
            // 0x2c2c74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C30B0u;
    if (runtime->hasFunction(0x2C30B0u)) {
        auto targetFn = runtime->lookupFunction(0x2C30B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C78u; }
        if (ctx->pc != 0x2C2C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C30B0_0x2c30b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C78u; }
        if (ctx->pc != 0x2C2C78u) { return; }
    }
    ctx->pc = 0x2C2C78u;
label_2c2c78:
    // 0x2c2c78: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c2c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c2c7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2c80: 0x24631360  addiu       $v1, $v1, 0x1360
    ctx->pc = 0x2c2c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4960));
    // 0x2c2c84: 0x24421398  addiu       $v0, $v0, 0x1398
    ctx->pc = 0x2c2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5016));
    // 0x2c2c88: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2c2c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c90: 0xc0b0c28  jal         func_2C30A0
    ctx->pc = 0x2C2C90u;
    SET_GPR_U32(ctx, 31, 0x2C2C98u);
    ctx->pc = 0x2C2C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2C90u;
            // 0x2c2c94: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C30A0u;
    if (runtime->hasFunction(0x2C30A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C30A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C98u; }
        if (ctx->pc != 0x2C2C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C30A0_0x2c30a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C98u; }
        if (ctx->pc != 0x2C2C98u) { return; }
    }
    ctx->pc = 0x2C2C98u;
label_2c2c98:
    // 0x2c2c98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c2c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c2c9c: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x2c2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2c2ca0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2ca4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2c2ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c2ca8: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x2c2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x2c2cac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c2cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2cb0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c2cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2c2cb4: 0x26320084  addiu       $s2, $s1, 0x84
    ctx->pc = 0x2c2cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x2c2cb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2cbc: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2c2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2c2cc0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c2cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2c2cc4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c2cc8: 0xc040140  jal         func_100500
    ctx->pc = 0x2C2CC8u;
    SET_GPR_U32(ctx, 31, 0x2C2CD0u);
    ctx->pc = 0x2C2CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2CC8u;
            // 0x2c2ccc: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2CD0u; }
        if (ctx->pc != 0x2C2CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2CD0u; }
        if (ctx->pc != 0x2C2CD0u) { return; }
    }
    ctx->pc = 0x2C2CD0u;
label_2c2cd0:
    // 0x2c2cd0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2CD0u;
    {
        const bool branch_taken_0x2c2cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2cd0) {
            ctx->pc = 0x2C2CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2CD0u;
            // 0x2c2cd4: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2CF0u;
            goto label_2c2cf0;
        }
    }
    ctx->pc = 0x2C2CD8u;
    // 0x2c2cd8: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2c2cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c2cdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c2cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ce4: 0xc0b4554  jal         func_2D1550
    ctx->pc = 0x2C2CE4u;
    SET_GPR_U32(ctx, 31, 0x2C2CECu);
    ctx->pc = 0x2C2CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2CE4u;
            // 0x2c2ce8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2CECu; }
        if (ctx->pc != 0x2C2CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2CECu; }
        if (ctx->pc != 0x2C2CECu) { return; }
    }
    ctx->pc = 0x2C2CECu;
label_2c2cec:
    // 0x2c2cec: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x2c2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_2c2cf0:
    // 0x2c2cf0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c2cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2cf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c2cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2cf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c2cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2d04: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D04u;
            // 0x2c2d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2D0Cu;
    // 0x2c2d0c: 0x0  nop
    ctx->pc = 0x2c2d0cu;
    // NOP
label_2c2d10:
    // 0x2c2d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c2d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c2d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c2d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c2d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c2d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d24: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C2D24u;
    {
        const bool branch_taken_0x2c2d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D24u;
            // 0x2c2d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d24) {
            ctx->pc = 0x2C2DC4u;
            goto label_2c2dc4;
        }
    }
    ctx->pc = 0x2C2D2Cu;
    // 0x2c2d2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c2d30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2d34: 0x24631360  addiu       $v1, $v1, 0x1360
    ctx->pc = 0x2c2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4960));
    // 0x2c2d38: 0x24421398  addiu       $v0, $v0, 0x1398
    ctx->pc = 0x2c2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5016));
    // 0x2c2d3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c2d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c2d40: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C2D40u;
    {
        const bool branch_taken_0x2c2d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D40u;
            // 0x2c2d44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d40) {
            ctx->pc = 0x2C2DACu;
            goto label_2c2dac;
        }
    }
    ctx->pc = 0x2C2D48u;
    // 0x2c2d48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c2d4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c2d50: 0x246312c0  addiu       $v1, $v1, 0x12C0
    ctx->pc = 0x2c2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2c2d54: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c2d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c2d58: 0x244212f8  addiu       $v0, $v0, 0x12F8
    ctx->pc = 0x2c2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4856));
    // 0x2c2d5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c2d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c2d60: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c2d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c2d64: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c2d68: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C2D68u;
    SET_GPR_U32(ctx, 31, 0x2C2D70u);
    ctx->pc = 0x2C2D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D68u;
            // 0x2c2d6c: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D70u; }
        if (ctx->pc != 0x2C2D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D70u; }
        if (ctx->pc != 0x2C2D70u) { return; }
    }
    ctx->pc = 0x2C2D70u;
label_2c2d70:
    // 0x2c2d70: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c2d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c2d74: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2C2D74u;
    SET_GPR_U32(ctx, 31, 0x2C2D7Cu);
    ctx->pc = 0x2C2D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D74u;
            // 0x2c2d78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D7Cu; }
        if (ctx->pc != 0x2C2D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D7Cu; }
        if (ctx->pc != 0x2C2D7Cu) { return; }
    }
    ctx->pc = 0x2C2D7Cu;
label_2c2d7c:
    // 0x2c2d7c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c2d80: 0xc0b0b90  jal         func_2C2E40
    ctx->pc = 0x2C2D80u;
    SET_GPR_U32(ctx, 31, 0x2C2D88u);
    ctx->pc = 0x2C2D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D80u;
            // 0x2c2d84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E40u;
    if (runtime->hasFunction(0x2C2E40u)) {
        auto targetFn = runtime->lookupFunction(0x2C2E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D88u; }
        if (ctx->pc != 0x2C2D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2E40_0x2c2e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D88u; }
        if (ctx->pc != 0x2C2D88u) { return; }
    }
    ctx->pc = 0x2C2D88u;
label_2c2d88:
    // 0x2c2d88: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c2d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c2d8c: 0xc0b0b90  jal         func_2C2E40
    ctx->pc = 0x2C2D8Cu;
    SET_GPR_U32(ctx, 31, 0x2C2D94u);
    ctx->pc = 0x2C2D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D8Cu;
            // 0x2c2d90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E40u;
    if (runtime->hasFunction(0x2C2E40u)) {
        auto targetFn = runtime->lookupFunction(0x2C2E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D94u; }
        if (ctx->pc != 0x2C2D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2E40_0x2c2e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2D94u; }
        if (ctx->pc != 0x2C2D94u) { return; }
    }
    ctx->pc = 0x2C2D94u;
label_2c2d94:
    // 0x2c2d94: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c2d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c2d98: 0xc0b0b78  jal         func_2C2DE0
    ctx->pc = 0x2C2D98u;
    SET_GPR_U32(ctx, 31, 0x2C2DA0u);
    ctx->pc = 0x2C2D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2D98u;
            // 0x2c2d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2DE0u;
    if (runtime->hasFunction(0x2C2DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2C2DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2DA0u; }
        if (ctx->pc != 0x2C2DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2DE0_0x2c2de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2DA0u; }
        if (ctx->pc != 0x2C2DA0u) { return; }
    }
    ctx->pc = 0x2C2DA0u;
label_2c2da0:
    // 0x2c2da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2da4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C2DA4u;
    SET_GPR_U32(ctx, 31, 0x2C2DACu);
    ctx->pc = 0x2C2DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2DA4u;
            // 0x2c2da8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2DACu; }
        if (ctx->pc != 0x2C2DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2DACu; }
        if (ctx->pc != 0x2C2DACu) { return; }
    }
    ctx->pc = 0x2C2DACu;
label_2c2dac:
    // 0x2c2dac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c2dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c2db0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2db0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2db4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2DB4u;
    {
        const bool branch_taken_0x2c2db4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c2db4) {
            ctx->pc = 0x2C2DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2DB4u;
            // 0x2c2db8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2DC8u;
            goto label_2c2dc8;
        }
    }
    ctx->pc = 0x2C2DBCu;
    // 0x2c2dbc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C2DBCu;
    SET_GPR_U32(ctx, 31, 0x2C2DC4u);
    ctx->pc = 0x2C2DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2DBCu;
            // 0x2c2dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2DC4u; }
        if (ctx->pc != 0x2C2DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2DC4u; }
        if (ctx->pc != 0x2C2DC4u) { return; }
    }
    ctx->pc = 0x2C2DC4u;
label_2c2dc4:
    // 0x2c2dc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2dc8:
    // 0x2c2dc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c2dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2dcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2DD4u;
            // 0x2c2dd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2DDCu;
    // 0x2c2ddc: 0x0  nop
    ctx->pc = 0x2c2ddcu;
    // NOP
}
