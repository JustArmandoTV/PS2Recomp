#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012B900
// Address: 0x12b900 - 0x12b988
void sub_0012B900_0x12b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B900_0x12b900");
#endif

    switch (ctx->pc) {
        case 0x12b970u: goto label_12b970;
        default: break;
    }

    ctx->pc = 0x12b900u;

    // 0x12b900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b90c: 0x80432cc  j           func_10CB30
    ctx->pc = 0x12B90Cu;
    ctx->pc = 0x12B910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B90Cu;
            // 0x12b910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB30u;
    {
        auto targetFn = runtime->lookupFunction(0x10CB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x12B914u;
    // 0x12b914: 0x0  nop
    ctx->pc = 0x12b914u;
    // NOP
    // 0x12b918: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x12b918u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x12b91c: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12b91cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12b920: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12b920u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b924: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12b928: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x12b928u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b92c: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x12b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x12b930: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x12b930u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12b934: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x12b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x12b938: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x12b938u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x12b93c: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x12b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x12b940: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12b940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b944: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12b944u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12b948: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x12b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x12b94c: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x12b94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x12b950: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x12b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x12b954: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12b954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b958: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x12b958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x12b95c: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x12b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x12b960: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x12b960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x12b964: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x12b964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x12b968: 0xc04b792  jal         func_12DE48
    ctx->pc = 0x12B968u;
    SET_GPR_U32(ctx, 31, 0x12B970u);
    ctx->pc = 0x12B96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B968u;
            // 0x12b96c: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE48u;
    if (runtime->hasFunction(0x12DE48u)) {
        auto targetFn = runtime->lookupFunction(0x12DE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B970u; }
        if (ctx->pc != 0x12B970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DE48_0x12de48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B970u; }
        if (ctx->pc != 0x12B970u) { return; }
    }
    ctx->pc = 0x12B970u;
label_12b970:
    // 0x12b970: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12b970u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b974: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12b974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12b978: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x12b978u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b97c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B97Cu;
            // 0x12b980: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B984u;
    // 0x12b984: 0x0  nop
    ctx->pc = 0x12b984u;
    // NOP
}
