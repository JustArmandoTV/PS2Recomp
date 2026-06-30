#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C9E0
// Address: 0x17c9e0 - 0x17caa8
void sub_0017C9E0_0x17c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C9E0_0x17c9e0");
#endif

    switch (ctx->pc) {
        case 0x17ca04u: goto label_17ca04;
        case 0x17ca0cu: goto label_17ca0c;
        case 0x17ca80u: goto label_17ca80;
        default: break;
    }

    ctx->pc = 0x17c9e0u;

    // 0x17c9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c9e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c9e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17c9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17c9f0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x17c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17c9f4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x17C9F4u;
    {
        const bool branch_taken_0x17c9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c9f4) {
            ctx->pc = 0x17C9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17C9F4u;
            // 0x17c9f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17CA98u;
            goto label_17ca98;
        }
    }
    ctx->pc = 0x17C9FCu;
    // 0x17c9fc: 0xc061f80  jal         func_187E00
    ctx->pc = 0x17C9FCu;
    SET_GPR_U32(ctx, 31, 0x17CA04u);
    ctx->pc = 0x187E00u;
    if (runtime->hasFunction(0x187E00u)) {
        auto targetFn = runtime->lookupFunction(0x187E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA04u; }
        if (ctx->pc != 0x17CA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E00_0x187e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA04u; }
        if (ctx->pc != 0x17CA04u) { return; }
    }
    ctx->pc = 0x17CA04u;
label_17ca04:
    // 0x17ca04: 0xc05e9ec  jal         func_17A7B0
    ctx->pc = 0x17CA04u;
    SET_GPR_U32(ctx, 31, 0x17CA0Cu);
    ctx->pc = 0x17CA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CA04u;
            // 0x17ca08: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A7B0u;
    if (runtime->hasFunction(0x17A7B0u)) {
        auto targetFn = runtime->lookupFunction(0x17A7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA0Cu; }
        if (ctx->pc != 0x17CA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A7B0_0x17a7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA0Cu; }
        if (ctx->pc != 0x17CA0Cu) { return; }
    }
    ctx->pc = 0x17CA0Cu;
label_17ca0c:
    // 0x17ca0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17ca0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca10: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x17ca10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x17ca14: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x17CA14u;
    {
        const bool branch_taken_0x17ca14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ca14) {
            ctx->pc = 0x17CA18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17CA14u;
            // 0x17ca18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17CA88u;
            goto label_17ca88;
        }
    }
    ctx->pc = 0x17CA1Cu;
    // 0x17ca1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17ca20: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x17ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x17ca24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ca28: 0x8c635e10  lw          $v1, 0x5E10($v1)
    ctx->pc = 0x17ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24080)));
    // 0x17ca2c: 0x600008  jr          $v1
    ctx->pc = 0x17CA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CA38u: goto label_17ca38;
            case 0x17CA48u: goto label_17ca48;
            case 0x17CA70u: goto label_17ca70;
            case 0x17CA84u: goto label_17ca84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17CA34u;
    // 0x17ca34: 0x0  nop
    ctx->pc = 0x17ca34u;
    // NOP
label_17ca38:
    // 0x17ca38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ca3c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x17ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17ca40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17CA40u;
    {
        const bool branch_taken_0x17ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CA40u;
            // 0x17ca44: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca40) {
            ctx->pc = 0x17CA78u;
            goto label_17ca78;
        }
    }
    ctx->pc = 0x17CA48u;
label_17ca48:
    // 0x17ca48: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x17ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17ca4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ca50: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17ca54: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x17ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x17ca58: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17ca5c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x17ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17ca60: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x17ca60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x17ca64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA64u;
    {
        const bool branch_taken_0x17ca64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CA64u;
            // 0x17ca68: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca64) {
            ctx->pc = 0x17CA78u;
            goto label_17ca78;
        }
    }
    ctx->pc = 0x17CA6Cu;
    // 0x17ca6c: 0x0  nop
    ctx->pc = 0x17ca6cu;
    // NOP
label_17ca70:
    // 0x17ca70: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x17ca70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ca74: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x17ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17ca78:
    // 0x17ca78: 0xc05e95c  jal         func_17A570
    ctx->pc = 0x17CA78u;
    SET_GPR_U32(ctx, 31, 0x17CA80u);
    ctx->pc = 0x17A570u;
    if (runtime->hasFunction(0x17A570u)) {
        auto targetFn = runtime->lookupFunction(0x17A570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA80u; }
        if (ctx->pc != 0x17CA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A570_0x17a570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CA80u; }
        if (ctx->pc != 0x17CA80u) { return; }
    }
    ctx->pc = 0x17CA80u;
label_17ca80:
    // 0x17ca80: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x17ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_17ca84:
    // 0x17ca84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ca84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ca88:
    // 0x17ca88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17ca88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ca8c: 0x8061f9e  j           func_187E78
    ctx->pc = 0x17CA8Cu;
    ctx->pc = 0x17CA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CA8Cu;
            // 0x17ca90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E78u;
    if (runtime->hasFunction(0x187E78u)) {
        auto targetFn = runtime->lookupFunction(0x187E78u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187E78_0x187e78(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17CA94u;
    // 0x17ca94: 0x0  nop
    ctx->pc = 0x17ca94u;
    // NOP
label_17ca98:
    // 0x17ca98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17ca98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ca9c: 0x3e00008  jr          $ra
    ctx->pc = 0x17CA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17CA9Cu;
            // 0x17caa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CAA4u;
    // 0x17caa4: 0x0  nop
    ctx->pc = 0x17caa4u;
    // NOP
}
