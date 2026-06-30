#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015ACB0
// Address: 0x15acb0 - 0x15ad50
void sub_0015ACB0_0x15acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ACB0_0x15acb0");
#endif

    switch (ctx->pc) {
        case 0x15acc4u: goto label_15acc4;
        case 0x15ad3cu: goto label_15ad3c;
        default: break;
    }

    ctx->pc = 0x15acb0u;

    // 0x15acb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15acb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15acb8: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15acbc: 0xc056ce0  jal         func_15B380
    ctx->pc = 0x15ACBCu;
    SET_GPR_U32(ctx, 31, 0x15ACC4u);
    ctx->pc = 0x15ACC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACBCu;
            // 0x15acc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B380u;
    if (runtime->hasFunction(0x15B380u)) {
        auto targetFn = runtime->lookupFunction(0x15B380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACC4u; }
        if (ctx->pc != 0x15ACC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B380_0x15b380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACC4u; }
        if (ctx->pc != 0x15ACC4u) { return; }
    }
    ctx->pc = 0x15ACC4u;
label_15acc4:
    // 0x15acc4: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x15acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x15acc8: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x15acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x15accc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x15acccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x15acd0: 0x3463aaaa  ori         $v1, $v1, 0xAAAA
    ctx->pc = 0x15acd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43690);
    // 0x15acd4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x15acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x15acd8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15acd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x15acdc: 0x3c03bbbb  lui         $v1, 0xBBBB
    ctx->pc = 0x15acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48059 << 16));
    // 0x15ace0: 0x3c053100  lui         $a1, 0x3100
    ctx->pc = 0x15ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12544 << 16));
    // 0x15ace4: 0x3463bbbb  ori         $v1, $v1, 0xBBBB
    ctx->pc = 0x15ace4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48059);
    // 0x15ace8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x15ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x15acec: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x15acecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x15acf0: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x15acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x15acf4: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x15acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x15acf8: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x15acf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x15acfc: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x15acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x15ad00: 0x3c037777  lui         $v1, 0x7777
    ctx->pc = 0x15ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30583 << 16));
    // 0x15ad04: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x15ad04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x15ad08: 0x34637777  ori         $v1, $v1, 0x7777
    ctx->pc = 0x15ad08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30583);
    // 0x15ad0c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x15ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x15ad10: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x15ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x15ad14: 0x34648888  ori         $a0, $v1, 0x8888
    ctx->pc = 0x15ad14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34952);
    // 0x15ad18: 0x3c039999  lui         $v1, 0x9999
    ctx->pc = 0x15ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39321 << 16));
    // 0x15ad1c: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x15ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x15ad20: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x15ad20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39321);
    // 0x15ad24: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x15ad24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x15ad28: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x15ad28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x15ad2c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x15ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x15ad30: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15ad30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15ad34: 0xc056d60  jal         func_15B580
    ctx->pc = 0x15AD34u;
    SET_GPR_U32(ctx, 31, 0x15AD3Cu);
    ctx->pc = 0x15AD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD34u;
            // 0x15ad38: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B580u;
    if (runtime->hasFunction(0x15B580u)) {
        auto targetFn = runtime->lookupFunction(0x15B580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD3Cu; }
        if (ctx->pc != 0x15AD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B580_0x15b580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD3Cu; }
        if (ctx->pc != 0x15AD3Cu) { return; }
    }
    ctx->pc = 0x15AD3Cu;
label_15ad3c:
    // 0x15ad3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ad3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ad40: 0x3e00008  jr          $ra
    ctx->pc = 0x15AD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD40u;
            // 0x15ad44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AD48u;
    // 0x15ad48: 0x0  nop
    ctx->pc = 0x15ad48u;
    // NOP
    // 0x15ad4c: 0x0  nop
    ctx->pc = 0x15ad4cu;
    // NOP
}
