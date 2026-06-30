#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BAF50
// Address: 0x1baf50 - 0x1bb0e8
void sub_001BAF50_0x1baf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAF50_0x1baf50");
#endif

    switch (ctx->pc) {
        case 0x1baf88u: goto label_1baf88;
        case 0x1baf98u: goto label_1baf98;
        case 0x1bafd8u: goto label_1bafd8;
        case 0x1bb020u: goto label_1bb020;
        case 0x1bb070u: goto label_1bb070;
        case 0x1bb080u: goto label_1bb080;
        case 0x1bb0c8u: goto label_1bb0c8;
        case 0x1bb0d8u: goto label_1bb0d8;
        default: break;
    }

    ctx->pc = 0x1baf50u;

    // 0x1baf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baf54: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1baf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1baf58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baf5c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1baf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1baf60: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1baf60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1baf64: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAF64u;
    {
        const bool branch_taken_0x1baf64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF64u;
            // 0x1baf68: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf64) {
            ctx->pc = 0x1BAF80u;
            goto label_1baf80;
        }
    }
    ctx->pc = 0x1BAF6Cu;
    // 0x1baf6c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1baf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1baf70: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAF70u;
    {
        const bool branch_taken_0x1baf70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF70u;
            // 0x1baf74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf70) {
            ctx->pc = 0x1BAF90u;
            goto label_1baf90;
        }
    }
    ctx->pc = 0x1BAF78u;
    // 0x1baf78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAF78u;
    {
        const bool branch_taken_0x1baf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF78u;
            // 0x1baf7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf78) {
            ctx->pc = 0x1BAF9Cu;
            goto label_1baf9c;
        }
    }
    ctx->pc = 0x1BAF80u;
label_1baf80:
    // 0x1baf80: 0xc06efcc  jal         func_1BBF30
    ctx->pc = 0x1BAF80u;
    SET_GPR_U32(ctx, 31, 0x1BAF88u);
    ctx->pc = 0x1BBF30u;
    if (runtime->hasFunction(0x1BBF30u)) {
        auto targetFn = runtime->lookupFunction(0x1BBF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF88u; }
        if (ctx->pc != 0x1BAF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBF30_0x1bbf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF88u; }
        if (ctx->pc != 0x1BAF88u) { return; }
    }
    ctx->pc = 0x1BAF88u;
label_1baf88:
    // 0x1baf88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAF88u;
    {
        const bool branch_taken_0x1baf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF88u;
            // 0x1baf8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf88) {
            ctx->pc = 0x1BAF9Cu;
            goto label_1baf9c;
        }
    }
    ctx->pc = 0x1BAF90u;
label_1baf90:
    // 0x1baf90: 0xc06f33c  jal         func_1BCCF0
    ctx->pc = 0x1BAF90u;
    SET_GPR_U32(ctx, 31, 0x1BAF98u);
    ctx->pc = 0x1BAF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF90u;
            // 0x1baf94: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCCF0u;
    if (runtime->hasFunction(0x1BCCF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BCCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF98u; }
        if (ctx->pc != 0x1BAF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCCF0_0x1bccf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAF98u; }
        if (ctx->pc != 0x1BAF98u) { return; }
    }
    ctx->pc = 0x1BAF98u;
label_1baf98:
    // 0x1baf98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1baf9c:
    // 0x1baf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF9Cu;
            // 0x1bafa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAFA4u;
    // 0x1bafa4: 0x0  nop
    ctx->pc = 0x1bafa4u;
    // NOP
    // 0x1bafa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bafa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bafac: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bafacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bafb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bafb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bafb4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bafb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bafb8: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x1bafb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bafbc: 0x11020007  beq         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAFBCu;
    {
        const bool branch_taken_0x1bafbc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFBCu;
            // 0x1bafc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafbc) {
            ctx->pc = 0x1BAFDCu;
            goto label_1bafdc;
        }
    }
    ctx->pc = 0x1BAFC4u;
    // 0x1bafc4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bafc8: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAFC8u;
    {
        const bool branch_taken_0x1bafc8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bafc8) {
            ctx->pc = 0x1BAFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFC8u;
            // 0x1bafcc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BAFE0u;
            goto label_1bafe0;
        }
    }
    ctx->pc = 0x1BAFD0u;
    // 0x1bafd0: 0xc06f356  jal         func_1BCD58
    ctx->pc = 0x1BAFD0u;
    SET_GPR_U32(ctx, 31, 0x1BAFD8u);
    ctx->pc = 0x1BCD58u;
    if (runtime->hasFunction(0x1BCD58u)) {
        auto targetFn = runtime->lookupFunction(0x1BCD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFD8u; }
        if (ctx->pc != 0x1BAFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCD58_0x1bcd58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFD8u; }
        if (ctx->pc != 0x1BAFD8u) { return; }
    }
    ctx->pc = 0x1BAFD8u;
label_1bafd8:
    // 0x1bafd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bafd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bafdc:
    // 0x1bafdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bafdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bafe0:
    // 0x1bafe0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bafe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFE4u;
            // 0x1bafe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAFECu;
    // 0x1bafec: 0x0  nop
    ctx->pc = 0x1bafecu;
    // NOP
    // 0x1baff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baff4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1baff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1baff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baffc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1baffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb000: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb004: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB004u;
    {
        const bool branch_taken_0x1bb004 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB004u;
            // 0x1bb008: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb004) {
            ctx->pc = 0x1BB024u;
            goto label_1bb024;
        }
    }
    ctx->pc = 0x1BB00Cu;
    // 0x1bb00c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb010: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB010u;
    {
        const bool branch_taken_0x1bb010 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb010) {
            ctx->pc = 0x1BB014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB010u;
            // 0x1bb014: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB028u;
            goto label_1bb028;
        }
    }
    ctx->pc = 0x1BB018u;
    // 0x1bb018: 0xc06f374  jal         func_1BCDD0
    ctx->pc = 0x1BB018u;
    SET_GPR_U32(ctx, 31, 0x1BB020u);
    ctx->pc = 0x1BCDD0u;
    if (runtime->hasFunction(0x1BCDD0u)) {
        auto targetFn = runtime->lookupFunction(0x1BCDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB020u; }
        if (ctx->pc != 0x1BB020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCDD0_0x1bcdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB020u; }
        if (ctx->pc != 0x1BB020u) { return; }
    }
    ctx->pc = 0x1BB020u;
label_1bb020:
    // 0x1bb020: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bb020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb024:
    // 0x1bb024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb028:
    // 0x1bb028: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bb028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb02c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB02Cu;
            // 0x1bb030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB034u;
    // 0x1bb034: 0x0  nop
    ctx->pc = 0x1bb034u;
    // NOP
    // 0x1bb038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb03c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb044: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb048: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb04c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB04Cu;
    {
        const bool branch_taken_0x1bb04c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB04Cu;
            // 0x1bb050: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb04c) {
            ctx->pc = 0x1BB068u;
            goto label_1bb068;
        }
    }
    ctx->pc = 0x1BB054u;
    // 0x1bb054: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb058: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB058u;
    {
        const bool branch_taken_0x1bb058 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB058u;
            // 0x1bb05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb058) {
            ctx->pc = 0x1BB078u;
            goto label_1bb078;
        }
    }
    ctx->pc = 0x1BB060u;
    // 0x1bb060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB060u;
    {
        const bool branch_taken_0x1bb060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB060u;
            // 0x1bb064: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb060) {
            ctx->pc = 0x1BB084u;
            goto label_1bb084;
        }
    }
    ctx->pc = 0x1BB068u;
label_1bb068:
    // 0x1bb068: 0xc06efdc  jal         func_1BBF70
    ctx->pc = 0x1BB068u;
    SET_GPR_U32(ctx, 31, 0x1BB070u);
    ctx->pc = 0x1BBF70u;
    if (runtime->hasFunction(0x1BBF70u)) {
        auto targetFn = runtime->lookupFunction(0x1BBF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB070u; }
        if (ctx->pc != 0x1BB070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBF70_0x1bbf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB070u; }
        if (ctx->pc != 0x1BB070u) { return; }
    }
    ctx->pc = 0x1BB070u;
label_1bb070:
    // 0x1bb070: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB070u;
    {
        const bool branch_taken_0x1bb070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB070u;
            // 0x1bb074: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb070) {
            ctx->pc = 0x1BB084u;
            goto label_1bb084;
        }
    }
    ctx->pc = 0x1BB078u;
label_1bb078:
    // 0x1bb078: 0xc06f38e  jal         func_1BCE38
    ctx->pc = 0x1BB078u;
    SET_GPR_U32(ctx, 31, 0x1BB080u);
    ctx->pc = 0x1BB07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB078u;
            // 0x1bb07c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCE38u;
    if (runtime->hasFunction(0x1BCE38u)) {
        auto targetFn = runtime->lookupFunction(0x1BCE38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB080u; }
        if (ctx->pc != 0x1BB080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCE38_0x1bce38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB080u; }
        if (ctx->pc != 0x1BB080u) { return; }
    }
    ctx->pc = 0x1BB080u;
label_1bb080:
    // 0x1bb080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb084:
    // 0x1bb084: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB084u;
            // 0x1bb088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB08Cu;
    // 0x1bb08c: 0x0  nop
    ctx->pc = 0x1bb08cu;
    // NOP
    // 0x1bb090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb094: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb09c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb0a0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb0a4: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB0A4u;
    {
        const bool branch_taken_0x1bb0a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0A4u;
            // 0x1bb0a8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0a4) {
            ctx->pc = 0x1BB0C0u;
            goto label_1bb0c0;
        }
    }
    ctx->pc = 0x1BB0ACu;
    // 0x1bb0ac: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb0b0: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB0B0u;
    {
        const bool branch_taken_0x1bb0b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0B0u;
            // 0x1bb0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0b0) {
            ctx->pc = 0x1BB0D0u;
            goto label_1bb0d0;
        }
    }
    ctx->pc = 0x1BB0B8u;
    // 0x1bb0b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB0B8u;
    {
        const bool branch_taken_0x1bb0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0B8u;
            // 0x1bb0bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0b8) {
            ctx->pc = 0x1BB0DCu;
            goto label_1bb0dc;
        }
    }
    ctx->pc = 0x1BB0C0u;
label_1bb0c0:
    // 0x1bb0c0: 0xc06effa  jal         func_1BBFE8
    ctx->pc = 0x1BB0C0u;
    SET_GPR_U32(ctx, 31, 0x1BB0C8u);
    ctx->pc = 0x1BBFE8u;
    if (runtime->hasFunction(0x1BBFE8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0C8u; }
        if (ctx->pc != 0x1BB0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBFE8_0x1bbfe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0C8u; }
        if (ctx->pc != 0x1BB0C8u) { return; }
    }
    ctx->pc = 0x1BB0C8u;
label_1bb0c8:
    // 0x1bb0c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB0C8u;
    {
        const bool branch_taken_0x1bb0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0C8u;
            // 0x1bb0cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0c8) {
            ctx->pc = 0x1BB0DCu;
            goto label_1bb0dc;
        }
    }
    ctx->pc = 0x1BB0D0u;
label_1bb0d0:
    // 0x1bb0d0: 0xc06f3ac  jal         func_1BCEB0
    ctx->pc = 0x1BB0D0u;
    SET_GPR_U32(ctx, 31, 0x1BB0D8u);
    ctx->pc = 0x1BB0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0D0u;
            // 0x1bb0d4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCEB0u;
    if (runtime->hasFunction(0x1BCEB0u)) {
        auto targetFn = runtime->lookupFunction(0x1BCEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0D8u; }
        if (ctx->pc != 0x1BB0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCEB0_0x1bceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0D8u; }
        if (ctx->pc != 0x1BB0D8u) { return; }
    }
    ctx->pc = 0x1BB0D8u;
label_1bb0d8:
    // 0x1bb0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb0dc:
    // 0x1bb0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0DCu;
            // 0x1bb0e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB0E4u;
    // 0x1bb0e4: 0x0  nop
    ctx->pc = 0x1bb0e4u;
    // NOP
}
