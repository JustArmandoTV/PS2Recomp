#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CA08
// Address: 0x19ca08 - 0x19cb60
void sub_0019CA08_0x19ca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CA08_0x19ca08");
#endif

    switch (ctx->pc) {
        case 0x19ca20u: goto label_19ca20;
        case 0x19ca38u: goto label_19ca38;
        case 0x19ca60u: goto label_19ca60;
        case 0x19ca74u: goto label_19ca74;
        case 0x19ca7cu: goto label_19ca7c;
        case 0x19ca90u: goto label_19ca90;
        case 0x19ca98u: goto label_19ca98;
        case 0x19cab0u: goto label_19cab0;
        case 0x19cac4u: goto label_19cac4;
        case 0x19cae8u: goto label_19cae8;
        case 0x19cafcu: goto label_19cafc;
        case 0x19cb04u: goto label_19cb04;
        case 0x19cb18u: goto label_19cb18;
        case 0x19cb20u: goto label_19cb20;
        default: break;
    }

    ctx->pc = 0x19ca08u;

    // 0x19ca08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ca08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ca0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ca10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ca10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ca14: 0x80672f0  j           func_19CBC0
    ctx->pc = 0x19CA14u;
    ctx->pc = 0x19CA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA14u;
            // 0x19ca18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CBC0u;
    {
        auto targetFn = runtime->lookupFunction(0x19CBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19CA1Cu;
    // 0x19ca1c: 0x0  nop
    ctx->pc = 0x19ca1cu;
    // NOP
label_19ca20:
    // 0x19ca20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ca24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ca28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19ca2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ca30: 0xc0672d8  jal         func_19CB60
    ctx->pc = 0x19CA30u;
    SET_GPR_U32(ctx, 31, 0x19CA38u);
    ctx->pc = 0x19CB60u;
    if (runtime->hasFunction(0x19CB60u)) {
        auto targetFn = runtime->lookupFunction(0x19CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA38u; }
        if (ctx->pc != 0x19CA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CB60_0x19cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA38u; }
        if (ctx->pc != 0x19CA38u) { return; }
    }
    ctx->pc = 0x19CA38u;
label_19ca38:
    // 0x19ca38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19ca38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca3c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19ca40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ca44: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x19CA44u;
    {
        const bool branch_taken_0x19ca44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x19CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA44u;
            // 0x19ca48: 0x24519938  addiu       $s1, $v0, -0x66C8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca44) {
            ctx->pc = 0x19CA9Cu;
            goto label_19ca9c;
        }
    }
    ctx->pc = 0x19CA4Cu;
    // 0x19ca4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19ca50: 0x50500013  beql        $v0, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19CA50u;
    {
        const bool branch_taken_0x19ca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x19ca50) {
            ctx->pc = 0x19CA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA50u;
            // 0x19ca54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19CAA0u;
            goto label_19caa0;
        }
    }
    ctx->pc = 0x19CA58u;
    // 0x19ca58: 0xc0672f8  jal         func_19CBE0
    ctx->pc = 0x19CA58u;
    SET_GPR_U32(ctx, 31, 0x19CA60u);
    ctx->pc = 0x19CBE0u;
    if (runtime->hasFunction(0x19CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA60u; }
        if (ctx->pc != 0x19CA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CBE0_0x19cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA60u; }
        if (ctx->pc != 0x19CA60u) { return; }
    }
    ctx->pc = 0x19CA60u;
label_19ca60:
    // 0x19ca60: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x19ca60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x19ca64: 0x24c63d80  addiu       $a2, $a2, 0x3D80
    ctx->pc = 0x19ca64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15744));
    // 0x19ca68: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x19ca68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19ca6c: 0xc067300  jal         func_19CC00
    ctx->pc = 0x19CA6Cu;
    SET_GPR_U32(ctx, 31, 0x19CA74u);
    ctx->pc = 0x19CA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA6Cu;
            // 0x19ca70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CC00u;
    if (runtime->hasFunction(0x19CC00u)) {
        auto targetFn = runtime->lookupFunction(0x19CC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA74u; }
        if (ctx->pc != 0x19CA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CC00_0x19cc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA74u; }
        if (ctx->pc != 0x19CA74u) { return; }
    }
    ctx->pc = 0x19CA74u;
label_19ca74:
    // 0x19ca74: 0xc067376  jal         func_19CDD8
    ctx->pc = 0x19CA74u;
    SET_GPR_U32(ctx, 31, 0x19CA7Cu);
    ctx->pc = 0x19CA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA74u;
            // 0x19ca78: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CDD8u;
    if (runtime->hasFunction(0x19CDD8u)) {
        auto targetFn = runtime->lookupFunction(0x19CDD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA7Cu; }
        if (ctx->pc != 0x19CA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CDD8_0x19cdd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA7Cu; }
        if (ctx->pc != 0x19CA7Cu) { return; }
    }
    ctx->pc = 0x19CA7Cu;
label_19ca7c:
    // 0x19ca7c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x19ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x19ca80: 0x24847d80  addiu       $a0, $a0, 0x7D80
    ctx->pc = 0x19ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32128));
    // 0x19ca84: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x19ca84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19ca88: 0xc067338  jal         func_19CCE0
    ctx->pc = 0x19CA88u;
    SET_GPR_U32(ctx, 31, 0x19CA90u);
    ctx->pc = 0x19CA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA88u;
            // 0x19ca8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CCE0u;
    if (runtime->hasFunction(0x19CCE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA90u; }
        if (ctx->pc != 0x19CA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CCE0_0x19cce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA90u; }
        if (ctx->pc != 0x19CA90u) { return; }
    }
    ctx->pc = 0x19CA90u;
label_19ca90:
    // 0x19ca90: 0xc067376  jal         func_19CDD8
    ctx->pc = 0x19CA90u;
    SET_GPR_U32(ctx, 31, 0x19CA98u);
    ctx->pc = 0x19CA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA90u;
            // 0x19ca94: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CDD8u;
    if (runtime->hasFunction(0x19CDD8u)) {
        auto targetFn = runtime->lookupFunction(0x19CDD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA98u; }
        if (ctx->pc != 0x19CA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CDD8_0x19cdd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA98u; }
        if (ctx->pc != 0x19CA98u) { return; }
    }
    ctx->pc = 0x19CA98u;
label_19ca98:
    // 0x19ca98: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x19ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_19ca9c:
    // 0x19ca9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ca9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19caa0:
    // 0x19caa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19caa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19caa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19caa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19caa8: 0x3e00008  jr          $ra
    ctx->pc = 0x19CAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAA8u;
            // 0x19caac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CAB0u;
label_19cab0:
    // 0x19cab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19cab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19cabc: 0xc0672d8  jal         func_19CB60
    ctx->pc = 0x19CABCu;
    SET_GPR_U32(ctx, 31, 0x19CAC4u);
    ctx->pc = 0x19CB60u;
    if (runtime->hasFunction(0x19CB60u)) {
        auto targetFn = runtime->lookupFunction(0x19CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAC4u; }
        if (ctx->pc != 0x19CAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CB60_0x19cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAC4u; }
        if (ctx->pc != 0x19CAC4u) { return; }
    }
    ctx->pc = 0x19CAC4u;
label_19cac4:
    // 0x19cac4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x19cac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cacc: 0x14440015  bne         $v0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19CACCu;
    {
        const bool branch_taken_0x19cacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x19CAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CACCu;
            // 0x19cad0: 0x24709938  addiu       $s0, $v1, -0x66C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cacc) {
            ctx->pc = 0x19CB24u;
            goto label_19cb24;
        }
    }
    ctx->pc = 0x19CAD4u;
    // 0x19cad4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19cad8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x19CAD8u;
    {
        const bool branch_taken_0x19cad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cad8) {
            ctx->pc = 0x19CADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAD8u;
            // 0x19cadc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19CB28u;
            goto label_19cb28;
        }
    }
    ctx->pc = 0x19CAE0u;
    // 0x19cae0: 0xc0672f8  jal         func_19CBE0
    ctx->pc = 0x19CAE0u;
    SET_GPR_U32(ctx, 31, 0x19CAE8u);
    ctx->pc = 0x19CBE0u;
    if (runtime->hasFunction(0x19CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAE8u; }
        if (ctx->pc != 0x19CAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CBE0_0x19cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAE8u; }
        if (ctx->pc != 0x19CAE8u) { return; }
    }
    ctx->pc = 0x19CAE8u;
label_19cae8:
    // 0x19cae8: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x19cae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x19caec: 0x24c67d80  addiu       $a2, $a2, 0x7D80
    ctx->pc = 0x19caecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32128));
    // 0x19caf0: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x19caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19caf4: 0xc067300  jal         func_19CC00
    ctx->pc = 0x19CAF4u;
    SET_GPR_U32(ctx, 31, 0x19CAFCu);
    ctx->pc = 0x19CAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAF4u;
            // 0x19caf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CC00u;
    if (runtime->hasFunction(0x19CC00u)) {
        auto targetFn = runtime->lookupFunction(0x19CC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAFCu; }
        if (ctx->pc != 0x19CAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CC00_0x19cc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAFCu; }
        if (ctx->pc != 0x19CAFCu) { return; }
    }
    ctx->pc = 0x19CAFCu;
label_19cafc:
    // 0x19cafc: 0xc067376  jal         func_19CDD8
    ctx->pc = 0x19CAFCu;
    SET_GPR_U32(ctx, 31, 0x19CB04u);
    ctx->pc = 0x19CB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAFCu;
            // 0x19cb00: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CDD8u;
    if (runtime->hasFunction(0x19CDD8u)) {
        auto targetFn = runtime->lookupFunction(0x19CDD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB04u; }
        if (ctx->pc != 0x19CB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CDD8_0x19cdd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB04u; }
        if (ctx->pc != 0x19CB04u) { return; }
    }
    ctx->pc = 0x19CB04u;
label_19cb04:
    // 0x19cb04: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x19cb04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x19cb08: 0x24843d80  addiu       $a0, $a0, 0x3D80
    ctx->pc = 0x19cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15744));
    // 0x19cb0c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x19cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19cb10: 0xc067338  jal         func_19CCE0
    ctx->pc = 0x19CB10u;
    SET_GPR_U32(ctx, 31, 0x19CB18u);
    ctx->pc = 0x19CB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB10u;
            // 0x19cb14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CCE0u;
    if (runtime->hasFunction(0x19CCE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB18u; }
        if (ctx->pc != 0x19CB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CCE0_0x19cce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB18u; }
        if (ctx->pc != 0x19CB18u) { return; }
    }
    ctx->pc = 0x19CB18u;
label_19cb18:
    // 0x19cb18: 0xc067376  jal         func_19CDD8
    ctx->pc = 0x19CB18u;
    SET_GPR_U32(ctx, 31, 0x19CB20u);
    ctx->pc = 0x19CB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB18u;
            // 0x19cb1c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CDD8u;
    if (runtime->hasFunction(0x19CDD8u)) {
        auto targetFn = runtime->lookupFunction(0x19CDD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB20u; }
        if (ctx->pc != 0x19CB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CDD8_0x19cdd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB20u; }
        if (ctx->pc != 0x19CB20u) { return; }
    }
    ctx->pc = 0x19CB20u;
label_19cb20:
    // 0x19cb20: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x19cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_19cb24:
    // 0x19cb24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19cb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19cb28:
    // 0x19cb28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19cb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19cb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB2Cu;
            // 0x19cb30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CB34u;
    // 0x19cb34: 0x0  nop
    ctx->pc = 0x19cb34u;
    // NOP
    // 0x19cb38: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CB38u;
    {
        const bool branch_taken_0x19cb38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB38u;
            // 0x19cb3c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb38) {
            ctx->pc = 0x19CB50u;
            goto label_19cb50;
        }
    }
    ctx->pc = 0x19CB40u;
    // 0x19cb40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x19cb44: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB44u;
            // 0x19cb48: 0xac409930  sw          $zero, -0x66D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294940976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CB4Cu;
    // 0x19cb4c: 0x0  nop
    ctx->pc = 0x19cb4cu;
    // NOP
label_19cb50:
    // 0x19cb50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cb54: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB54u;
            // 0x19cb58: 0xac629930  sw          $v0, -0x66D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294940976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CB5Cu;
    // 0x19cb5c: 0x0  nop
    ctx->pc = 0x19cb5cu;
    // NOP
}
