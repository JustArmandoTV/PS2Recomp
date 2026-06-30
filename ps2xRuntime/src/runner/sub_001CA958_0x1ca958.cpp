#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA958
// Address: 0x1ca958 - 0x1caaa8
void sub_001CA958_0x1ca958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA958_0x1ca958");
#endif

    switch (ctx->pc) {
        case 0x1ca9a0u: goto label_1ca9a0;
        case 0x1caa10u: goto label_1caa10;
        case 0x1caa80u: goto label_1caa80;
        default: break;
    }

    ctx->pc = 0x1ca958u;

    // 0x1ca958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca95c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1ca95cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ca960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca964: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1ca964u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1ca968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca96c: 0x8e05a70c  lw          $a1, -0x58F4($s0)
    ctx->pc = 0x1ca96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1ca970: 0x80a30ab7  lb          $v1, 0xAB7($a1)
    ctx->pc = 0x1ca970u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2743)));
    // 0x1ca974: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CA974u;
    {
        const bool branch_taken_0x1ca974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA974u;
            // 0x1ca978: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca974) {
            ctx->pc = 0x1CA9B4u;
            goto label_1ca9b4;
        }
    }
    ctx->pc = 0x1CA97Cu;
    // 0x1ca97c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca980: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA980u;
    {
        const bool branch_taken_0x1ca980 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA980u;
            // 0x1ca984: 0xa0a20ab7  sb          $v0, 0xAB7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca980) {
            ctx->pc = 0x1CA9A8u;
            goto label_1ca9a8;
        }
    }
    ctx->pc = 0x1CA988u;
    // 0x1ca988: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ca988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca98c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ca98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ca990: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ca990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca994: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca998: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CA998u;
    SET_GPR_U32(ctx, 31, 0x1CA9A0u);
    ctx->pc = 0x1CA99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA998u;
            // 0x1ca99c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9A0u; }
        if (ctx->pc != 0x1CA9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9A0u; }
        if (ctx->pc != 0x1CA9A0u) { return; }
    }
    ctx->pc = 0x1CA9A0u;
label_1ca9a0:
    // 0x1ca9a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA9A0u;
    {
        const bool branch_taken_0x1ca9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9A0u;
            // 0x1ca9a4: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9a0) {
            ctx->pc = 0x1CA9B0u;
            goto label_1ca9b0;
        }
    }
    ctx->pc = 0x1CA9A8u;
label_1ca9a8:
    // 0x1ca9a8: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1ca9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1ca9ac: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1ca9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1ca9b0:
    // 0x1ca9b0: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1ca9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1ca9b4:
    // 0x1ca9b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca9b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca9b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9BCu;
            // 0x1ca9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA9C4u;
    // 0x1ca9c4: 0x0  nop
    ctx->pc = 0x1ca9c4u;
    // NOP
    // 0x1ca9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca9cc: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1ca9ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ca9d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca9d4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1ca9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1ca9d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca9dc: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x1ca9dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ca9e0: 0x8e0aa70c  lw          $t2, -0x58F4($s0)
    ctx->pc = 0x1ca9e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1ca9e4: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x1ca9e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ca9e8: 0x81430ab7  lb          $v1, 0xAB7($t2)
    ctx->pc = 0x1ca9e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 2743)));
    // 0x1ca9ec: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CA9ECu;
    {
        const bool branch_taken_0x1ca9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9ECu;
            // 0x1ca9f0: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9ec) {
            ctx->pc = 0x1CAA24u;
            goto label_1caa24;
        }
    }
    ctx->pc = 0x1CA9F4u;
    // 0x1ca9f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca9f8: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA9F8u;
    {
        const bool branch_taken_0x1ca9f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA9F8u;
            // 0x1ca9fc: 0xa1420ab7  sb          $v0, 0xAB7($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9f8) {
            ctx->pc = 0x1CAA18u;
            goto label_1caa18;
        }
    }
    ctx->pc = 0x1CAA00u;
    // 0x1caa00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1caa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caa04: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1caa04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1caa08: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CAA08u;
    SET_GPR_U32(ctx, 31, 0x1CAA10u);
    ctx->pc = 0x1CAA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA08u;
            // 0x1caa0c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA10u; }
        if (ctx->pc != 0x1CAA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA10u; }
        if (ctx->pc != 0x1CAA10u) { return; }
    }
    ctx->pc = 0x1CAA10u;
label_1caa10:
    // 0x1caa10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAA10u;
    {
        const bool branch_taken_0x1caa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA10u;
            // 0x1caa14: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa10) {
            ctx->pc = 0x1CAA20u;
            goto label_1caa20;
        }
    }
    ctx->pc = 0x1CAA18u;
label_1caa18:
    // 0x1caa18: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1caa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1caa1c: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1caa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1caa20:
    // 0x1caa20: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1caa20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1caa24:
    // 0x1caa24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caa24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caa28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1caa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA2Cu;
            // 0x1caa30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAA34u;
    // 0x1caa34: 0x0  nop
    ctx->pc = 0x1caa34u;
    // NOP
    // 0x1caa38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1caa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1caa3c: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1caa3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1caa40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caa44: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1caa44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1caa48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1caa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1caa4c: 0x8e05a70c  lw          $a1, -0x58F4($s0)
    ctx->pc = 0x1caa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1caa50: 0x80a30ab7  lb          $v1, 0xAB7($a1)
    ctx->pc = 0x1caa50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2743)));
    // 0x1caa54: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CAA54u;
    {
        const bool branch_taken_0x1caa54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA54u;
            // 0x1caa58: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa54) {
            ctx->pc = 0x1CAA94u;
            goto label_1caa94;
        }
    }
    ctx->pc = 0x1CAA5Cu;
    // 0x1caa5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1caa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1caa60: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CAA60u;
    {
        const bool branch_taken_0x1caa60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA60u;
            // 0x1caa64: 0xa0a20ab7  sb          $v0, 0xAB7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa60) {
            ctx->pc = 0x1CAA88u;
            goto label_1caa88;
        }
    }
    ctx->pc = 0x1CAA68u;
    // 0x1caa68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1caa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caa6c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1caa6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1caa70: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1caa70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1caa74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caa74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa78: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CAA78u;
    SET_GPR_U32(ctx, 31, 0x1CAA80u);
    ctx->pc = 0x1CAA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA78u;
            // 0x1caa7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA80u; }
        if (ctx->pc != 0x1CAA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CAA80u; }
        if (ctx->pc != 0x1CAA80u) { return; }
    }
    ctx->pc = 0x1CAA80u;
label_1caa80:
    // 0x1caa80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAA80u;
    {
        const bool branch_taken_0x1caa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA80u;
            // 0x1caa84: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa80) {
            ctx->pc = 0x1CAA90u;
            goto label_1caa90;
        }
    }
    ctx->pc = 0x1CAA88u;
label_1caa88:
    // 0x1caa88: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x1caa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1caa8c: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1caa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1caa90:
    // 0x1caa90: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1caa90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1caa94:
    // 0x1caa94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caa94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caa98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1caa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CAA9Cu;
            // 0x1caaa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CAAA4u;
    // 0x1caaa4: 0x0  nop
    ctx->pc = 0x1caaa4u;
    // NOP
}
