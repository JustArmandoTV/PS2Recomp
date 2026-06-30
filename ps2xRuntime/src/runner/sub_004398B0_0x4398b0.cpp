#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004398B0
// Address: 0x4398b0 - 0x439ab0
void sub_004398B0_0x4398b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004398B0_0x4398b0");
#endif

    switch (ctx->pc) {
        case 0x4398b0u: goto label_4398b0;
        case 0x4398b4u: goto label_4398b4;
        case 0x4398b8u: goto label_4398b8;
        case 0x4398bcu: goto label_4398bc;
        case 0x4398c0u: goto label_4398c0;
        case 0x4398c4u: goto label_4398c4;
        case 0x4398c8u: goto label_4398c8;
        case 0x4398ccu: goto label_4398cc;
        case 0x4398d0u: goto label_4398d0;
        case 0x4398d4u: goto label_4398d4;
        case 0x4398d8u: goto label_4398d8;
        case 0x4398dcu: goto label_4398dc;
        case 0x4398e0u: goto label_4398e0;
        case 0x4398e4u: goto label_4398e4;
        case 0x4398e8u: goto label_4398e8;
        case 0x4398ecu: goto label_4398ec;
        case 0x4398f0u: goto label_4398f0;
        case 0x4398f4u: goto label_4398f4;
        case 0x4398f8u: goto label_4398f8;
        case 0x4398fcu: goto label_4398fc;
        case 0x439900u: goto label_439900;
        case 0x439904u: goto label_439904;
        case 0x439908u: goto label_439908;
        case 0x43990cu: goto label_43990c;
        case 0x439910u: goto label_439910;
        case 0x439914u: goto label_439914;
        case 0x439918u: goto label_439918;
        case 0x43991cu: goto label_43991c;
        case 0x439920u: goto label_439920;
        case 0x439924u: goto label_439924;
        case 0x439928u: goto label_439928;
        case 0x43992cu: goto label_43992c;
        case 0x439930u: goto label_439930;
        case 0x439934u: goto label_439934;
        case 0x439938u: goto label_439938;
        case 0x43993cu: goto label_43993c;
        case 0x439940u: goto label_439940;
        case 0x439944u: goto label_439944;
        case 0x439948u: goto label_439948;
        case 0x43994cu: goto label_43994c;
        case 0x439950u: goto label_439950;
        case 0x439954u: goto label_439954;
        case 0x439958u: goto label_439958;
        case 0x43995cu: goto label_43995c;
        case 0x439960u: goto label_439960;
        case 0x439964u: goto label_439964;
        case 0x439968u: goto label_439968;
        case 0x43996cu: goto label_43996c;
        case 0x439970u: goto label_439970;
        case 0x439974u: goto label_439974;
        case 0x439978u: goto label_439978;
        case 0x43997cu: goto label_43997c;
        case 0x439980u: goto label_439980;
        case 0x439984u: goto label_439984;
        case 0x439988u: goto label_439988;
        case 0x43998cu: goto label_43998c;
        case 0x439990u: goto label_439990;
        case 0x439994u: goto label_439994;
        case 0x439998u: goto label_439998;
        case 0x43999cu: goto label_43999c;
        case 0x4399a0u: goto label_4399a0;
        case 0x4399a4u: goto label_4399a4;
        case 0x4399a8u: goto label_4399a8;
        case 0x4399acu: goto label_4399ac;
        case 0x4399b0u: goto label_4399b0;
        case 0x4399b4u: goto label_4399b4;
        case 0x4399b8u: goto label_4399b8;
        case 0x4399bcu: goto label_4399bc;
        case 0x4399c0u: goto label_4399c0;
        case 0x4399c4u: goto label_4399c4;
        case 0x4399c8u: goto label_4399c8;
        case 0x4399ccu: goto label_4399cc;
        case 0x4399d0u: goto label_4399d0;
        case 0x4399d4u: goto label_4399d4;
        case 0x4399d8u: goto label_4399d8;
        case 0x4399dcu: goto label_4399dc;
        case 0x4399e0u: goto label_4399e0;
        case 0x4399e4u: goto label_4399e4;
        case 0x4399e8u: goto label_4399e8;
        case 0x4399ecu: goto label_4399ec;
        case 0x4399f0u: goto label_4399f0;
        case 0x4399f4u: goto label_4399f4;
        case 0x4399f8u: goto label_4399f8;
        case 0x4399fcu: goto label_4399fc;
        case 0x439a00u: goto label_439a00;
        case 0x439a04u: goto label_439a04;
        case 0x439a08u: goto label_439a08;
        case 0x439a0cu: goto label_439a0c;
        case 0x439a10u: goto label_439a10;
        case 0x439a14u: goto label_439a14;
        case 0x439a18u: goto label_439a18;
        case 0x439a1cu: goto label_439a1c;
        case 0x439a20u: goto label_439a20;
        case 0x439a24u: goto label_439a24;
        case 0x439a28u: goto label_439a28;
        case 0x439a2cu: goto label_439a2c;
        case 0x439a30u: goto label_439a30;
        case 0x439a34u: goto label_439a34;
        case 0x439a38u: goto label_439a38;
        case 0x439a3cu: goto label_439a3c;
        case 0x439a40u: goto label_439a40;
        case 0x439a44u: goto label_439a44;
        case 0x439a48u: goto label_439a48;
        case 0x439a4cu: goto label_439a4c;
        case 0x439a50u: goto label_439a50;
        case 0x439a54u: goto label_439a54;
        case 0x439a58u: goto label_439a58;
        case 0x439a5cu: goto label_439a5c;
        case 0x439a60u: goto label_439a60;
        case 0x439a64u: goto label_439a64;
        case 0x439a68u: goto label_439a68;
        case 0x439a6cu: goto label_439a6c;
        case 0x439a70u: goto label_439a70;
        case 0x439a74u: goto label_439a74;
        case 0x439a78u: goto label_439a78;
        case 0x439a7cu: goto label_439a7c;
        case 0x439a80u: goto label_439a80;
        case 0x439a84u: goto label_439a84;
        case 0x439a88u: goto label_439a88;
        case 0x439a8cu: goto label_439a8c;
        case 0x439a90u: goto label_439a90;
        case 0x439a94u: goto label_439a94;
        case 0x439a98u: goto label_439a98;
        case 0x439a9cu: goto label_439a9c;
        case 0x439aa0u: goto label_439aa0;
        case 0x439aa4u: goto label_439aa4;
        case 0x439aa8u: goto label_439aa8;
        case 0x439aacu: goto label_439aac;
        default: break;
    }

    ctx->pc = 0x4398b0u;

label_4398b0:
    // 0x4398b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4398b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4398b4:
    // 0x4398b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4398b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4398b8:
    // 0x4398b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4398b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4398bc:
    // 0x4398bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4398bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4398c0:
    // 0x4398c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4398c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4398c4:
    // 0x4398c4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4398c8:
    if (ctx->pc == 0x4398C8u) {
        ctx->pc = 0x4398C8u;
            // 0x4398c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4398CCu;
        goto label_4398cc;
    }
    ctx->pc = 0x4398C4u;
    {
        const bool branch_taken_0x4398c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4398C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4398C4u;
            // 0x4398c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4398c4) {
            ctx->pc = 0x4399F8u;
            goto label_4399f8;
        }
    }
    ctx->pc = 0x4398CCu;
label_4398cc:
    // 0x4398cc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4398ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4398d0:
    // 0x4398d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4398d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4398d4:
    // 0x4398d4: 0x2463cf10  addiu       $v1, $v1, -0x30F0
    ctx->pc = 0x4398d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954768));
label_4398d8:
    // 0x4398d8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x4398d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_4398dc:
    // 0x4398dc: 0x2442cf48  addiu       $v0, $v0, -0x30B8
    ctx->pc = 0x4398dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954824));
label_4398e0:
    // 0x4398e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4398e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4398e4:
    // 0x4398e4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4398e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4398e8:
    // 0x4398e8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4398e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4398ec:
    // 0x4398ec: 0xc0407c0  jal         func_101F00
label_4398f0:
    if (ctx->pc == 0x4398F0u) {
        ctx->pc = 0x4398F0u;
            // 0x4398f0: 0x24a59a10  addiu       $a1, $a1, -0x65F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941200));
        ctx->pc = 0x4398F4u;
        goto label_4398f4;
    }
    ctx->pc = 0x4398ECu;
    SET_GPR_U32(ctx, 31, 0x4398F4u);
    ctx->pc = 0x4398F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4398ECu;
            // 0x4398f0: 0x24a59a10  addiu       $a1, $a1, -0x65F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4398F4u; }
        if (ctx->pc != 0x4398F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4398F4u; }
        if (ctx->pc != 0x4398F4u) { return; }
    }
    ctx->pc = 0x4398F4u;
label_4398f4:
    // 0x4398f4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4398f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4398f8:
    // 0x4398f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4398fc:
    if (ctx->pc == 0x4398FCu) {
        ctx->pc = 0x4398FCu;
            // 0x4398fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x439900u;
        goto label_439900;
    }
    ctx->pc = 0x4398F8u;
    {
        const bool branch_taken_0x4398f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4398f8) {
            ctx->pc = 0x4398FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4398F8u;
            // 0x4398fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43990Cu;
            goto label_43990c;
        }
    }
    ctx->pc = 0x439900u;
label_439900:
    // 0x439900: 0xc07507c  jal         func_1D41F0
label_439904:
    if (ctx->pc == 0x439904u) {
        ctx->pc = 0x439904u;
            // 0x439904: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x439908u;
        goto label_439908;
    }
    ctx->pc = 0x439900u;
    SET_GPR_U32(ctx, 31, 0x439908u);
    ctx->pc = 0x439904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439900u;
            // 0x439904: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439908u; }
        if (ctx->pc != 0x439908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439908u; }
        if (ctx->pc != 0x439908u) { return; }
    }
    ctx->pc = 0x439908u;
label_439908:
    // 0x439908: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x439908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_43990c:
    // 0x43990c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_439910:
    if (ctx->pc == 0x439910u) {
        ctx->pc = 0x439910u;
            // 0x439910: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x439914u;
        goto label_439914;
    }
    ctx->pc = 0x43990Cu;
    {
        const bool branch_taken_0x43990c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43990c) {
            ctx->pc = 0x439910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43990Cu;
            // 0x439910: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43993Cu;
            goto label_43993c;
        }
    }
    ctx->pc = 0x439914u;
label_439914:
    // 0x439914: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_439918:
    if (ctx->pc == 0x439918u) {
        ctx->pc = 0x43991Cu;
        goto label_43991c;
    }
    ctx->pc = 0x439914u;
    {
        const bool branch_taken_0x439914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x439914) {
            ctx->pc = 0x439938u;
            goto label_439938;
        }
    }
    ctx->pc = 0x43991Cu;
label_43991c:
    // 0x43991c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_439920:
    if (ctx->pc == 0x439920u) {
        ctx->pc = 0x439924u;
        goto label_439924;
    }
    ctx->pc = 0x43991Cu;
    {
        const bool branch_taken_0x43991c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43991c) {
            ctx->pc = 0x439938u;
            goto label_439938;
        }
    }
    ctx->pc = 0x439924u;
label_439924:
    // 0x439924: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x439924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_439928:
    // 0x439928: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_43992c:
    if (ctx->pc == 0x43992Cu) {
        ctx->pc = 0x439930u;
        goto label_439930;
    }
    ctx->pc = 0x439928u;
    {
        const bool branch_taken_0x439928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x439928) {
            ctx->pc = 0x439938u;
            goto label_439938;
        }
    }
    ctx->pc = 0x439930u;
label_439930:
    // 0x439930: 0xc0400a8  jal         func_1002A0
label_439934:
    if (ctx->pc == 0x439934u) {
        ctx->pc = 0x439938u;
        goto label_439938;
    }
    ctx->pc = 0x439930u;
    SET_GPR_U32(ctx, 31, 0x439938u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439938u; }
        if (ctx->pc != 0x439938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439938u; }
        if (ctx->pc != 0x439938u) { return; }
    }
    ctx->pc = 0x439938u;
label_439938:
    // 0x439938: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x439938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_43993c:
    // 0x43993c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_439940:
    if (ctx->pc == 0x439940u) {
        ctx->pc = 0x439940u;
            // 0x439940: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x439944u;
        goto label_439944;
    }
    ctx->pc = 0x43993Cu;
    {
        const bool branch_taken_0x43993c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43993c) {
            ctx->pc = 0x439940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43993Cu;
            // 0x439940: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43996Cu;
            goto label_43996c;
        }
    }
    ctx->pc = 0x439944u;
label_439944:
    // 0x439944: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_439948:
    if (ctx->pc == 0x439948u) {
        ctx->pc = 0x43994Cu;
        goto label_43994c;
    }
    ctx->pc = 0x439944u;
    {
        const bool branch_taken_0x439944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x439944) {
            ctx->pc = 0x439968u;
            goto label_439968;
        }
    }
    ctx->pc = 0x43994Cu;
label_43994c:
    // 0x43994c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_439950:
    if (ctx->pc == 0x439950u) {
        ctx->pc = 0x439954u;
        goto label_439954;
    }
    ctx->pc = 0x43994Cu;
    {
        const bool branch_taken_0x43994c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43994c) {
            ctx->pc = 0x439968u;
            goto label_439968;
        }
    }
    ctx->pc = 0x439954u;
label_439954:
    // 0x439954: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x439954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_439958:
    // 0x439958: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_43995c:
    if (ctx->pc == 0x43995Cu) {
        ctx->pc = 0x439960u;
        goto label_439960;
    }
    ctx->pc = 0x439958u;
    {
        const bool branch_taken_0x439958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x439958) {
            ctx->pc = 0x439968u;
            goto label_439968;
        }
    }
    ctx->pc = 0x439960u;
label_439960:
    // 0x439960: 0xc0400a8  jal         func_1002A0
label_439964:
    if (ctx->pc == 0x439964u) {
        ctx->pc = 0x439968u;
        goto label_439968;
    }
    ctx->pc = 0x439960u;
    SET_GPR_U32(ctx, 31, 0x439968u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439968u; }
        if (ctx->pc != 0x439968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439968u; }
        if (ctx->pc != 0x439968u) { return; }
    }
    ctx->pc = 0x439968u;
label_439968:
    // 0x439968: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x439968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_43996c:
    // 0x43996c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_439970:
    if (ctx->pc == 0x439970u) {
        ctx->pc = 0x439974u;
        goto label_439974;
    }
    ctx->pc = 0x43996Cu;
    {
        const bool branch_taken_0x43996c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43996c) {
            ctx->pc = 0x439988u;
            goto label_439988;
        }
    }
    ctx->pc = 0x439974u;
label_439974:
    // 0x439974: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x439974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_439978:
    // 0x439978: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x439978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43997c:
    // 0x43997c: 0x2463cf00  addiu       $v1, $v1, -0x3100
    ctx->pc = 0x43997cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954752));
label_439980:
    // 0x439980: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x439980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_439984:
    // 0x439984: 0xac406ec0  sw          $zero, 0x6EC0($v0)
    ctx->pc = 0x439984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28352), GPR_U32(ctx, 0));
label_439988:
    // 0x439988: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_43998c:
    if (ctx->pc == 0x43998Cu) {
        ctx->pc = 0x43998Cu;
            // 0x43998c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x439990u;
        goto label_439990;
    }
    ctx->pc = 0x439988u;
    {
        const bool branch_taken_0x439988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x439988) {
            ctx->pc = 0x43998Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x439988u;
            // 0x43998c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4399E4u;
            goto label_4399e4;
        }
    }
    ctx->pc = 0x439990u;
label_439990:
    // 0x439990: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x439990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_439994:
    // 0x439994: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x439994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_439998:
    // 0x439998: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x439998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_43999c:
    // 0x43999c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x43999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4399a0:
    // 0x4399a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4399a4:
    if (ctx->pc == 0x4399A4u) {
        ctx->pc = 0x4399A4u;
            // 0x4399a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4399A8u;
        goto label_4399a8;
    }
    ctx->pc = 0x4399A0u;
    {
        const bool branch_taken_0x4399a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4399a0) {
            ctx->pc = 0x4399A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4399A0u;
            // 0x4399a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4399BCu;
            goto label_4399bc;
        }
    }
    ctx->pc = 0x4399A8u;
label_4399a8:
    // 0x4399a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4399a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4399ac:
    // 0x4399ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4399acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4399b0:
    // 0x4399b0: 0x320f809  jalr        $t9
label_4399b4:
    if (ctx->pc == 0x4399B4u) {
        ctx->pc = 0x4399B4u;
            // 0x4399b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4399B8u;
        goto label_4399b8;
    }
    ctx->pc = 0x4399B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4399B8u);
        ctx->pc = 0x4399B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4399B0u;
            // 0x4399b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4399B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4399B8u; }
            if (ctx->pc != 0x4399B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4399B8u;
label_4399b8:
    // 0x4399b8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4399b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4399bc:
    // 0x4399bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4399c0:
    if (ctx->pc == 0x4399C0u) {
        ctx->pc = 0x4399C0u;
            // 0x4399c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4399C4u;
        goto label_4399c4;
    }
    ctx->pc = 0x4399BCu;
    {
        const bool branch_taken_0x4399bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4399bc) {
            ctx->pc = 0x4399C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4399BCu;
            // 0x4399c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4399D8u;
            goto label_4399d8;
        }
    }
    ctx->pc = 0x4399C4u;
label_4399c4:
    // 0x4399c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4399c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4399c8:
    // 0x4399c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4399c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4399cc:
    // 0x4399cc: 0x320f809  jalr        $t9
label_4399d0:
    if (ctx->pc == 0x4399D0u) {
        ctx->pc = 0x4399D0u;
            // 0x4399d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4399D4u;
        goto label_4399d4;
    }
    ctx->pc = 0x4399CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4399D4u);
        ctx->pc = 0x4399D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4399CCu;
            // 0x4399d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4399D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4399D4u; }
            if (ctx->pc != 0x4399D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4399D4u;
label_4399d4:
    // 0x4399d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4399d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4399d8:
    // 0x4399d8: 0xc075bf8  jal         func_1D6FE0
label_4399dc:
    if (ctx->pc == 0x4399DCu) {
        ctx->pc = 0x4399DCu;
            // 0x4399dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4399E0u;
        goto label_4399e0;
    }
    ctx->pc = 0x4399D8u;
    SET_GPR_U32(ctx, 31, 0x4399E0u);
    ctx->pc = 0x4399DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4399D8u;
            // 0x4399dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4399E0u; }
        if (ctx->pc != 0x4399E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4399E0u; }
        if (ctx->pc != 0x4399E0u) { return; }
    }
    ctx->pc = 0x4399E0u;
label_4399e0:
    // 0x4399e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4399e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4399e4:
    // 0x4399e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4399e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4399e8:
    // 0x4399e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4399ec:
    if (ctx->pc == 0x4399ECu) {
        ctx->pc = 0x4399ECu;
            // 0x4399ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4399F0u;
        goto label_4399f0;
    }
    ctx->pc = 0x4399E8u;
    {
        const bool branch_taken_0x4399e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4399e8) {
            ctx->pc = 0x4399ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4399E8u;
            // 0x4399ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4399FCu;
            goto label_4399fc;
        }
    }
    ctx->pc = 0x4399F0u;
label_4399f0:
    // 0x4399f0: 0xc0400a8  jal         func_1002A0
label_4399f4:
    if (ctx->pc == 0x4399F4u) {
        ctx->pc = 0x4399F4u;
            // 0x4399f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4399F8u;
        goto label_4399f8;
    }
    ctx->pc = 0x4399F0u;
    SET_GPR_U32(ctx, 31, 0x4399F8u);
    ctx->pc = 0x4399F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4399F0u;
            // 0x4399f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4399F8u; }
        if (ctx->pc != 0x4399F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4399F8u; }
        if (ctx->pc != 0x4399F8u) { return; }
    }
    ctx->pc = 0x4399F8u;
label_4399f8:
    // 0x4399f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4399f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4399fc:
    // 0x4399fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4399fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_439a00:
    // 0x439a00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x439a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_439a04:
    // 0x439a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x439a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_439a08:
    // 0x439a08: 0x3e00008  jr          $ra
label_439a0c:
    if (ctx->pc == 0x439A0Cu) {
        ctx->pc = 0x439A0Cu;
            // 0x439a0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x439A10u;
        goto label_439a10;
    }
    ctx->pc = 0x439A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439A08u;
            // 0x439a0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x439A10u;
label_439a10:
    // 0x439a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x439a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_439a14:
    // 0x439a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x439a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_439a18:
    // 0x439a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x439a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_439a1c:
    // 0x439a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x439a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_439a20:
    // 0x439a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x439a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_439a24:
    // 0x439a24: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_439a28:
    if (ctx->pc == 0x439A28u) {
        ctx->pc = 0x439A28u;
            // 0x439a28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439A2Cu;
        goto label_439a2c;
    }
    ctx->pc = 0x439A24u;
    {
        const bool branch_taken_0x439a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x439A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439A24u;
            // 0x439a28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439a24) {
            ctx->pc = 0x439A98u;
            goto label_439a98;
        }
    }
    ctx->pc = 0x439A2Cu;
label_439a2c:
    // 0x439a2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x439a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_439a30:
    // 0x439a30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x439a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_439a34:
    // 0x439a34: 0x2463ce50  addiu       $v1, $v1, -0x31B0
    ctx->pc = 0x439a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954576));
label_439a38:
    // 0x439a38: 0x2442ce90  addiu       $v0, $v0, -0x3170
    ctx->pc = 0x439a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954640));
label_439a3c:
    // 0x439a3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x439a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_439a40:
    // 0x439a40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x439a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_439a44:
    // 0x439a44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x439a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_439a48:
    // 0x439a48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x439a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_439a4c:
    // 0x439a4c: 0x320f809  jalr        $t9
label_439a50:
    if (ctx->pc == 0x439A50u) {
        ctx->pc = 0x439A54u;
        goto label_439a54;
    }
    ctx->pc = 0x439A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x439A54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x439A54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x439A54u; }
            if (ctx->pc != 0x439A54u) { return; }
        }
        }
    }
    ctx->pc = 0x439A54u;
label_439a54:
    // 0x439a54: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_439a58:
    if (ctx->pc == 0x439A58u) {
        ctx->pc = 0x439A58u;
            // 0x439a58: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x439A5Cu;
        goto label_439a5c;
    }
    ctx->pc = 0x439A54u;
    {
        const bool branch_taken_0x439a54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x439a54) {
            ctx->pc = 0x439A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x439A54u;
            // 0x439a58: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x439A84u;
            goto label_439a84;
        }
    }
    ctx->pc = 0x439A5Cu;
label_439a5c:
    // 0x439a5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x439a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_439a60:
    // 0x439a60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x439a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_439a64:
    // 0x439a64: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x439a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_439a68:
    // 0x439a68: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x439a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_439a6c:
    // 0x439a6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x439a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_439a70:
    // 0x439a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x439a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_439a74:
    // 0x439a74: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x439a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_439a78:
    // 0x439a78: 0xc0aee40  jal         func_2BB900
label_439a7c:
    if (ctx->pc == 0x439A7Cu) {
        ctx->pc = 0x439A7Cu;
            // 0x439a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439A80u;
        goto label_439a80;
    }
    ctx->pc = 0x439A78u;
    SET_GPR_U32(ctx, 31, 0x439A80u);
    ctx->pc = 0x439A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439A78u;
            // 0x439a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439A80u; }
        if (ctx->pc != 0x439A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439A80u; }
        if (ctx->pc != 0x439A80u) { return; }
    }
    ctx->pc = 0x439A80u;
label_439a80:
    // 0x439a80: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x439a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_439a84:
    // 0x439a84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x439a84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_439a88:
    // 0x439a88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_439a8c:
    if (ctx->pc == 0x439A8Cu) {
        ctx->pc = 0x439A8Cu;
            // 0x439a8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439A90u;
        goto label_439a90;
    }
    ctx->pc = 0x439A88u;
    {
        const bool branch_taken_0x439a88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x439a88) {
            ctx->pc = 0x439A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x439A88u;
            // 0x439a8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x439A9Cu;
            goto label_439a9c;
        }
    }
    ctx->pc = 0x439A90u;
label_439a90:
    // 0x439a90: 0xc0400a8  jal         func_1002A0
label_439a94:
    if (ctx->pc == 0x439A94u) {
        ctx->pc = 0x439A94u;
            // 0x439a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439A98u;
        goto label_439a98;
    }
    ctx->pc = 0x439A90u;
    SET_GPR_U32(ctx, 31, 0x439A98u);
    ctx->pc = 0x439A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439A90u;
            // 0x439a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439A98u; }
        if (ctx->pc != 0x439A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439A98u; }
        if (ctx->pc != 0x439A98u) { return; }
    }
    ctx->pc = 0x439A98u;
label_439a98:
    // 0x439a98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x439a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_439a9c:
    // 0x439a9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x439a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_439aa0:
    // 0x439aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x439aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_439aa4:
    // 0x439aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x439aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_439aa8:
    // 0x439aa8: 0x3e00008  jr          $ra
label_439aac:
    if (ctx->pc == 0x439AACu) {
        ctx->pc = 0x439AACu;
            // 0x439aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x439AB0u;
        goto label_fallthrough_0x439aa8;
    }
    ctx->pc = 0x439AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439AA8u;
            // 0x439aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x439aa8:
    ctx->pc = 0x439AB0u;
}
