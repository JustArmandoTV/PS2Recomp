#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CC620
// Address: 0x4cc620 - 0x4cc700
void sub_004CC620_0x4cc620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC620_0x4cc620");
#endif

    switch (ctx->pc) {
        case 0x4cc6a8u: goto label_4cc6a8;
        case 0x4cc6b0u: goto label_4cc6b0;
        default: break;
    }

    ctx->pc = 0x4cc620u;

    // 0x4cc620: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x4CC620u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4CC628u;
    // 0x4cc628: 0x0  nop
    ctx->pc = 0x4cc628u;
    // NOP
    // 0x4cc62c: 0x0  nop
    ctx->pc = 0x4cc62cu;
    // NOP
    // 0x4cc630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cc630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cc634: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4cc634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x4cc638: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cc638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4cc63c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4cc63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4cc640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cc640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4cc644: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4cc644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4cc648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cc648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4cc64c: 0x24a5cfe0  addiu       $a1, $a1, -0x3020
    ctx->pc = 0x4cc64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954976));
    // 0x4cc650: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cc650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4cc654: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x4cc654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
    // 0x4cc658: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4cc658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4cc65c: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4cc65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x4cc660: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4cc660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4cc664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cc664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc668: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cc668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cc66c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4cc66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4cc670: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4cc670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4cc674: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4cc674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x4cc678: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x4cc678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x4cc67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cc67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cc680: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4cc680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4cc684: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x4cc684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4cc688: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x4cc688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x4cc68c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4cc68cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4cc690: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x4cc690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x4cc694: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4cc694u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x4cc698: 0xa080005d  sb          $zero, 0x5D($a0)
    ctx->pc = 0x4cc698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x4cc69c: 0xa082005e  sb          $v0, 0x5E($a0)
    ctx->pc = 0x4cc69cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 2));
    // 0x4cc6a0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x4CC6A0u;
    SET_GPR_U32(ctx, 31, 0x4CC6A8u);
    ctx->pc = 0x4CC6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC6A0u;
            // 0x4cc6a4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC6A8u; }
        if (ctx->pc != 0x4CC6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC6A8u; }
        if (ctx->pc != 0x4CC6A8u) { return; }
    }
    ctx->pc = 0x4CC6A8u;
label_4cc6a8:
    // 0x4cc6a8: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x4CC6A8u;
    SET_GPR_U32(ctx, 31, 0x4CC6B0u);
    ctx->pc = 0x4CC6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC6A8u;
            // 0x4cc6ac: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC6B0u; }
        if (ctx->pc != 0x4CC6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC6B0u; }
        if (ctx->pc != 0x4CC6B0u) { return; }
    }
    ctx->pc = 0x4CC6B0u;
label_4cc6b0:
    // 0x4cc6b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cc6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4cc6b4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x4cc6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x4cc6b8: 0x8c460e80  lw          $a2, 0xE80($v0)
    ctx->pc = 0x4cc6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4cc6bc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x4cc6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x4cc6c0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cc6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4cc6c4: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x4cc6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
    // 0x4cc6c8: 0x24841c20  addiu       $a0, $a0, 0x1C20
    ctx->pc = 0x4cc6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7200));
    // 0x4cc6cc: 0x24631c54  addiu       $v1, $v1, 0x1C54
    ctx->pc = 0x4cc6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7252));
    // 0x4cc6d0: 0x8cc60788  lw          $a2, 0x788($a2)
    ctx->pc = 0x4cc6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1928)));
    // 0x4cc6d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cc6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc6d8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4cc6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4cc6dc: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x4cc6dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cc6e0: 0xa205004d  sb          $a1, 0x4D($s0)
    ctx->pc = 0x4cc6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
    // 0x4cc6e4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4cc6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4cc6e8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x4cc6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x4cc6ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cc6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cc6f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cc6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cc6f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cc6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cc6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CC6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC6F8u;
            // 0x4cc6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC700u;
}
