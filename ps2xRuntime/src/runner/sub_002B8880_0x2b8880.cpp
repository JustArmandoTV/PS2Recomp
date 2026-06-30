#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8880
// Address: 0x2b8880 - 0x2b89e0
void sub_002B8880_0x2b8880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8880_0x2b8880");
#endif

    switch (ctx->pc) {
        case 0x2b8880u: goto label_2b8880;
        case 0x2b8884u: goto label_2b8884;
        case 0x2b8888u: goto label_2b8888;
        case 0x2b888cu: goto label_2b888c;
        case 0x2b8890u: goto label_2b8890;
        case 0x2b8894u: goto label_2b8894;
        case 0x2b8898u: goto label_2b8898;
        case 0x2b889cu: goto label_2b889c;
        case 0x2b88a0u: goto label_2b88a0;
        case 0x2b88a4u: goto label_2b88a4;
        case 0x2b88a8u: goto label_2b88a8;
        case 0x2b88acu: goto label_2b88ac;
        case 0x2b88b0u: goto label_2b88b0;
        case 0x2b88b4u: goto label_2b88b4;
        case 0x2b88b8u: goto label_2b88b8;
        case 0x2b88bcu: goto label_2b88bc;
        case 0x2b88c0u: goto label_2b88c0;
        case 0x2b88c4u: goto label_2b88c4;
        case 0x2b88c8u: goto label_2b88c8;
        case 0x2b88ccu: goto label_2b88cc;
        case 0x2b88d0u: goto label_2b88d0;
        case 0x2b88d4u: goto label_2b88d4;
        case 0x2b88d8u: goto label_2b88d8;
        case 0x2b88dcu: goto label_2b88dc;
        case 0x2b88e0u: goto label_2b88e0;
        case 0x2b88e4u: goto label_2b88e4;
        case 0x2b88e8u: goto label_2b88e8;
        case 0x2b88ecu: goto label_2b88ec;
        case 0x2b88f0u: goto label_2b88f0;
        case 0x2b88f4u: goto label_2b88f4;
        case 0x2b88f8u: goto label_2b88f8;
        case 0x2b88fcu: goto label_2b88fc;
        case 0x2b8900u: goto label_2b8900;
        case 0x2b8904u: goto label_2b8904;
        case 0x2b8908u: goto label_2b8908;
        case 0x2b890cu: goto label_2b890c;
        case 0x2b8910u: goto label_2b8910;
        case 0x2b8914u: goto label_2b8914;
        case 0x2b8918u: goto label_2b8918;
        case 0x2b891cu: goto label_2b891c;
        case 0x2b8920u: goto label_2b8920;
        case 0x2b8924u: goto label_2b8924;
        case 0x2b8928u: goto label_2b8928;
        case 0x2b892cu: goto label_2b892c;
        case 0x2b8930u: goto label_2b8930;
        case 0x2b8934u: goto label_2b8934;
        case 0x2b8938u: goto label_2b8938;
        case 0x2b893cu: goto label_2b893c;
        case 0x2b8940u: goto label_2b8940;
        case 0x2b8944u: goto label_2b8944;
        case 0x2b8948u: goto label_2b8948;
        case 0x2b894cu: goto label_2b894c;
        case 0x2b8950u: goto label_2b8950;
        case 0x2b8954u: goto label_2b8954;
        case 0x2b8958u: goto label_2b8958;
        case 0x2b895cu: goto label_2b895c;
        case 0x2b8960u: goto label_2b8960;
        case 0x2b8964u: goto label_2b8964;
        case 0x2b8968u: goto label_2b8968;
        case 0x2b896cu: goto label_2b896c;
        case 0x2b8970u: goto label_2b8970;
        case 0x2b8974u: goto label_2b8974;
        case 0x2b8978u: goto label_2b8978;
        case 0x2b897cu: goto label_2b897c;
        case 0x2b8980u: goto label_2b8980;
        case 0x2b8984u: goto label_2b8984;
        case 0x2b8988u: goto label_2b8988;
        case 0x2b898cu: goto label_2b898c;
        case 0x2b8990u: goto label_2b8990;
        case 0x2b8994u: goto label_2b8994;
        case 0x2b8998u: goto label_2b8998;
        case 0x2b899cu: goto label_2b899c;
        case 0x2b89a0u: goto label_2b89a0;
        case 0x2b89a4u: goto label_2b89a4;
        case 0x2b89a8u: goto label_2b89a8;
        case 0x2b89acu: goto label_2b89ac;
        case 0x2b89b0u: goto label_2b89b0;
        case 0x2b89b4u: goto label_2b89b4;
        case 0x2b89b8u: goto label_2b89b8;
        case 0x2b89bcu: goto label_2b89bc;
        case 0x2b89c0u: goto label_2b89c0;
        case 0x2b89c4u: goto label_2b89c4;
        case 0x2b89c8u: goto label_2b89c8;
        case 0x2b89ccu: goto label_2b89cc;
        case 0x2b89d0u: goto label_2b89d0;
        case 0x2b89d4u: goto label_2b89d4;
        case 0x2b89d8u: goto label_2b89d8;
        case 0x2b89dcu: goto label_2b89dc;
        default: break;
    }

    ctx->pc = 0x2b8880u;

label_2b8880:
    // 0x2b8880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b8884:
    // 0x2b8884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b8888:
    // 0x2b8888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b888c:
    // 0x2b888c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b888cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b8890:
    // 0x2b8890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8894:
    // 0x2b8894: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2b8898:
    if (ctx->pc == 0x2B8898u) {
        ctx->pc = 0x2B8898u;
            // 0x2b8898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B889Cu;
        goto label_2b889c;
    }
    ctx->pc = 0x2B8894u;
    {
        const bool branch_taken_0x2b8894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8894u;
            // 0x2b8898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8894) {
            ctx->pc = 0x2B89C8u;
            goto label_2b89c8;
        }
    }
    ctx->pc = 0x2B889Cu;
label_2b889c:
    // 0x2b889c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b889cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b88a0:
    // 0x2b88a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b88a4:
    // 0x2b88a4: 0x246328e0  addiu       $v1, $v1, 0x28E0
    ctx->pc = 0x2b88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10464));
label_2b88a8:
    // 0x2b88a8: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x2b88a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_2b88ac:
    // 0x2b88ac: 0x24422918  addiu       $v0, $v0, 0x2918
    ctx->pc = 0x2b88acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10520));
label_2b88b0:
    // 0x2b88b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b88b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2b88b4:
    // 0x2b88b4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2b88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2b88b8:
    // 0x2b88b8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2b88b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2b88bc:
    // 0x2b88bc: 0xc0407c0  jal         func_101F00
label_2b88c0:
    if (ctx->pc == 0x2B88C0u) {
        ctx->pc = 0x2B88C0u;
            // 0x2b88c0: 0x24a552f0  addiu       $a1, $a1, 0x52F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21232));
        ctx->pc = 0x2B88C4u;
        goto label_2b88c4;
    }
    ctx->pc = 0x2B88BCu;
    SET_GPR_U32(ctx, 31, 0x2B88C4u);
    ctx->pc = 0x2B88C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B88BCu;
            // 0x2b88c0: 0x24a552f0  addiu       $a1, $a1, 0x52F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B88C4u; }
        if (ctx->pc != 0x2B88C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B88C4u; }
        if (ctx->pc != 0x2B88C4u) { return; }
    }
    ctx->pc = 0x2B88C4u;
label_2b88c4:
    // 0x2b88c4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2b88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2b88c8:
    // 0x2b88c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b88cc:
    if (ctx->pc == 0x2B88CCu) {
        ctx->pc = 0x2B88CCu;
            // 0x2b88cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2B88D0u;
        goto label_2b88d0;
    }
    ctx->pc = 0x2B88C8u;
    {
        const bool branch_taken_0x2b88c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b88c8) {
            ctx->pc = 0x2B88CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B88C8u;
            // 0x2b88cc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B88DCu;
            goto label_2b88dc;
        }
    }
    ctx->pc = 0x2B88D0u;
label_2b88d0:
    // 0x2b88d0: 0xc07507c  jal         func_1D41F0
label_2b88d4:
    if (ctx->pc == 0x2B88D4u) {
        ctx->pc = 0x2B88D4u;
            // 0x2b88d4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2B88D8u;
        goto label_2b88d8;
    }
    ctx->pc = 0x2B88D0u;
    SET_GPR_U32(ctx, 31, 0x2B88D8u);
    ctx->pc = 0x2B88D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B88D0u;
            // 0x2b88d4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B88D8u; }
        if (ctx->pc != 0x2B88D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B88D8u; }
        if (ctx->pc != 0x2B88D8u) { return; }
    }
    ctx->pc = 0x2B88D8u;
label_2b88d8:
    // 0x2b88d8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2b88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2b88dc:
    // 0x2b88dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2b88e0:
    if (ctx->pc == 0x2B88E0u) {
        ctx->pc = 0x2B88E0u;
            // 0x2b88e0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2B88E4u;
        goto label_2b88e4;
    }
    ctx->pc = 0x2B88DCu;
    {
        const bool branch_taken_0x2b88dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b88dc) {
            ctx->pc = 0x2B88E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B88DCu;
            // 0x2b88e0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B890Cu;
            goto label_2b890c;
        }
    }
    ctx->pc = 0x2B88E4u;
label_2b88e4:
    // 0x2b88e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b88e8:
    if (ctx->pc == 0x2B88E8u) {
        ctx->pc = 0x2B88ECu;
        goto label_2b88ec;
    }
    ctx->pc = 0x2B88E4u;
    {
        const bool branch_taken_0x2b88e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b88e4) {
            ctx->pc = 0x2B8908u;
            goto label_2b8908;
        }
    }
    ctx->pc = 0x2B88ECu;
label_2b88ec:
    // 0x2b88ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b88f0:
    if (ctx->pc == 0x2B88F0u) {
        ctx->pc = 0x2B88F4u;
        goto label_2b88f4;
    }
    ctx->pc = 0x2B88ECu;
    {
        const bool branch_taken_0x2b88ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b88ec) {
            ctx->pc = 0x2B8908u;
            goto label_2b8908;
        }
    }
    ctx->pc = 0x2B88F4u;
label_2b88f4:
    // 0x2b88f4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2b88f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2b88f8:
    // 0x2b88f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b88fc:
    if (ctx->pc == 0x2B88FCu) {
        ctx->pc = 0x2B8900u;
        goto label_2b8900;
    }
    ctx->pc = 0x2B88F8u;
    {
        const bool branch_taken_0x2b88f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b88f8) {
            ctx->pc = 0x2B8908u;
            goto label_2b8908;
        }
    }
    ctx->pc = 0x2B8900u;
label_2b8900:
    // 0x2b8900: 0xc0400a8  jal         func_1002A0
label_2b8904:
    if (ctx->pc == 0x2B8904u) {
        ctx->pc = 0x2B8908u;
        goto label_2b8908;
    }
    ctx->pc = 0x2B8900u;
    SET_GPR_U32(ctx, 31, 0x2B8908u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8908u; }
        if (ctx->pc != 0x2B8908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8908u; }
        if (ctx->pc != 0x2B8908u) { return; }
    }
    ctx->pc = 0x2B8908u;
label_2b8908:
    // 0x2b8908: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2b8908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2b890c:
    // 0x2b890c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2b8910:
    if (ctx->pc == 0x2B8910u) {
        ctx->pc = 0x2B8910u;
            // 0x2b8910: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2B8914u;
        goto label_2b8914;
    }
    ctx->pc = 0x2B890Cu;
    {
        const bool branch_taken_0x2b890c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b890c) {
            ctx->pc = 0x2B8910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B890Cu;
            // 0x2b8910: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B893Cu;
            goto label_2b893c;
        }
    }
    ctx->pc = 0x2B8914u;
label_2b8914:
    // 0x2b8914: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b8918:
    if (ctx->pc == 0x2B8918u) {
        ctx->pc = 0x2B891Cu;
        goto label_2b891c;
    }
    ctx->pc = 0x2B8914u;
    {
        const bool branch_taken_0x2b8914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8914) {
            ctx->pc = 0x2B8938u;
            goto label_2b8938;
        }
    }
    ctx->pc = 0x2B891Cu;
label_2b891c:
    // 0x2b891c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b8920:
    if (ctx->pc == 0x2B8920u) {
        ctx->pc = 0x2B8924u;
        goto label_2b8924;
    }
    ctx->pc = 0x2B891Cu;
    {
        const bool branch_taken_0x2b891c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b891c) {
            ctx->pc = 0x2B8938u;
            goto label_2b8938;
        }
    }
    ctx->pc = 0x2B8924u;
label_2b8924:
    // 0x2b8924: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2b8924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2b8928:
    // 0x2b8928: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b892c:
    if (ctx->pc == 0x2B892Cu) {
        ctx->pc = 0x2B8930u;
        goto label_2b8930;
    }
    ctx->pc = 0x2B8928u;
    {
        const bool branch_taken_0x2b8928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8928) {
            ctx->pc = 0x2B8938u;
            goto label_2b8938;
        }
    }
    ctx->pc = 0x2B8930u;
label_2b8930:
    // 0x2b8930: 0xc0400a8  jal         func_1002A0
label_2b8934:
    if (ctx->pc == 0x2B8934u) {
        ctx->pc = 0x2B8938u;
        goto label_2b8938;
    }
    ctx->pc = 0x2B8930u;
    SET_GPR_U32(ctx, 31, 0x2B8938u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8938u; }
        if (ctx->pc != 0x2B8938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8938u; }
        if (ctx->pc != 0x2B8938u) { return; }
    }
    ctx->pc = 0x2B8938u;
label_2b8938:
    // 0x2b8938: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2b8938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2b893c:
    // 0x2b893c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b8940:
    if (ctx->pc == 0x2B8940u) {
        ctx->pc = 0x2B8944u;
        goto label_2b8944;
    }
    ctx->pc = 0x2B893Cu;
    {
        const bool branch_taken_0x2b893c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b893c) {
            ctx->pc = 0x2B8958u;
            goto label_2b8958;
        }
    }
    ctx->pc = 0x2B8944u;
label_2b8944:
    // 0x2b8944: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b8948:
    // 0x2b8948: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b8948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2b894c:
    // 0x2b894c: 0x24632888  addiu       $v1, $v1, 0x2888
    ctx->pc = 0x2b894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10376));
label_2b8950:
    // 0x2b8950: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2b8950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2b8954:
    // 0x2b8954: 0xac400cc0  sw          $zero, 0xCC0($v0)
    ctx->pc = 0x2b8954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3264), GPR_U32(ctx, 0));
label_2b8958:
    // 0x2b8958: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2b895c:
    if (ctx->pc == 0x2B895Cu) {
        ctx->pc = 0x2B895Cu;
            // 0x2b895c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2B8960u;
        goto label_2b8960;
    }
    ctx->pc = 0x2B8958u;
    {
        const bool branch_taken_0x2b8958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8958) {
            ctx->pc = 0x2B895Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8958u;
            // 0x2b895c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B89B4u;
            goto label_2b89b4;
        }
    }
    ctx->pc = 0x2B8960u;
label_2b8960:
    // 0x2b8960: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b8964:
    // 0x2b8964: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2b8964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2b8968:
    // 0x2b8968: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b8968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b896c:
    // 0x2b896c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2b896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2b8970:
    // 0x2b8970: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b8974:
    if (ctx->pc == 0x2B8974u) {
        ctx->pc = 0x2B8974u;
            // 0x2b8974: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2B8978u;
        goto label_2b8978;
    }
    ctx->pc = 0x2B8970u;
    {
        const bool branch_taken_0x2b8970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8970) {
            ctx->pc = 0x2B8974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8970u;
            // 0x2b8974: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B898Cu;
            goto label_2b898c;
        }
    }
    ctx->pc = 0x2B8978u;
label_2b8978:
    // 0x2b8978: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b8978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b897c:
    // 0x2b897c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b897cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b8980:
    // 0x2b8980: 0x320f809  jalr        $t9
label_2b8984:
    if (ctx->pc == 0x2B8984u) {
        ctx->pc = 0x2B8984u;
            // 0x2b8984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B8988u;
        goto label_2b8988;
    }
    ctx->pc = 0x2B8980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B8988u);
        ctx->pc = 0x2B8984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8980u;
            // 0x2b8984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B8988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B8988u; }
            if (ctx->pc != 0x2B8988u) { return; }
        }
        }
    }
    ctx->pc = 0x2B8988u;
label_2b8988:
    // 0x2b8988: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2b8988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2b898c:
    // 0x2b898c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b8990:
    if (ctx->pc == 0x2B8990u) {
        ctx->pc = 0x2B8990u;
            // 0x2b8990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B8994u;
        goto label_2b8994;
    }
    ctx->pc = 0x2B898Cu;
    {
        const bool branch_taken_0x2b898c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b898c) {
            ctx->pc = 0x2B8990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B898Cu;
            // 0x2b8990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B89A8u;
            goto label_2b89a8;
        }
    }
    ctx->pc = 0x2B8994u;
label_2b8994:
    // 0x2b8994: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b8994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b8998:
    // 0x2b8998: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b8998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b899c:
    // 0x2b899c: 0x320f809  jalr        $t9
label_2b89a0:
    if (ctx->pc == 0x2B89A0u) {
        ctx->pc = 0x2B89A0u;
            // 0x2b89a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B89A4u;
        goto label_2b89a4;
    }
    ctx->pc = 0x2B899Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B89A4u);
        ctx->pc = 0x2B89A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B899Cu;
            // 0x2b89a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B89A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B89A4u; }
            if (ctx->pc != 0x2B89A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B89A4u;
label_2b89a4:
    // 0x2b89a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b89a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b89a8:
    // 0x2b89a8: 0xc075bf8  jal         func_1D6FE0
label_2b89ac:
    if (ctx->pc == 0x2B89ACu) {
        ctx->pc = 0x2B89ACu;
            // 0x2b89ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B89B0u;
        goto label_2b89b0;
    }
    ctx->pc = 0x2B89A8u;
    SET_GPR_U32(ctx, 31, 0x2B89B0u);
    ctx->pc = 0x2B89ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B89A8u;
            // 0x2b89ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B89B0u; }
        if (ctx->pc != 0x2B89B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B89B0u; }
        if (ctx->pc != 0x2B89B0u) { return; }
    }
    ctx->pc = 0x2B89B0u;
label_2b89b0:
    // 0x2b89b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b89b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b89b4:
    // 0x2b89b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b89b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b89b8:
    // 0x2b89b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b89bc:
    if (ctx->pc == 0x2B89BCu) {
        ctx->pc = 0x2B89BCu;
            // 0x2b89bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B89C0u;
        goto label_2b89c0;
    }
    ctx->pc = 0x2B89B8u;
    {
        const bool branch_taken_0x2b89b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b89b8) {
            ctx->pc = 0x2B89BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B89B8u;
            // 0x2b89bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B89CCu;
            goto label_2b89cc;
        }
    }
    ctx->pc = 0x2B89C0u;
label_2b89c0:
    // 0x2b89c0: 0xc0400a8  jal         func_1002A0
label_2b89c4:
    if (ctx->pc == 0x2B89C4u) {
        ctx->pc = 0x2B89C4u;
            // 0x2b89c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B89C8u;
        goto label_2b89c8;
    }
    ctx->pc = 0x2B89C0u;
    SET_GPR_U32(ctx, 31, 0x2B89C8u);
    ctx->pc = 0x2B89C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B89C0u;
            // 0x2b89c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B89C8u; }
        if (ctx->pc != 0x2B89C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B89C8u; }
        if (ctx->pc != 0x2B89C8u) { return; }
    }
    ctx->pc = 0x2B89C8u;
label_2b89c8:
    // 0x2b89c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b89c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b89cc:
    // 0x2b89cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b89ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b89d0:
    // 0x2b89d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b89d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b89d4:
    // 0x2b89d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b89d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b89d8:
    // 0x2b89d8: 0x3e00008  jr          $ra
label_2b89dc:
    if (ctx->pc == 0x2B89DCu) {
        ctx->pc = 0x2B89DCu;
            // 0x2b89dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B89E0u;
        goto label_fallthrough_0x2b89d8;
    }
    ctx->pc = 0x2B89D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B89DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B89D8u;
            // 0x2b89dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b89d8:
    ctx->pc = 0x2B89E0u;
}
