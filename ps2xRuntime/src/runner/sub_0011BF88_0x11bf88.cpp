#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011BF88
// Address: 0x11bf88 - 0x11c158
void sub_0011BF88_0x11bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BF88_0x11bf88");
#endif

    switch (ctx->pc) {
        case 0x11bfdcu: goto label_11bfdc;
        case 0x11bff0u: goto label_11bff0;
        case 0x11c000u: goto label_11c000;
        case 0x11c014u: goto label_11c014;
        case 0x11c024u: goto label_11c024;
        case 0x11c030u: goto label_11c030;
        case 0x11c040u: goto label_11c040;
        case 0x11c04cu: goto label_11c04c;
        case 0x11c05cu: goto label_11c05c;
        case 0x11c068u: goto label_11c068;
        case 0x11c078u: goto label_11c078;
        case 0x11c08cu: goto label_11c08c;
        case 0x11c09cu: goto label_11c09c;
        case 0x11c0a8u: goto label_11c0a8;
        case 0x11c0b4u: goto label_11c0b4;
        case 0x11c0b8u: goto label_11c0b8;
        case 0x11c0f0u: goto label_11c0f0;
        case 0x11c100u: goto label_11c100;
        case 0x11c10cu: goto label_11c10c;
        case 0x11c118u: goto label_11c118;
        case 0x11c124u: goto label_11c124;
        case 0x11c138u: goto label_11c138;
        case 0x11c144u: goto label_11c144;
        case 0x11c150u: goto label_11c150;
        default: break;
    }

    ctx->pc = 0x11bf88u;

    // 0x11bf88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11bf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11bf8c: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11bf8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11bf90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bf94: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11bf94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11bf98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11bf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11bf9c: 0x4703f  dsra32      $t6, $a0, 0
    ctx->pc = 0x11bf9cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11bfa0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11bfa4: 0x3c0d3e3f  lui         $t5, 0x3E3F
    ctx->pc = 0x11bfa4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)15935 << 16));
    // 0x11bfa8: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x11bfa8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11bfac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11bfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11bfb0: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11bfb0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11bfb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11bfb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11bfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11bfbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11bfbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfc0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11bfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11bfc4: 0x1ae682a  slt         $t5, $t5, $t6
    ctx->pc = 0x11bfc4u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x11bfc8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11bfc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfcc: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BFCCu;
    {
        const bool branch_taken_0x11bfcc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFCCu;
            // 0x11bfd0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfcc) {
            ctx->pc = 0x11BFE4u;
            goto label_11bfe4;
        }
    }
    ctx->pc = 0x11BFD4u;
    // 0x11bfd4: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x11BFD4u;
    SET_GPR_U32(ctx, 31, 0x11BFDCu);
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFDCu; }
        if (ctx->pc != 0x11BFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFDCu; }
        if (ctx->pc != 0x11BFDCu) { return; }
    }
    ctx->pc = 0x11BFDCu;
label_11bfdc:
    // 0x11bfdc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x11BFDCu;
    {
        const bool branch_taken_0x11bfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFDCu;
            // 0x11bfe0: 0x240782d  daddu       $t7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfdc) {
            ctx->pc = 0x11C0B8u;
            goto label_11c0b8;
        }
    }
    ctx->pc = 0x11BFE4u;
label_11bfe4:
    // 0x11bfe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfe8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11BFE8u;
    SET_GPR_U32(ctx, 31, 0x11BFF0u);
    ctx->pc = 0x11BFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFE8u;
            // 0x11bfec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFF0u; }
        if (ctx->pc != 0x11BFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BFF0u; }
        if (ctx->pc != 0x11BFF0u) { return; }
    }
    ctx->pc = 0x11BFF0u;
label_11bff0:
    // 0x11bff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11bff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bff4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11bff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bff8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11BFF8u;
    SET_GPR_U32(ctx, 31, 0x11C000u);
    ctx->pc = 0x11BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFF8u;
            // 0x11bffc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C000u; }
        if (ctx->pc != 0x11C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C000u; }
        if (ctx->pc != 0x11C000u) { return; }
    }
    ctx->pc = 0x11C000u;
label_11c000:
    // 0x11c000: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c000u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c008: 0xdde5fd78  ld          $a1, -0x288($t7)
    ctx->pc = 0x11c008u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966648)));
    // 0x11c00c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11C00Cu;
    SET_GPR_U32(ctx, 31, 0x11C014u);
    ctx->pc = 0x11C010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C00Cu;
            // 0x11c010: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C014u; }
        if (ctx->pc != 0x11C014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C014u; }
        if (ctx->pc != 0x11C014u) { return; }
    }
    ctx->pc = 0x11C014u;
label_11c014:
    // 0x11c014: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c014u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c01c: 0xc04960a  jal         func_125828
    ctx->pc = 0x11C01Cu;
    SET_GPR_U32(ctx, 31, 0x11C024u);
    ctx->pc = 0x11C020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C01Cu;
            // 0x11c020: 0xdde5fd80  ld          $a1, -0x280($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C024u; }
        if (ctx->pc != 0x11C024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C024u; }
        if (ctx->pc != 0x11C024u) { return; }
    }
    ctx->pc = 0x11C024u;
label_11c024:
    // 0x11c024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c028: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11C028u;
    SET_GPR_U32(ctx, 31, 0x11C030u);
    ctx->pc = 0x11C02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C028u;
            // 0x11c02c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C030u; }
        if (ctx->pc != 0x11C030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C030u; }
        if (ctx->pc != 0x11C030u) { return; }
    }
    ctx->pc = 0x11C030u;
label_11c030:
    // 0x11c030: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c030u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c038: 0xc04960a  jal         func_125828
    ctx->pc = 0x11C038u;
    SET_GPR_U32(ctx, 31, 0x11C040u);
    ctx->pc = 0x11C03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C038u;
            // 0x11c03c: 0xdde5fd88  ld          $a1, -0x278($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966664)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C040u; }
        if (ctx->pc != 0x11C040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C040u; }
        if (ctx->pc != 0x11C040u) { return; }
    }
    ctx->pc = 0x11C040u;
label_11c040:
    // 0x11c040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c044: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11C044u;
    SET_GPR_U32(ctx, 31, 0x11C04Cu);
    ctx->pc = 0x11C048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C044u;
            // 0x11c048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C04Cu; }
        if (ctx->pc != 0x11C04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C04Cu; }
        if (ctx->pc != 0x11C04Cu) { return; }
    }
    ctx->pc = 0x11C04Cu;
label_11c04c:
    // 0x11c04c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c04cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c054: 0xc04960a  jal         func_125828
    ctx->pc = 0x11C054u;
    SET_GPR_U32(ctx, 31, 0x11C05Cu);
    ctx->pc = 0x11C058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C054u;
            // 0x11c058: 0xdde5fd90  ld          $a1, -0x270($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966672)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C05Cu; }
        if (ctx->pc != 0x11C05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C05Cu; }
        if (ctx->pc != 0x11C05Cu) { return; }
    }
    ctx->pc = 0x11C05Cu;
label_11c05c:
    // 0x11c05c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c060: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11C060u;
    SET_GPR_U32(ctx, 31, 0x11C068u);
    ctx->pc = 0x11C064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C060u;
            // 0x11c064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C068u; }
        if (ctx->pc != 0x11C068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C068u; }
        if (ctx->pc != 0x11C068u) { return; }
    }
    ctx->pc = 0x11C068u;
label_11c068:
    // 0x11c068: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c068u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c06c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c070: 0xc04960a  jal         func_125828
    ctx->pc = 0x11C070u;
    SET_GPR_U32(ctx, 31, 0x11C078u);
    ctx->pc = 0x11C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C070u;
            // 0x11c074: 0xdde5fd98  ld          $a1, -0x268($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966680)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C078u; }
        if (ctx->pc != 0x11C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C078u; }
        if (ctx->pc != 0x11C078u) { return; }
    }
    ctx->pc = 0x11C078u;
label_11c078:
    // 0x11c078: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11C078u;
    {
        const bool branch_taken_0x11c078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C078u;
            // 0x11c07c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c078) {
            ctx->pc = 0x11C0E0u;
            goto label_11c0e0;
        }
    }
    ctx->pc = 0x11C080u;
    // 0x11c080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c084: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11C084u;
    SET_GPR_U32(ctx, 31, 0x11C08Cu);
    ctx->pc = 0x11C088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C084u;
            // 0x11c088: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C08Cu; }
        if (ctx->pc != 0x11C08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C08Cu; }
        if (ctx->pc != 0x11C08Cu) { return; }
    }
    ctx->pc = 0x11C08Cu;
label_11c08c:
    // 0x11c08c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c08cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c094: 0xc04960a  jal         func_125828
    ctx->pc = 0x11C094u;
    SET_GPR_U32(ctx, 31, 0x11C09Cu);
    ctx->pc = 0x11C098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C094u;
            // 0x11c098: 0xdde5fda0  ld          $a1, -0x260($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C09Cu; }
        if (ctx->pc != 0x11C09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C09Cu; }
        if (ctx->pc != 0x11C09Cu) { return; }
    }
    ctx->pc = 0x11C09Cu;
label_11c09c:
    // 0x11c09c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11c09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0a0: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11C0A0u;
    SET_GPR_U32(ctx, 31, 0x11C0A8u);
    ctx->pc = 0x11C0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0A0u;
            // 0x11c0a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0A8u; }
        if (ctx->pc != 0x11C0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0A8u; }
        if (ctx->pc != 0x11C0A8u) { return; }
    }
    ctx->pc = 0x11C0A8u;
label_11c0a8:
    // 0x11c0a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0ac: 0xc04960a  jal         func_125828
    ctx->pc = 0x11C0ACu;
    SET_GPR_U32(ctx, 31, 0x11C0B4u);
    ctx->pc = 0x11C0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0ACu;
            // 0x11c0b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0B4u; }
        if (ctx->pc != 0x11C0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0B4u; }
        if (ctx->pc != 0x11C0B4u) { return; }
    }
    ctx->pc = 0x11C0B4u;
label_11c0b4:
    // 0x11c0b4: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x11c0b4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c0b8:
    // 0x11c0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c0bc: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x11c0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c0c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11c0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c0c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11c0c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c0cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11c0ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c0d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11c0d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11c0d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11c0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11C0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0D8u;
            // 0x11c0dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11C0E0u;
label_11c0e0:
    // 0x11c0e0: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x11c0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x11c0e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11c0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0e8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11C0E8u;
    SET_GPR_U32(ctx, 31, 0x11C0F0u);
    ctx->pc = 0x11C0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0E8u;
            // 0x11c0ec: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0F0u; }
        if (ctx->pc != 0x11C0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0F0u; }
        if (ctx->pc != 0x11C0F0u) { return; }
    }
    ctx->pc = 0x11C0F0u;
label_11c0f0:
    // 0x11c0f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11c0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0f8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11C0F8u;
    SET_GPR_U32(ctx, 31, 0x11C100u);
    ctx->pc = 0x11C0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C0F8u;
            // 0x11c0fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C100u; }
        if (ctx->pc != 0x11C100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C100u; }
        if (ctx->pc != 0x11C100u) { return; }
    }
    ctx->pc = 0x11C100u;
label_11c100:
    // 0x11c100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c104: 0xc049622  jal         func_125888
    ctx->pc = 0x11C104u;
    SET_GPR_U32(ctx, 31, 0x11C10Cu);
    ctx->pc = 0x11C108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C104u;
            // 0x11c108: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C10Cu; }
        if (ctx->pc != 0x11C10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C10Cu; }
        if (ctx->pc != 0x11C10Cu) { return; }
    }
    ctx->pc = 0x11C10Cu;
label_11c10c:
    // 0x11c10c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c110: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11C110u;
    SET_GPR_U32(ctx, 31, 0x11C118u);
    ctx->pc = 0x11C114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C110u;
            // 0x11c114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C118u; }
        if (ctx->pc != 0x11C118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C118u; }
        if (ctx->pc != 0x11C118u) { return; }
    }
    ctx->pc = 0x11C118u;
label_11c118:
    // 0x11c118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c11c: 0xc049622  jal         func_125888
    ctx->pc = 0x11C11Cu;
    SET_GPR_U32(ctx, 31, 0x11C124u);
    ctx->pc = 0x11C120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C11Cu;
            // 0x11c120: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C124u; }
        if (ctx->pc != 0x11C124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C124u; }
        if (ctx->pc != 0x11C124u) { return; }
    }
    ctx->pc = 0x11C124u;
label_11c124:
    // 0x11c124: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11c124u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11c128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c12c: 0xdde5fda0  ld          $a1, -0x260($t7)
    ctx->pc = 0x11c12cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966688)));
    // 0x11c130: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11C130u;
    SET_GPR_U32(ctx, 31, 0x11C138u);
    ctx->pc = 0x11C134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C130u;
            // 0x11c134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C138u; }
        if (ctx->pc != 0x11C138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C138u; }
        if (ctx->pc != 0x11C138u) { return; }
    }
    ctx->pc = 0x11C138u;
label_11c138:
    // 0x11c138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c13c: 0xc049622  jal         func_125888
    ctx->pc = 0x11C13Cu;
    SET_GPR_U32(ctx, 31, 0x11C144u);
    ctx->pc = 0x11C140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C13Cu;
            // 0x11c140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C144u; }
        if (ctx->pc != 0x11C144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C144u; }
        if (ctx->pc != 0x11C144u) { return; }
    }
    ctx->pc = 0x11C144u;
label_11c144:
    // 0x11c144: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c148: 0xc049622  jal         func_125888
    ctx->pc = 0x11C148u;
    SET_GPR_U32(ctx, 31, 0x11C150u);
    ctx->pc = 0x11C14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C148u;
            // 0x11c14c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C150u; }
        if (ctx->pc != 0x11C150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C150u; }
        if (ctx->pc != 0x11C150u) { return; }
    }
    ctx->pc = 0x11C150u;
label_11c150:
    // 0x11c150: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x11C150u;
    {
        const bool branch_taken_0x11c150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C150u;
            // 0x11c154: 0x40782d  daddu       $t7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c150) {
            ctx->pc = 0x11C0B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11c0b8;
        }
    }
    ctx->pc = 0x11C158u;
}
