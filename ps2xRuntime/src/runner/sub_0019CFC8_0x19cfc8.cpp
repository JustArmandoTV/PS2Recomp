#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CFC8
// Address: 0x19cfc8 - 0x19d068
void sub_0019CFC8_0x19cfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CFC8_0x19cfc8");
#endif

    switch (ctx->pc) {
        case 0x19cfdcu: goto label_19cfdc;
        case 0x19cff4u: goto label_19cff4;
        case 0x19d02cu: goto label_19d02c;
        case 0x19d044u: goto label_19d044;
        default: break;
    }

    ctx->pc = 0x19cfc8u;

    // 0x19cfc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19cfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cfd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19cfd4: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19CFD4u;
    SET_GPR_U32(ctx, 31, 0x19CFDCu);
    ctx->pc = 0x19CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFD4u;
            // 0x19cfd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFDCu; }
        if (ctx->pc != 0x19CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFDCu; }
        if (ctx->pc != 0x19CFDCu) { return; }
    }
    ctx->pc = 0x19CFDCu;
label_19cfdc:
    // 0x19cfdc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19cfe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cfe4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CFE4u;
    {
        const bool branch_taken_0x19cfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19CFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFE4u;
            // 0x19cfe8: 0x24849760  addiu       $a0, $a0, -0x68A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cfe4) {
            ctx->pc = 0x19D000u;
            goto label_19d000;
        }
    }
    ctx->pc = 0x19CFECu;
    // 0x19cfec: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19CFECu;
    SET_GPR_U32(ctx, 31, 0x19CFF4u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFF4u; }
        if (ctx->pc != 0x19CFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CFF4u; }
        if (ctx->pc != 0x19CFF4u) { return; }
    }
    ctx->pc = 0x19CFF4u;
label_19cff4:
    // 0x19cff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19CFF4u;
    {
        const bool branch_taken_0x19cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CFF4u;
            // 0x19cff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cff4) {
            ctx->pc = 0x19D004u;
            goto label_19d004;
        }
    }
    ctx->pc = 0x19CFFCu;
    // 0x19cffc: 0x0  nop
    ctx->pc = 0x19cffcu;
    // NOP
label_19d000:
    // 0x19d000: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x19d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_19d004:
    // 0x19d004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19d008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d00c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D00Cu;
            // 0x19d010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D014u;
    // 0x19d014: 0x0  nop
    ctx->pc = 0x19d014u;
    // NOP
    // 0x19d018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d01c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d020: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19d020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19d024: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19D024u;
    SET_GPR_U32(ctx, 31, 0x19D02Cu);
    ctx->pc = 0x19D028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D024u;
            // 0x19d028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D02Cu; }
        if (ctx->pc != 0x19D02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D02Cu; }
        if (ctx->pc != 0x19D02Cu) { return; }
    }
    ctx->pc = 0x19D02Cu;
label_19d02c:
    // 0x19d02c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d030: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19D030u;
    {
        const bool branch_taken_0x19d030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19D034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D030u;
            // 0x19d034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d030) {
            ctx->pc = 0x19D058u;
            goto label_19d058;
        }
    }
    ctx->pc = 0x19D038u;
    // 0x19d038: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19d038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19d03c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19D03Cu;
    SET_GPR_U32(ctx, 31, 0x19D044u);
    ctx->pc = 0x19D040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D03Cu;
            // 0x19d040: 0x24849790  addiu       $a0, $a0, -0x6870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D044u; }
        if (ctx->pc != 0x19D044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D044u; }
        if (ctx->pc != 0x19D044u) { return; }
    }
    ctx->pc = 0x19D044u;
label_19d044:
    // 0x19d044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19d044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d04c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19d04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d050: 0x3e00008  jr          $ra
    ctx->pc = 0x19D050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D050u;
            // 0x19d054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D058u;
label_19d058:
    // 0x19d058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d05c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d060: 0x8067572  j           func_19D5C8
    ctx->pc = 0x19D060u;
    ctx->pc = 0x19D064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D060u;
            // 0x19d064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5C8u;
    {
        auto targetFn = runtime->lookupFunction(0x19D5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19D068u;
}
