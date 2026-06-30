#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E7900
// Address: 0x4e7900 - 0x4e79a0
void sub_004E7900_0x4e7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7900_0x4e7900");
#endif

    switch (ctx->pc) {
        case 0x4e790cu: goto label_4e790c;
        default: break;
    }

    ctx->pc = 0x4e7900u;

    // 0x4e7900: 0x8ca90030  lw          $t1, 0x30($a1)
    ctx->pc = 0x4e7900u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4e7904: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x4e7904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x4e7908: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e7908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4e790c:
    // 0x4e790c: 0x8c67ca40  lw          $a3, -0x35C0($v1)
    ctx->pc = 0x4e790cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953536)));
    // 0x4e7910: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x4e7910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4e7914: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4e7914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e7918: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4e7918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4e791c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4e791cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4e7920: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E7920u;
    {
        const bool branch_taken_0x4e7920 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E7924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7920u;
            // 0x4e7924: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7920) {
            ctx->pc = 0x4E790Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e790c;
        }
    }
    ctx->pc = 0x4E7928u;
    // 0x4e7928: 0x80860068  lb          $a2, 0x68($a0)
    ctx->pc = 0x4e7928u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x4e792c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e792cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x4e7930: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x4e7930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4e7934: 0x8c63ca48  lw          $v1, -0x35B8($v1)
    ctx->pc = 0x4e7934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953544)));
    // 0x4e7938: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x4e7938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4e793c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4e793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4e7940: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x4e7940u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x4e7944: 0x602027  not         $a0, $v1
    ctx->pc = 0x4e7944u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x4e7948: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4e7948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4e794c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e7950: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4e7950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4e7954: 0x3e00008  jr          $ra
    ctx->pc = 0x4E7954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7954u;
            // 0x4e7958: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E795Cu;
    // 0x4e795c: 0x0  nop
    ctx->pc = 0x4e795cu;
    // NOP
    // 0x4e7960: 0x813969c  j           func_4E5A70
    ctx->pc = 0x4E7960u;
    ctx->pc = 0x4E7964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7960u;
            // 0x4e7964: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E5A70u;
    {
        auto targetFn = runtime->lookupFunction(0x4E5A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E7968u;
    // 0x4e7968: 0x0  nop
    ctx->pc = 0x4e7968u;
    // NOP
    // 0x4e796c: 0x0  nop
    ctx->pc = 0x4e796cu;
    // NOP
    // 0x4e7970: 0x81399c4  j           func_4E6710
    ctx->pc = 0x4E7970u;
    ctx->pc = 0x4E7974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7970u;
            // 0x4e7974: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E6710u;
    {
        auto targetFn = runtime->lookupFunction(0x4E6710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E7978u;
    // 0x4e7978: 0x0  nop
    ctx->pc = 0x4e7978u;
    // NOP
    // 0x4e797c: 0x0  nop
    ctx->pc = 0x4e797cu;
    // NOP
    // 0x4e7980: 0x8139644  j           func_4E5910
    ctx->pc = 0x4E7980u;
    ctx->pc = 0x4E7984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7980u;
            // 0x4e7984: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E5910u;
    if (runtime->hasFunction(0x4E5910u)) {
        auto targetFn = runtime->lookupFunction(0x4E5910u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004E5910_0x4e5910(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4E7988u;
    // 0x4e7988: 0x0  nop
    ctx->pc = 0x4e7988u;
    // NOP
    // 0x4e798c: 0x0  nop
    ctx->pc = 0x4e798cu;
    // NOP
    // 0x4e7990: 0x8139620  j           func_4E5880
    ctx->pc = 0x4E7990u;
    ctx->pc = 0x4E7994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7990u;
            // 0x4e7994: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E5880u;
    {
        auto targetFn = runtime->lookupFunction(0x4E5880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E7998u;
    // 0x4e7998: 0x0  nop
    ctx->pc = 0x4e7998u;
    // NOP
    // 0x4e799c: 0x0  nop
    ctx->pc = 0x4e799cu;
    // NOP
}
