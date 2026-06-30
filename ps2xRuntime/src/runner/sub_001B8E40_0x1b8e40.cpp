#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8E40
// Address: 0x1b8e40 - 0x1b8f20
void sub_001B8E40_0x1b8e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8E40_0x1b8e40");
#endif

    switch (ctx->pc) {
        case 0x1b8e5cu: goto label_1b8e5c;
        case 0x1b8e80u: goto label_1b8e80;
        default: break;
    }

    ctx->pc = 0x1b8e40u;

    // 0x1b8e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e48: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1b8e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1b8e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8e50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b8e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b8e54: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1B8E54u;
    SET_GPR_U32(ctx, 31, 0x1B8E5Cu);
    ctx->pc = 0x1B8E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E54u;
            // 0x1b8e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E5Cu; }
        if (ctx->pc != 0x1B8E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E5Cu; }
        if (ctx->pc != 0x1B8E5Cu) { return; }
    }
    ctx->pc = 0x1B8E5Cu;
label_1b8e5c:
    // 0x1b8e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8e60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b8e64: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1b8e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1b8e68: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1b8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1b8e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e70: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1b8e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1b8e74: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b8e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b8e78: 0xc06e3c8  jal         func_1B8F20
    ctx->pc = 0x1B8E78u;
    SET_GPR_U32(ctx, 31, 0x1B8E80u);
    ctx->pc = 0x1B8E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E78u;
            // 0x1b8e7c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F20u;
    if (runtime->hasFunction(0x1B8F20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E80u; }
        if (ctx->pc != 0x1B8E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F20_0x1b8f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8E80u; }
        if (ctx->pc != 0x1B8E80u) { return; }
    }
    ctx->pc = 0x1B8E80u;
label_1b8e80:
    // 0x1b8e80: 0xfe000108  sd          $zero, 0x108($s0)
    ctx->pc = 0x1b8e80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 0));
    // 0x1b8e84: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1b8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1b8e88: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x1b8e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16960);
    // 0x1b8e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8e90: 0x2404412b  addiu       $a0, $zero, 0x412B
    ctx->pc = 0x1b8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16683));
    // 0x1b8e94: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1b8e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1b8e98: 0x34a50d40  ori         $a1, $a1, 0xD40
    ctx->pc = 0x1b8e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3392);
    // 0x1b8e9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b8e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8ea0: 0xfe020130  sd          $v0, 0x130($s0)
    ctx->pc = 0x1b8ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 2));
    // 0x1b8ea4: 0xfe040138  sd          $a0, 0x138($s0)
    ctx->pc = 0x1b8ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 312), GPR_U64(ctx, 4));
    // 0x1b8ea8: 0xfe050148  sd          $a1, 0x148($s0)
    ctx->pc = 0x1b8ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 328), GPR_U64(ctx, 5));
    // 0x1b8eac: 0xfe030170  sd          $v1, 0x170($s0)
    ctx->pc = 0x1b8eacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 368), GPR_U64(ctx, 3));
    // 0x1b8eb0: 0xfe060178  sd          $a2, 0x178($s0)
    ctx->pc = 0x1b8eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 6));
    // 0x1b8eb4: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x1b8eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x1b8eb8: 0xfe020110  sd          $v0, 0x110($s0)
    ctx->pc = 0x1b8eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 2));
    // 0x1b8ebc: 0xfe000118  sd          $zero, 0x118($s0)
    ctx->pc = 0x1b8ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 0));
    // 0x1b8ec0: 0xfe020120  sd          $v0, 0x120($s0)
    ctx->pc = 0x1b8ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 2));
    // 0x1b8ec4: 0xfe000128  sd          $zero, 0x128($s0)
    ctx->pc = 0x1b8ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 0));
    // 0x1b8ec8: 0xfe030140  sd          $v1, 0x140($s0)
    ctx->pc = 0x1b8ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 3));
    // 0x1b8ecc: 0xfe030150  sd          $v1, 0x150($s0)
    ctx->pc = 0x1b8eccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 336), GPR_U64(ctx, 3));
    // 0x1b8ed0: 0xfe000158  sd          $zero, 0x158($s0)
    ctx->pc = 0x1b8ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 344), GPR_U64(ctx, 0));
    // 0x1b8ed4: 0xfe030160  sd          $v1, 0x160($s0)
    ctx->pc = 0x1b8ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 352), GPR_U64(ctx, 3));
    // 0x1b8ed8: 0xfe000168  sd          $zero, 0x168($s0)
    ctx->pc = 0x1b8ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 360), GPR_U64(ctx, 0));
    // 0x1b8edc: 0xfe000180  sd          $zero, 0x180($s0)
    ctx->pc = 0x1b8edcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 0));
    // 0x1b8ee0: 0xfe000188  sd          $zero, 0x188($s0)
    ctx->pc = 0x1b8ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 0));
    // 0x1b8ee4: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x1b8ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x1b8ee8: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x1b8ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x1b8eec: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x1b8eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x1b8ef0: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x1b8ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x1b8ef4: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x1b8ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x1b8ef8: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x1b8ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x1b8efc: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x1b8efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x1b8f00: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x1b8f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x1b8f04: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x1b8f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x1b8f08: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x1b8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x1b8f0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b8f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8f14: 0x806e574  j           func_1B95D0
    ctx->pc = 0x1B8F14u;
    ctx->pc = 0x1B8F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8F14u;
            // 0x1b8f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B8F1Cu;
    // 0x1b8f1c: 0x0  nop
    ctx->pc = 0x1b8f1cu;
    // NOP
}
