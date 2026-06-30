#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323E10
// Address: 0x323e10 - 0x323ee0
void sub_00323E10_0x323e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323E10_0x323e10");
#endif

    switch (ctx->pc) {
        case 0x323e38u: goto label_323e38;
        case 0x323e90u: goto label_323e90;
        default: break;
    }

    ctx->pc = 0x323e10u;

    // 0x323e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323e14: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x323e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x323e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x323e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x323e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323e20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x323e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323e28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x323e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e30: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x323E30u;
    SET_GPR_U32(ctx, 31, 0x323E38u);
    ctx->pc = 0x323E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323E30u;
            // 0x323e34: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323E38u; }
        if (ctx->pc != 0x323E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323E38u; }
        if (ctx->pc != 0x323E38u) { return; }
    }
    ctx->pc = 0x323E38u;
label_323e38:
    // 0x323e38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x323e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x323e3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x323e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x323e40: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x323e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x323e44: 0x2463e450  addiu       $v1, $v1, -0x1BB0
    ctx->pc = 0x323e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960208));
    // 0x323e48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323e4c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x323e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x323e50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x323e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x323e54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x323e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x323e58: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x323e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x323e5c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x323e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x323e60: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x323e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x323e64: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x323e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x323e68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x323e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x323e6c: 0xae050058  sw          $a1, 0x58($s0)
    ctx->pc = 0x323e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 5));
    // 0x323e70: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x323e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
    // 0x323e74: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x323e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x323e78: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x323e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x323e7c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x323e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x323e80: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x323e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x323e84: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x323e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x323e88: 0xc073e80  jal         func_1CFA00
    ctx->pc = 0x323E88u;
    SET_GPR_U32(ctx, 31, 0x323E90u);
    ctx->pc = 0x323E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323E88u;
            // 0x323e8c: 0x8c44a140  lw          $a0, -0x5EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA00u;
    if (runtime->hasFunction(0x1CFA00u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323E90u; }
        if (ctx->pc != 0x323E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFA00_0x1cfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323E90u; }
        if (ctx->pc != 0x323E90u) { return; }
    }
    ctx->pc = 0x323E90u;
label_323e90:
    // 0x323e90: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x323e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x323e94: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x323e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x323e98: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x323e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x323e9c: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x323e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x323ea0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x323ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ea4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x323ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x323ea8: 0xa2000074  sb          $zero, 0x74($s0)
    ctx->pc = 0x323ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x323eac: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x323eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x323eb0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x323eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x323eb4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x323eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x323eb8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x323eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x323ebc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x323ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x323ec0: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x323ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x323ec4: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x323ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x323ec8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x323ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x323ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323ED4u;
            // 0x323ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323EDCu;
    // 0x323edc: 0x0  nop
    ctx->pc = 0x323edcu;
    // NOP
}
