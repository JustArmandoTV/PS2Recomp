#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323D40
// Address: 0x323d40 - 0x323df0
void sub_00323D40_0x323d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323D40_0x323d40");
#endif

    switch (ctx->pc) {
        case 0x323d68u: goto label_323d68;
        default: break;
    }

    ctx->pc = 0x323d40u;

    // 0x323d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323d44: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x323d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x323d48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x323d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x323d4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323d54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323d58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x323d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323d5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x323d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323d60: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x323D60u;
    SET_GPR_U32(ctx, 31, 0x323D68u);
    ctx->pc = 0x323D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323D60u;
            // 0x323d64: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323D68u; }
        if (ctx->pc != 0x323D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323D68u; }
        if (ctx->pc != 0x323D68u) { return; }
    }
    ctx->pc = 0x323D68u;
label_323d68:
    // 0x323d68: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x323d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x323d6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x323d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x323d70: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x323d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x323d74: 0x24427a00  addiu       $v0, $v0, 0x7A00
    ctx->pc = 0x323d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31232));
    // 0x323d78: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x323d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x323d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x323d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323d80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x323d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x323d84: 0x3c034210  lui         $v1, 0x4210
    ctx->pc = 0x323d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
    // 0x323d88: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x323d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x323d8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x323d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323d90: 0xa2200058  sb          $zero, 0x58($s1)
    ctx->pc = 0x323d90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x323d94: 0xa2240059  sb          $a0, 0x59($s1)
    ctx->pc = 0x323d94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 4));
    // 0x323d98: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x323d98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x323d9c: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x323d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x323da0: 0xa224005c  sb          $a0, 0x5C($s1)
    ctx->pc = 0x323da0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 92), (uint8_t)GPR_U32(ctx, 4));
    // 0x323da4: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x323da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x323da8: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x323da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x323dac: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x323dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x323db0: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x323db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x323db4: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x323db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x323db8: 0xa2200074  sb          $zero, 0x74($s1)
    ctx->pc = 0x323db8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x323dbc: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x323dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x323dc0: 0xa620007c  sh          $zero, 0x7C($s1)
    ctx->pc = 0x323dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x323dc4: 0xa2200080  sb          $zero, 0x80($s1)
    ctx->pc = 0x323dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x323dc8: 0xa2200081  sb          $zero, 0x81($s1)
    ctx->pc = 0x323dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x323dcc: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x323dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x323dd0: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x323dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x323dd4: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x323dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x323dd8: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x323dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x323ddc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x323ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323de0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323de8: 0x3e00008  jr          $ra
    ctx->pc = 0x323DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x323DE8u;
            // 0x323dec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x323DF0u;
}
