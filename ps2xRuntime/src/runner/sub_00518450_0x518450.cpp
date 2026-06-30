#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00518450
// Address: 0x518450 - 0x518520
void sub_00518450_0x518450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00518450_0x518450");
#endif

    switch (ctx->pc) {
        case 0x5184a8u: goto label_5184a8;
        case 0x5184b0u: goto label_5184b0;
        default: break;
    }

    ctx->pc = 0x518450u;

    // 0x518450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x518450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x518454: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x518454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x518458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x518458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x51845c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51845cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x518460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x518460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x518464: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x518464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x518468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x518468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51846c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51846cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x518470: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x518470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x518474: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x518474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x518478: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x518478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51847c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x51847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
    // 0x518480: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x518480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x518484: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x518484u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x518488: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x518488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x51848c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x518490: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x518490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x518494: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x518494u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x518498: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x518498u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x51849c: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x51849cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x5184a0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x5184A0u;
    SET_GPR_U32(ctx, 31, 0x5184A8u);
    ctx->pc = 0x5184A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5184A0u;
            // 0x5184a4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5184A8u; }
        if (ctx->pc != 0x5184A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5184A8u; }
        if (ctx->pc != 0x5184A8u) { return; }
    }
    ctx->pc = 0x5184A8u;
label_5184a8:
    // 0x5184a8: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x5184A8u;
    SET_GPR_U32(ctx, 31, 0x5184B0u);
    ctx->pc = 0x5184ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5184A8u;
            // 0x5184ac: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5184B0u; }
        if (ctx->pc != 0x5184B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5184B0u; }
        if (ctx->pc != 0x5184B0u) { return; }
    }
    ctx->pc = 0x5184B0u;
label_5184b0:
    // 0x5184b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5184b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5184b4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x5184b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x5184b8: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x5184b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x5184bc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x5184bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x5184c0: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x5184c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
    // 0x5184c4: 0x248445f0  addiu       $a0, $a0, 0x45F0
    ctx->pc = 0x5184c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17904));
    // 0x5184c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5184c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5184cc: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x5184ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
    // 0x5184d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5184d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5184d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x5184d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x5184d8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x5184d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5184dc: 0xa225004d  sb          $a1, 0x4D($s1)
    ctx->pc = 0x5184dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 77), (uint8_t)GPR_U32(ctx, 5));
    // 0x5184e0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x5184e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x5184e4: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x5184e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    // 0x5184e8: 0xae230124  sw          $v1, 0x124($s1)
    ctx->pc = 0x5184e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 3));
    // 0x5184ec: 0xa2200128  sb          $zero, 0x128($s1)
    ctx->pc = 0x5184ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 0));
    // 0x5184f0: 0xae300134  sw          $s0, 0x134($s1)
    ctx->pc = 0x5184f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 16));
    // 0x5184f4: 0xae20013c  sw          $zero, 0x13C($s1)
    ctx->pc = 0x5184f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 0));
    // 0x5184f8: 0xa2230140  sb          $v1, 0x140($s1)
    ctx->pc = 0x5184f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 320), (uint8_t)GPR_U32(ctx, 3));
    // 0x5184fc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x5184fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x518500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x518500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x518504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x518504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x518508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x518508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51850c: 0x3e00008  jr          $ra
    ctx->pc = 0x51850Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x518510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51850Cu;
            // 0x518510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x518514u;
    // 0x518514: 0x0  nop
    ctx->pc = 0x518514u;
    // NOP
    // 0x518518: 0x0  nop
    ctx->pc = 0x518518u;
    // NOP
    // 0x51851c: 0x0  nop
    ctx->pc = 0x51851cu;
    // NOP
}
