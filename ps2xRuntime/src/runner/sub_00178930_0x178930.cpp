#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178930
// Address: 0x178930 - 0x178a58
void sub_00178930_0x178930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178930_0x178930");
#endif

    switch (ctx->pc) {
        case 0x178930u: goto label_178930;
        case 0x178934u: goto label_178934;
        case 0x178938u: goto label_178938;
        case 0x17893cu: goto label_17893c;
        case 0x178940u: goto label_178940;
        case 0x178944u: goto label_178944;
        case 0x178948u: goto label_178948;
        case 0x17894cu: goto label_17894c;
        case 0x178950u: goto label_178950;
        case 0x178954u: goto label_178954;
        case 0x178958u: goto label_178958;
        case 0x17895cu: goto label_17895c;
        case 0x178960u: goto label_178960;
        case 0x178964u: goto label_178964;
        case 0x178968u: goto label_178968;
        case 0x17896cu: goto label_17896c;
        case 0x178970u: goto label_178970;
        case 0x178974u: goto label_178974;
        case 0x178978u: goto label_178978;
        case 0x17897cu: goto label_17897c;
        case 0x178980u: goto label_178980;
        case 0x178984u: goto label_178984;
        case 0x178988u: goto label_178988;
        case 0x17898cu: goto label_17898c;
        case 0x178990u: goto label_178990;
        case 0x178994u: goto label_178994;
        case 0x178998u: goto label_178998;
        case 0x17899cu: goto label_17899c;
        case 0x1789a0u: goto label_1789a0;
        case 0x1789a4u: goto label_1789a4;
        case 0x1789a8u: goto label_1789a8;
        case 0x1789acu: goto label_1789ac;
        case 0x1789b0u: goto label_1789b0;
        case 0x1789b4u: goto label_1789b4;
        case 0x1789b8u: goto label_1789b8;
        case 0x1789bcu: goto label_1789bc;
        case 0x1789c0u: goto label_1789c0;
        case 0x1789c4u: goto label_1789c4;
        case 0x1789c8u: goto label_1789c8;
        case 0x1789ccu: goto label_1789cc;
        case 0x1789d0u: goto label_1789d0;
        case 0x1789d4u: goto label_1789d4;
        case 0x1789d8u: goto label_1789d8;
        case 0x1789dcu: goto label_1789dc;
        case 0x1789e0u: goto label_1789e0;
        case 0x1789e4u: goto label_1789e4;
        case 0x1789e8u: goto label_1789e8;
        case 0x1789ecu: goto label_1789ec;
        case 0x1789f0u: goto label_1789f0;
        case 0x1789f4u: goto label_1789f4;
        case 0x1789f8u: goto label_1789f8;
        case 0x1789fcu: goto label_1789fc;
        case 0x178a00u: goto label_178a00;
        case 0x178a04u: goto label_178a04;
        case 0x178a08u: goto label_178a08;
        case 0x178a0cu: goto label_178a0c;
        case 0x178a10u: goto label_178a10;
        case 0x178a14u: goto label_178a14;
        case 0x178a18u: goto label_178a18;
        case 0x178a1cu: goto label_178a1c;
        case 0x178a20u: goto label_178a20;
        case 0x178a24u: goto label_178a24;
        case 0x178a28u: goto label_178a28;
        case 0x178a2cu: goto label_178a2c;
        case 0x178a30u: goto label_178a30;
        case 0x178a34u: goto label_178a34;
        case 0x178a38u: goto label_178a38;
        case 0x178a3cu: goto label_178a3c;
        case 0x178a40u: goto label_178a40;
        case 0x178a44u: goto label_178a44;
        case 0x178a48u: goto label_178a48;
        case 0x178a4cu: goto label_178a4c;
        case 0x178a50u: goto label_178a50;
        case 0x178a54u: goto label_178a54;
        default: break;
    }

    ctx->pc = 0x178930u;

label_178930:
    // 0x178930: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x178930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_178934:
    // 0x178934: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x178934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_178938:
    // 0x178938: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17893c:
    // 0x17893c: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x17893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_178940:
    // 0x178940: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x178940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178944:
    // 0x178944: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x178944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_178948:
    // 0x178948: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x178948u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17894c:
    // 0x17894c: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x17894cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_178950:
    // 0x178950: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x178950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_178954:
    // 0x178954: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_178958:
    if (ctx->pc == 0x178958u) {
        ctx->pc = 0x178958u;
            // 0x178958: 0xffbf0288  sd          $ra, 0x288($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->pc = 0x17895Cu;
        goto label_17895c;
    }
    ctx->pc = 0x178954u;
    {
        const bool branch_taken_0x178954 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x178958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178954u;
            // 0x178958: 0xffbf0288  sd          $ra, 0x288($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178954) {
            ctx->pc = 0x178968u;
            goto label_178968;
        }
    }
    ctx->pc = 0x17895Cu;
label_17895c:
    // 0x17895c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17895cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178960:
    // 0x178960: 0x10000032  b           . + 4 + (0x32 << 2)
label_178964:
    if (ctx->pc == 0x178964u) {
        ctx->pc = 0x178964u;
            // 0x178964: 0x24844c18  addiu       $a0, $a0, 0x4C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19480));
        ctx->pc = 0x178968u;
        goto label_178968;
    }
    ctx->pc = 0x178960u;
    {
        const bool branch_taken_0x178960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178960u;
            // 0x178964: 0x24844c18  addiu       $a0, $a0, 0x4C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178960) {
            ctx->pc = 0x178A2Cu;
            goto label_178a2c;
        }
    }
    ctx->pc = 0x178968u;
label_178968:
    // 0x178968: 0x27b20130  addiu       $s2, $sp, 0x130
    ctx->pc = 0x178968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_17896c:
    // 0x17896c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_178970:
    // 0x178970: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_178974:
    // 0x178974: 0xc05e2b4  jal         func_178AD0
label_178978:
    if (ctx->pc == 0x178978u) {
        ctx->pc = 0x178978u;
            // 0x178978: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17897Cu;
        goto label_17897c;
    }
    ctx->pc = 0x178974u;
    SET_GPR_U32(ctx, 31, 0x17897Cu);
    ctx->pc = 0x178978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178974u;
            // 0x178978: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17897Cu; }
        if (ctx->pc != 0x17897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17897Cu; }
        if (ctx->pc != 0x17897Cu) { return; }
    }
    ctx->pc = 0x17897Cu;
label_17897c:
    // 0x17897c: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x17897cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_178980:
    // 0x178980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_178984:
    if (ctx->pc == 0x178984u) {
        ctx->pc = 0x178984u;
            // 0x178984: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x178988u;
        goto label_178988;
    }
    ctx->pc = 0x178980u;
    {
        const bool branch_taken_0x178980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178980u;
            // 0x178984: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178980) {
            ctx->pc = 0x178990u;
            goto label_178990;
        }
    }
    ctx->pc = 0x178988u;
label_178988:
    // 0x178988: 0x10000028  b           . + 4 + (0x28 << 2)
label_17898c:
    if (ctx->pc == 0x17898Cu) {
        ctx->pc = 0x17898Cu;
            // 0x17898c: 0x24844c18  addiu       $a0, $a0, 0x4C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19480));
        ctx->pc = 0x178990u;
        goto label_178990;
    }
    ctx->pc = 0x178988u;
    {
        const bool branch_taken_0x178988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178988u;
            // 0x17898c: 0x24844c18  addiu       $a0, $a0, 0x4C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178988) {
            ctx->pc = 0x178A2Cu;
            goto label_178a2c;
        }
    }
    ctx->pc = 0x178990u;
label_178990:
    // 0x178990: 0xc05e296  jal         func_178A58
label_178994:
    if (ctx->pc == 0x178994u) {
        ctx->pc = 0x178998u;
        goto label_178998;
    }
    ctx->pc = 0x178990u;
    SET_GPR_U32(ctx, 31, 0x178998u);
    ctx->pc = 0x178A58u;
    if (runtime->hasFunction(0x178A58u)) {
        auto targetFn = runtime->lookupFunction(0x178A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178998u; }
        if (ctx->pc != 0x178998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178A58_0x178a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178998u; }
        if (ctx->pc != 0x178998u) { return; }
    }
    ctx->pc = 0x178998u;
label_178998:
    // 0x178998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x178998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17899c:
    // 0x17899c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1789a0:
    if (ctx->pc == 0x1789A0u) {
        ctx->pc = 0x1789A0u;
            // 0x1789a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1789A4u;
        goto label_1789a4;
    }
    ctx->pc = 0x17899Cu;
    {
        const bool branch_taken_0x17899c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1789A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17899Cu;
            // 0x1789a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17899c) {
            ctx->pc = 0x1789B0u;
            goto label_1789b0;
        }
    }
    ctx->pc = 0x1789A4u;
label_1789a4:
    // 0x1789a4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1789a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1789a8:
    // 0x1789a8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1789ac:
    if (ctx->pc == 0x1789ACu) {
        ctx->pc = 0x1789ACu;
            // 0x1789ac: 0x24844c38  addiu       $a0, $a0, 0x4C38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19512));
        ctx->pc = 0x1789B0u;
        goto label_1789b0;
    }
    ctx->pc = 0x1789A8u;
    {
        const bool branch_taken_0x1789a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789A8u;
            // 0x1789ac: 0x24844c38  addiu       $a0, $a0, 0x4C38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789a8) {
            ctx->pc = 0x178A2Cu;
            goto label_178a2c;
        }
    }
    ctx->pc = 0x1789B0u;
label_1789b0:
    // 0x1789b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1789b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1789b4:
    // 0x1789b4: 0xc05e222  jal         func_178888
label_1789b8:
    if (ctx->pc == 0x1789B8u) {
        ctx->pc = 0x1789B8u;
            // 0x1789b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1789BCu;
        goto label_1789bc;
    }
    ctx->pc = 0x1789B4u;
    SET_GPR_U32(ctx, 31, 0x1789BCu);
    ctx->pc = 0x1789B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1789B4u;
            // 0x1789b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178888u;
    if (runtime->hasFunction(0x178888u)) {
        auto targetFn = runtime->lookupFunction(0x178888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1789BCu; }
        if (ctx->pc != 0x1789BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178888_0x178888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1789BCu; }
        if (ctx->pc != 0x1789BCu) { return; }
    }
    ctx->pc = 0x1789BCu;
label_1789bc:
    // 0x1789bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1789c0:
    if (ctx->pc == 0x1789C0u) {
        ctx->pc = 0x1789C0u;
            // 0x1789c0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1789C4u;
        goto label_1789c4;
    }
    ctx->pc = 0x1789BCu;
    {
        const bool branch_taken_0x1789bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1789C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789BCu;
            // 0x1789c0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789bc) {
            ctx->pc = 0x1789D8u;
            goto label_1789d8;
        }
    }
    ctx->pc = 0x1789C4u;
label_1789c4:
    // 0x1789c4: 0xc05e2b0  jal         func_178AC0
label_1789c8:
    if (ctx->pc == 0x1789C8u) {
        ctx->pc = 0x1789C8u;
            // 0x1789c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1789CCu;
        goto label_1789cc;
    }
    ctx->pc = 0x1789C4u;
    SET_GPR_U32(ctx, 31, 0x1789CCu);
    ctx->pc = 0x1789C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1789C4u;
            // 0x1789c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AC0u;
    if (runtime->hasFunction(0x178AC0u)) {
        auto targetFn = runtime->lookupFunction(0x178AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1789CCu; }
        if (ctx->pc != 0x1789CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AC0_0x178ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1789CCu; }
        if (ctx->pc != 0x1789CCu) { return; }
    }
    ctx->pc = 0x1789CCu;
label_1789cc:
    // 0x1789cc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1789ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1789d0:
    // 0x1789d0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1789d4:
    if (ctx->pc == 0x1789D4u) {
        ctx->pc = 0x1789D4u;
            // 0x1789d4: 0x24844c80  addiu       $a0, $a0, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
        ctx->pc = 0x1789D8u;
        goto label_1789d8;
    }
    ctx->pc = 0x1789D0u;
    {
        const bool branch_taken_0x1789d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789D0u;
            // 0x1789d4: 0x24844c80  addiu       $a0, $a0, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789d0) {
            ctx->pc = 0x178A2Cu;
            goto label_178a2c;
        }
    }
    ctx->pc = 0x1789D8u;
label_1789d8:
    // 0x1789d8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1789d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1789dc:
    // 0x1789dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1789e0:
    if (ctx->pc == 0x1789E0u) {
        ctx->pc = 0x1789E0u;
            // 0x1789e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1789E4u;
        goto label_1789e4;
    }
    ctx->pc = 0x1789DCu;
    {
        const bool branch_taken_0x1789dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789DCu;
            // 0x1789e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789dc) {
            ctx->pc = 0x1789F8u;
            goto label_1789f8;
        }
    }
    ctx->pc = 0x1789E4u;
label_1789e4:
    // 0x1789e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1789e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1789e8:
    // 0x1789e8: 0x40f809  jalr        $v0
label_1789ec:
    if (ctx->pc == 0x1789ECu) {
        ctx->pc = 0x1789ECu;
            // 0x1789ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1789F0u;
        goto label_1789f0;
    }
    ctx->pc = 0x1789E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1789F0u);
        ctx->pc = 0x1789ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789E8u;
            // 0x1789ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1789F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1789F0u; }
            if (ctx->pc != 0x1789F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1789F0u;
label_1789f0:
    // 0x1789f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1789f4:
    if (ctx->pc == 0x1789F4u) {
        ctx->pc = 0x1789F4u;
            // 0x1789f4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1789F8u;
        goto label_1789f8;
    }
    ctx->pc = 0x1789F0u;
    {
        const bool branch_taken_0x1789f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1789F0u;
            // 0x1789f4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789f0) {
            ctx->pc = 0x178A10u;
            goto label_178a10;
        }
    }
    ctx->pc = 0x1789F8u;
label_1789f8:
    // 0x1789f8: 0xc05e2b0  jal         func_178AC0
label_1789fc:
    if (ctx->pc == 0x1789FCu) {
        ctx->pc = 0x1789FCu;
            // 0x1789fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178A00u;
        goto label_178a00;
    }
    ctx->pc = 0x1789F8u;
    SET_GPR_U32(ctx, 31, 0x178A00u);
    ctx->pc = 0x1789FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1789F8u;
            // 0x1789fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AC0u;
    if (runtime->hasFunction(0x178AC0u)) {
        auto targetFn = runtime->lookupFunction(0x178AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A00u; }
        if (ctx->pc != 0x178A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AC0_0x178ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A00u; }
        if (ctx->pc != 0x178A00u) { return; }
    }
    ctx->pc = 0x178A00u;
label_178a00:
    // 0x178a00: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178a04:
    // 0x178a04: 0x10000009  b           . + 4 + (0x9 << 2)
label_178a08:
    if (ctx->pc == 0x178A08u) {
        ctx->pc = 0x178A08u;
            // 0x178a08: 0x24844ca0  addiu       $a0, $a0, 0x4CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19616));
        ctx->pc = 0x178A0Cu;
        goto label_178a0c;
    }
    ctx->pc = 0x178A04u;
    {
        const bool branch_taken_0x178a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A04u;
            // 0x178a08: 0x24844ca0  addiu       $a0, $a0, 0x4CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a04) {
            ctx->pc = 0x178A2Cu;
            goto label_178a2c;
        }
    }
    ctx->pc = 0x178A0Cu;
label_178a0c:
    // 0x178a0c: 0x0  nop
    ctx->pc = 0x178a0cu;
    // NOP
label_178a10:
    // 0x178a10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_178a14:
    // 0x178a14: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_178a18:
    if (ctx->pc == 0x178A18u) {
        ctx->pc = 0x178A18u;
            // 0x178a18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178A1Cu;
        goto label_178a1c;
    }
    ctx->pc = 0x178A14u;
    {
        const bool branch_taken_0x178a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a14) {
            ctx->pc = 0x178A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178A14u;
            // 0x178a18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178A38u;
            goto label_178a38;
        }
    }
    ctx->pc = 0x178A1Cu;
label_178a1c:
    // 0x178a1c: 0xc05e2b0  jal         func_178AC0
label_178a20:
    if (ctx->pc == 0x178A20u) {
        ctx->pc = 0x178A20u;
            // 0x178a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178A24u;
        goto label_178a24;
    }
    ctx->pc = 0x178A1Cu;
    SET_GPR_U32(ctx, 31, 0x178A24u);
    ctx->pc = 0x178A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178A1Cu;
            // 0x178a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AC0u;
    if (runtime->hasFunction(0x178AC0u)) {
        auto targetFn = runtime->lookupFunction(0x178AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A24u; }
        if (ctx->pc != 0x178A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AC0_0x178ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A24u; }
        if (ctx->pc != 0x178A24u) { return; }
    }
    ctx->pc = 0x178A24u;
label_178a24:
    // 0x178a24: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178a28:
    // 0x178a28: 0x24844cb8  addiu       $a0, $a0, 0x4CB8
    ctx->pc = 0x178a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19640));
label_178a2c:
    // 0x178a2c: 0xc05e0a6  jal         func_178298
label_178a30:
    if (ctx->pc == 0x178A30u) {
        ctx->pc = 0x178A34u;
        goto label_178a34;
    }
    ctx->pc = 0x178A2Cu;
    SET_GPR_U32(ctx, 31, 0x178A34u);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A34u; }
        if (ctx->pc != 0x178A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178A34u; }
        if (ctx->pc != 0x178A34u) { return; }
    }
    ctx->pc = 0x178A34u;
label_178a34:
    // 0x178a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178a38:
    // 0x178a38: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x178a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_178a3c:
    // 0x178a3c: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x178a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_178a40:
    // 0x178a40: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x178a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_178a44:
    // 0x178a44: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x178a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_178a48:
    // 0x178a48: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x178a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_178a4c:
    // 0x178a4c: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x178a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_178a50:
    // 0x178a50: 0x3e00008  jr          $ra
label_178a54:
    if (ctx->pc == 0x178A54u) {
        ctx->pc = 0x178A54u;
            // 0x178a54: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x178A58u;
        goto label_fallthrough_0x178a50;
    }
    ctx->pc = 0x178A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A50u;
            // 0x178a54: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x178a50:
    ctx->pc = 0x178A58u;
}
