#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C28E8
// Address: 0x1c28e8 - 0x1c2bb8
void sub_001C28E8_0x1c28e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C28E8_0x1c28e8");
#endif

    switch (ctx->pc) {
        case 0x1c28e8u: goto label_1c28e8;
        case 0x1c28ecu: goto label_1c28ec;
        case 0x1c28f0u: goto label_1c28f0;
        case 0x1c28f4u: goto label_1c28f4;
        case 0x1c28f8u: goto label_1c28f8;
        case 0x1c28fcu: goto label_1c28fc;
        case 0x1c2900u: goto label_1c2900;
        case 0x1c2904u: goto label_1c2904;
        case 0x1c2908u: goto label_1c2908;
        case 0x1c290cu: goto label_1c290c;
        case 0x1c2910u: goto label_1c2910;
        case 0x1c2914u: goto label_1c2914;
        case 0x1c2918u: goto label_1c2918;
        case 0x1c291cu: goto label_1c291c;
        case 0x1c2920u: goto label_1c2920;
        case 0x1c2924u: goto label_1c2924;
        case 0x1c2928u: goto label_1c2928;
        case 0x1c292cu: goto label_1c292c;
        case 0x1c2930u: goto label_1c2930;
        case 0x1c2934u: goto label_1c2934;
        case 0x1c2938u: goto label_1c2938;
        case 0x1c293cu: goto label_1c293c;
        case 0x1c2940u: goto label_1c2940;
        case 0x1c2944u: goto label_1c2944;
        case 0x1c2948u: goto label_1c2948;
        case 0x1c294cu: goto label_1c294c;
        case 0x1c2950u: goto label_1c2950;
        case 0x1c2954u: goto label_1c2954;
        case 0x1c2958u: goto label_1c2958;
        case 0x1c295cu: goto label_1c295c;
        case 0x1c2960u: goto label_1c2960;
        case 0x1c2964u: goto label_1c2964;
        case 0x1c2968u: goto label_1c2968;
        case 0x1c296cu: goto label_1c296c;
        case 0x1c2970u: goto label_1c2970;
        case 0x1c2974u: goto label_1c2974;
        case 0x1c2978u: goto label_1c2978;
        case 0x1c297cu: goto label_1c297c;
        case 0x1c2980u: goto label_1c2980;
        case 0x1c2984u: goto label_1c2984;
        case 0x1c2988u: goto label_1c2988;
        case 0x1c298cu: goto label_1c298c;
        case 0x1c2990u: goto label_1c2990;
        case 0x1c2994u: goto label_1c2994;
        case 0x1c2998u: goto label_1c2998;
        case 0x1c299cu: goto label_1c299c;
        case 0x1c29a0u: goto label_1c29a0;
        case 0x1c29a4u: goto label_1c29a4;
        case 0x1c29a8u: goto label_1c29a8;
        case 0x1c29acu: goto label_1c29ac;
        case 0x1c29b0u: goto label_1c29b0;
        case 0x1c29b4u: goto label_1c29b4;
        case 0x1c29b8u: goto label_1c29b8;
        case 0x1c29bcu: goto label_1c29bc;
        case 0x1c29c0u: goto label_1c29c0;
        case 0x1c29c4u: goto label_1c29c4;
        case 0x1c29c8u: goto label_1c29c8;
        case 0x1c29ccu: goto label_1c29cc;
        case 0x1c29d0u: goto label_1c29d0;
        case 0x1c29d4u: goto label_1c29d4;
        case 0x1c29d8u: goto label_1c29d8;
        case 0x1c29dcu: goto label_1c29dc;
        case 0x1c29e0u: goto label_1c29e0;
        case 0x1c29e4u: goto label_1c29e4;
        case 0x1c29e8u: goto label_1c29e8;
        case 0x1c29ecu: goto label_1c29ec;
        case 0x1c29f0u: goto label_1c29f0;
        case 0x1c29f4u: goto label_1c29f4;
        case 0x1c29f8u: goto label_1c29f8;
        case 0x1c29fcu: goto label_1c29fc;
        case 0x1c2a00u: goto label_1c2a00;
        case 0x1c2a04u: goto label_1c2a04;
        case 0x1c2a08u: goto label_1c2a08;
        case 0x1c2a0cu: goto label_1c2a0c;
        case 0x1c2a10u: goto label_1c2a10;
        case 0x1c2a14u: goto label_1c2a14;
        case 0x1c2a18u: goto label_1c2a18;
        case 0x1c2a1cu: goto label_1c2a1c;
        case 0x1c2a20u: goto label_1c2a20;
        case 0x1c2a24u: goto label_1c2a24;
        case 0x1c2a28u: goto label_1c2a28;
        case 0x1c2a2cu: goto label_1c2a2c;
        case 0x1c2a30u: goto label_1c2a30;
        case 0x1c2a34u: goto label_1c2a34;
        case 0x1c2a38u: goto label_1c2a38;
        case 0x1c2a3cu: goto label_1c2a3c;
        case 0x1c2a40u: goto label_1c2a40;
        case 0x1c2a44u: goto label_1c2a44;
        case 0x1c2a48u: goto label_1c2a48;
        case 0x1c2a4cu: goto label_1c2a4c;
        case 0x1c2a50u: goto label_1c2a50;
        case 0x1c2a54u: goto label_1c2a54;
        case 0x1c2a58u: goto label_1c2a58;
        case 0x1c2a5cu: goto label_1c2a5c;
        case 0x1c2a60u: goto label_1c2a60;
        case 0x1c2a64u: goto label_1c2a64;
        case 0x1c2a68u: goto label_1c2a68;
        case 0x1c2a6cu: goto label_1c2a6c;
        case 0x1c2a70u: goto label_1c2a70;
        case 0x1c2a74u: goto label_1c2a74;
        case 0x1c2a78u: goto label_1c2a78;
        case 0x1c2a7cu: goto label_1c2a7c;
        case 0x1c2a80u: goto label_1c2a80;
        case 0x1c2a84u: goto label_1c2a84;
        case 0x1c2a88u: goto label_1c2a88;
        case 0x1c2a8cu: goto label_1c2a8c;
        case 0x1c2a90u: goto label_1c2a90;
        case 0x1c2a94u: goto label_1c2a94;
        case 0x1c2a98u: goto label_1c2a98;
        case 0x1c2a9cu: goto label_1c2a9c;
        case 0x1c2aa0u: goto label_1c2aa0;
        case 0x1c2aa4u: goto label_1c2aa4;
        case 0x1c2aa8u: goto label_1c2aa8;
        case 0x1c2aacu: goto label_1c2aac;
        case 0x1c2ab0u: goto label_1c2ab0;
        case 0x1c2ab4u: goto label_1c2ab4;
        case 0x1c2ab8u: goto label_1c2ab8;
        case 0x1c2abcu: goto label_1c2abc;
        case 0x1c2ac0u: goto label_1c2ac0;
        case 0x1c2ac4u: goto label_1c2ac4;
        case 0x1c2ac8u: goto label_1c2ac8;
        case 0x1c2accu: goto label_1c2acc;
        case 0x1c2ad0u: goto label_1c2ad0;
        case 0x1c2ad4u: goto label_1c2ad4;
        case 0x1c2ad8u: goto label_1c2ad8;
        case 0x1c2adcu: goto label_1c2adc;
        case 0x1c2ae0u: goto label_1c2ae0;
        case 0x1c2ae4u: goto label_1c2ae4;
        case 0x1c2ae8u: goto label_1c2ae8;
        case 0x1c2aecu: goto label_1c2aec;
        case 0x1c2af0u: goto label_1c2af0;
        case 0x1c2af4u: goto label_1c2af4;
        case 0x1c2af8u: goto label_1c2af8;
        case 0x1c2afcu: goto label_1c2afc;
        case 0x1c2b00u: goto label_1c2b00;
        case 0x1c2b04u: goto label_1c2b04;
        case 0x1c2b08u: goto label_1c2b08;
        case 0x1c2b0cu: goto label_1c2b0c;
        case 0x1c2b10u: goto label_1c2b10;
        case 0x1c2b14u: goto label_1c2b14;
        case 0x1c2b18u: goto label_1c2b18;
        case 0x1c2b1cu: goto label_1c2b1c;
        case 0x1c2b20u: goto label_1c2b20;
        case 0x1c2b24u: goto label_1c2b24;
        case 0x1c2b28u: goto label_1c2b28;
        case 0x1c2b2cu: goto label_1c2b2c;
        case 0x1c2b30u: goto label_1c2b30;
        case 0x1c2b34u: goto label_1c2b34;
        case 0x1c2b38u: goto label_1c2b38;
        case 0x1c2b3cu: goto label_1c2b3c;
        case 0x1c2b40u: goto label_1c2b40;
        case 0x1c2b44u: goto label_1c2b44;
        case 0x1c2b48u: goto label_1c2b48;
        case 0x1c2b4cu: goto label_1c2b4c;
        case 0x1c2b50u: goto label_1c2b50;
        case 0x1c2b54u: goto label_1c2b54;
        case 0x1c2b58u: goto label_1c2b58;
        case 0x1c2b5cu: goto label_1c2b5c;
        case 0x1c2b60u: goto label_1c2b60;
        case 0x1c2b64u: goto label_1c2b64;
        case 0x1c2b68u: goto label_1c2b68;
        case 0x1c2b6cu: goto label_1c2b6c;
        case 0x1c2b70u: goto label_1c2b70;
        case 0x1c2b74u: goto label_1c2b74;
        case 0x1c2b78u: goto label_1c2b78;
        case 0x1c2b7cu: goto label_1c2b7c;
        case 0x1c2b80u: goto label_1c2b80;
        case 0x1c2b84u: goto label_1c2b84;
        case 0x1c2b88u: goto label_1c2b88;
        case 0x1c2b8cu: goto label_1c2b8c;
        case 0x1c2b90u: goto label_1c2b90;
        case 0x1c2b94u: goto label_1c2b94;
        case 0x1c2b98u: goto label_1c2b98;
        case 0x1c2b9cu: goto label_1c2b9c;
        case 0x1c2ba0u: goto label_1c2ba0;
        case 0x1c2ba4u: goto label_1c2ba4;
        case 0x1c2ba8u: goto label_1c2ba8;
        case 0x1c2bacu: goto label_1c2bac;
        case 0x1c2bb0u: goto label_1c2bb0;
        case 0x1c2bb4u: goto label_1c2bb4;
        default: break;
    }

    ctx->pc = 0x1c28e8u;

label_1c28e8:
    // 0x1c28e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c28e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c28ec:
    // 0x1c28ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c28ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c28f0:
    // 0x1c28f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c28f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c28f4:
    // 0x1c28f4: 0xc070a36  jal         func_1C28D8
label_1c28f8:
    if (ctx->pc == 0x1C28F8u) {
        ctx->pc = 0x1C28F8u;
            // 0x1c28f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C28FCu;
        goto label_1c28fc;
    }
    ctx->pc = 0x1C28F4u;
    SET_GPR_U32(ctx, 31, 0x1C28FCu);
    ctx->pc = 0x1C28F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28F4u;
            // 0x1c28f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C28D8u;
    if (runtime->hasFunction(0x1C28D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C28D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28FCu; }
        if (ctx->pc != 0x1C28FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C28D8_0x1c28d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28FCu; }
        if (ctx->pc != 0x1C28FCu) { return; }
    }
    ctx->pc = 0x1C28FCu;
label_1c28fc:
    // 0x1c28fc: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1c28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
label_1c2900:
    // 0x1c2900: 0x24631ef0  addiu       $v1, $v1, 0x1EF0
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7920));
label_1c2904:
    // 0x1c2904: 0xc071236  jal         func_1C48D8
label_1c2908:
    if (ctx->pc == 0x1C2908u) {
        ctx->pc = 0x1C2908u;
            // 0x1c2908: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C290Cu;
        goto label_1c290c;
    }
    ctx->pc = 0x1C2904u;
    SET_GPR_U32(ctx, 31, 0x1C290Cu);
    ctx->pc = 0x1C2908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2904u;
            // 0x1c2908: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C290Cu; }
        if (ctx->pc != 0x1C290Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C290Cu; }
        if (ctx->pc != 0x1C290Cu) { return; }
    }
    ctx->pc = 0x1C290Cu;
label_1c290c:
    // 0x1c290c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2910:
    // 0x1c2910: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c2910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c2914:
    // 0x1c2914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2918:
    // 0x1c2918: 0x80704ee  j           func_1C13B8
label_1c291c:
    if (ctx->pc == 0x1C291Cu) {
        ctx->pc = 0x1C291Cu;
            // 0x1c291c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C2920u;
        goto label_1c2920;
    }
    ctx->pc = 0x1C2918u;
    ctx->pc = 0x1C291Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2918u;
            // 0x1c291c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C13B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1C13B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C2920u;
label_1c2920:
    // 0x1c2920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c2924:
    // 0x1c2924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c2928:
    // 0x1c2928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c292c:
    // 0x1c292c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1c292cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1c2930:
    // 0x1c2930: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c2930u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c2934:
    // 0x1c2934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c2938:
    // 0x1c2938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c293c:
    // 0x1c293c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c293cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1c2940:
    // 0x1c2940: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c2940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1c2944:
    // 0x1c2944: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c2944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1c2948:
    // 0x1c2948: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1c2948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1c294c:
    // 0x1c294c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1c2950:
    if (ctx->pc == 0x1C2950u) {
        ctx->pc = 0x1C2950u;
            // 0x1c2950: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->pc = 0x1C2954u;
        goto label_1c2954;
    }
    ctx->pc = 0x1C294Cu;
    {
        const bool branch_taken_0x1c294c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C294Cu;
            // 0x1c2950: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c294c) {
            ctx->pc = 0x1C295Cu;
            goto label_1c295c;
        }
    }
    ctx->pc = 0x1C2954u;
label_1c2954:
    // 0x1c2954: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
label_1c2958:
    if (ctx->pc == 0x1C2958u) {
        ctx->pc = 0x1C2958u;
            // 0x1c2958: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1C295Cu;
        goto label_1c295c;
    }
    ctx->pc = 0x1C2954u;
    {
        const bool branch_taken_0x1c2954 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2954) {
            ctx->pc = 0x1C2958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2954u;
            // 0x1c2958: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2968u;
            goto label_1c2968;
        }
    }
    ctx->pc = 0x1C295Cu;
label_1c295c:
    // 0x1c295c: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1c2960:
    if (ctx->pc == 0x1C2960u) {
        ctx->pc = 0x1C2960u;
            // 0x1c2960: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->pc = 0x1C2964u;
        goto label_1c2964;
    }
    ctx->pc = 0x1C295Cu;
    {
        const bool branch_taken_0x1c295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C295Cu;
            // 0x1c2960: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c295c) {
            ctx->pc = 0x1C2B88u;
            goto label_1c2b88;
        }
    }
    ctx->pc = 0x1C2964u;
label_1c2964:
    // 0x1c2964: 0x0  nop
    ctx->pc = 0x1c2964u;
    // NOP
label_1c2968:
    // 0x1c2968: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_1c296c:
    if (ctx->pc == 0x1C296Cu) {
        ctx->pc = 0x1C296Cu;
            // 0x1c296c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->pc = 0x1C2970u;
        goto label_1c2970;
    }
    ctx->pc = 0x1C2968u;
    {
        const bool branch_taken_0x1c2968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C296Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2968u;
            // 0x1c296c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2968) {
            ctx->pc = 0x1C2B88u;
            goto label_1c2b88;
        }
    }
    ctx->pc = 0x1C2970u;
label_1c2970:
    // 0x1c2970: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c2970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2974:
    // 0x1c2974: 0x58600085  blezl       $v1, . + 4 + (0x85 << 2)
label_1c2978:
    if (ctx->pc == 0x1C2978u) {
        ctx->pc = 0x1C2978u;
            // 0x1c2978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C297Cu;
        goto label_1c297c;
    }
    ctx->pc = 0x1C2974u;
    {
        const bool branch_taken_0x1c2974 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c2974) {
            ctx->pc = 0x1C2978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2974u;
            // 0x1c2978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2B8Cu;
            goto label_1c2b8c;
        }
    }
    ctx->pc = 0x1C297Cu;
label_1c297c:
    // 0x1c297c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c297cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c2980:
    // 0x1c2980: 0x58600082  blezl       $v1, . + 4 + (0x82 << 2)
label_1c2984:
    if (ctx->pc == 0x1C2984u) {
        ctx->pc = 0x1C2984u;
            // 0x1c2984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C2988u;
        goto label_1c2988;
    }
    ctx->pc = 0x1C2980u;
    {
        const bool branch_taken_0x1c2980 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c2980) {
            ctx->pc = 0x1C2984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2980u;
            // 0x1c2984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2B8Cu;
            goto label_1c2b8c;
        }
    }
    ctx->pc = 0x1C2988u;
label_1c2988:
    // 0x1c2988: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c2988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c298c:
    // 0x1c298c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1c298cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1c2990:
    // 0x1c2990: 0x5460007e  bnel        $v1, $zero, . + 4 + (0x7E << 2)
label_1c2994:
    if (ctx->pc == 0x1C2994u) {
        ctx->pc = 0x1C2994u;
            // 0x1c2994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C2998u;
        goto label_1c2998;
    }
    ctx->pc = 0x1C2990u;
    {
        const bool branch_taken_0x1c2990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2990) {
            ctx->pc = 0x1C2994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2990u;
            // 0x1c2994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2B8Cu;
            goto label_1c2b8c;
        }
    }
    ctx->pc = 0x1C2998u;
label_1c2998:
    // 0x1c2998: 0xc070aee  jal         func_1C2BB8
label_1c299c:
    if (ctx->pc == 0x1C299Cu) {
        ctx->pc = 0x1C29A0u;
        goto label_1c29a0;
    }
    ctx->pc = 0x1C2998u;
    SET_GPR_U32(ctx, 31, 0x1C29A0u);
    ctx->pc = 0x1C2BB8u;
    if (runtime->hasFunction(0x1C2BB8u)) {
        auto targetFn = runtime->lookupFunction(0x1C2BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29A0u; }
        if (ctx->pc != 0x1C29A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2BB8_0x1c2bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29A0u; }
        if (ctx->pc != 0x1C29A0u) { return; }
    }
    ctx->pc = 0x1C29A0u;
label_1c29a0:
    // 0x1c29a0: 0xc071780  jal         func_1C5E00
label_1c29a4:
    if (ctx->pc == 0x1C29A4u) {
        ctx->pc = 0x1C29A8u;
        goto label_1c29a8;
    }
    ctx->pc = 0x1C29A0u;
    SET_GPR_U32(ctx, 31, 0x1C29A8u);
    ctx->pc = 0x1C5E00u;
    if (runtime->hasFunction(0x1C5E00u)) {
        auto targetFn = runtime->lookupFunction(0x1C5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29A8u; }
        if (ctx->pc != 0x1C29A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5E00_0x1c5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29A8u; }
        if (ctx->pc != 0x1C29A8u) { return; }
    }
    ctx->pc = 0x1C29A8u;
label_1c29a8:
    // 0x1c29a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c29a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c29ac:
    // 0x1c29ac: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1c29acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1c29b0:
    // 0x1c29b0: 0x40f809  jalr        $v0
label_1c29b4:
    if (ctx->pc == 0x1C29B4u) {
        ctx->pc = 0x1C29B8u;
        goto label_1c29b8;
    }
    ctx->pc = 0x1C29B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C29B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C29B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C29B8u; }
            if (ctx->pc != 0x1C29B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1C29B8u;
label_1c29b8:
    // 0x1c29b8: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
label_1c29bc:
    if (ctx->pc == 0x1C29BCu) {
        ctx->pc = 0x1C29BCu;
            // 0x1c29bc: 0x2402ff35  addiu       $v0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C29C0u;
        goto label_1c29c0;
    }
    ctx->pc = 0x1C29B8u;
    {
        const bool branch_taken_0x1c29b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C29BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C29B8u;
            // 0x1c29bc: 0x2402ff35  addiu       $v0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29b8) {
            ctx->pc = 0x1C2B88u;
            goto label_1c2b88;
        }
    }
    ctx->pc = 0x1C29C0u;
label_1c29c0:
    // 0x1c29c0: 0x8e130008  lw          $s3, 0x8($s0)
    ctx->pc = 0x1c29c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c29c4:
    // 0x1c29c4: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x1c29c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_1c29c8:
    // 0x1c29c8: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1c29c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c29cc:
    // 0x1c29cc: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x1c29ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_1c29d0:
    // 0x1c29d0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1c29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_1c29d4:
    // 0x1c29d4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1c29d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c29d8:
    // 0x1c29d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1c29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1c29dc:
    // 0x1c29dc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1c29dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c29e0:
    // 0x1c29e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c29e4:
    // 0x1c29e4: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c29e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1c29e8:
    // 0x1c29e8: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x1c29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_1c29ec:
    // 0x1c29ec: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x1c29ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c29f0:
    // 0x1c29f0: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1c29f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c29f4:
    // 0x1c29f4: 0x24c30007  addiu       $v1, $a2, 0x7
    ctx->pc = 0x1c29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1c29f8:
    // 0x1c29f8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1c29f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1c29fc:
    // 0x1c29fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c29fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1c2a00:
    // 0x1c2a00: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x1c2a00u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c2a04:
    // 0x1c2a04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c2a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2a08:
    // 0x1c2a08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1c2a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c2a0c:
    // 0x1c2a0c: 0x26f4a4d8  addiu       $s4, $s7, -0x5B28
    ctx->pc = 0x1c2a0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943960));
label_1c2a10:
    // 0x1c2a10: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c2a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c2a14:
    // 0x1c2a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2a18:
    // 0x1c2a18: 0x2610110c  addiu       $s0, $s0, 0x110C
    ctx->pc = 0x1c2a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4364));
label_1c2a1c:
    // 0x1c2a1c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1c2a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1c2a20:
    // 0x1c2a20: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x1c2a20u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1c2a24:
    // 0x1c2a24: 0xc04a576  jal         func_1295D8
label_1c2a28:
    if (ctx->pc == 0x1C2A28u) {
        ctx->pc = 0x1C2A28u;
            // 0x1c2a28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A2Cu;
        goto label_1c2a2c;
    }
    ctx->pc = 0x1C2A24u;
    SET_GPR_U32(ctx, 31, 0x1C2A2Cu);
    ctx->pc = 0x1C2A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A24u;
            // 0x1c2a28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A2Cu; }
        if (ctx->pc != 0x1C2A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A2Cu; }
        if (ctx->pc != 0x1C2A2Cu) { return; }
    }
    ctx->pc = 0x1C2A2Cu;
label_1c2a2c:
    // 0x1c2a2c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1c2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1c2a30:
    // 0x1c2a30: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1c2a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1c2a34:
    // 0x1c2a34: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1c2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_1c2a38:
    // 0x1c2a38: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1c2a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1c2a3c:
    // 0x1c2a3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c2a40:
    // 0x1c2a40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c2a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c2a44:
    // 0x1c2a44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c2a48:
    // 0x1c2a48: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c2a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c2a4c:
    // 0x1c2a4c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c2a50:
    // 0x1c2a50: 0x2484108c  addiu       $a0, $a0, 0x108C
    ctx->pc = 0x1c2a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4236));
label_1c2a54:
    // 0x1c2a54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c2a58:
    // 0x1c2a58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1c2a5c:
    // 0x1c2a5c: 0x2466108c  addiu       $a2, $v1, 0x108C
    ctx->pc = 0x1c2a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4236));
label_1c2a60:
    // 0x1c2a60: 0x246710c8  addiu       $a3, $v1, 0x10C8
    ctx->pc = 0x1c2a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4296));
label_1c2a64:
    // 0x1c2a64: 0x3405c350  ori         $a1, $zero, 0xC350
    ctx->pc = 0x1c2a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
label_1c2a68:
    // 0x1c2a68: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x1c2a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_1c2a6c:
    // 0x1c2a6c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1c2a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
label_1c2a70:
    // 0x1c2a70: 0xac73000c  sw          $s3, 0xC($v1)
    ctx->pc = 0x1c2a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 19));
label_1c2a74:
    // 0x1c2a74: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x1c2a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
label_1c2a78:
    // 0x1c2a78: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x1c2a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_1c2a7c:
    // 0x1c2a7c: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x1c2a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
label_1c2a80:
    // 0x1c2a80: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x1c2a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
label_1c2a84:
    // 0x1c2a84: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c2a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1c2a88:
    // 0x1c2a88: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x1c2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
label_1c2a8c:
    // 0x1c2a8c: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x1c2a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
label_1c2a90:
    // 0x1c2a90: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1c2a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_1c2a94:
    // 0x1c2a94: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1c2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_1c2a98:
    // 0x1c2a98: 0xc07025c  jal         func_1C0970
label_1c2a9c:
    if (ctx->pc == 0x1C2A9Cu) {
        ctx->pc = 0x1C2A9Cu;
            // 0x1c2a9c: 0xac60002c  sw          $zero, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
        ctx->pc = 0x1C2AA0u;
        goto label_1c2aa0;
    }
    ctx->pc = 0x1C2A98u;
    SET_GPR_U32(ctx, 31, 0x1C2AA0u);
    ctx->pc = 0x1C2A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A98u;
            // 0x1c2a9c: 0xac60002c  sw          $zero, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0970u;
    if (runtime->hasFunction(0x1C0970u)) {
        auto targetFn = runtime->lookupFunction(0x1C0970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AA0u; }
        if (ctx->pc != 0x1C2AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0970_0x1c0970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AA0u; }
        if (ctx->pc != 0x1C2AA0u) { return; }
    }
    ctx->pc = 0x1C2AA0u;
label_1c2aa0:
    // 0x1c2aa0: 0xc070b2a  jal         func_1C2CA8
label_1c2aa4:
    if (ctx->pc == 0x1C2AA4u) {
        ctx->pc = 0x1C2AA4u;
            // 0x1c2aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AA8u;
        goto label_1c2aa8;
    }
    ctx->pc = 0x1C2AA0u;
    SET_GPR_U32(ctx, 31, 0x1C2AA8u);
    ctx->pc = 0x1C2AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2AA0u;
            // 0x1c2aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2CA8u;
    if (runtime->hasFunction(0x1C2CA8u)) {
        auto targetFn = runtime->lookupFunction(0x1C2CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AA8u; }
        if (ctx->pc != 0x1C2AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2CA8_0x1c2ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AA8u; }
        if (ctx->pc != 0x1C2AA8u) { return; }
    }
    ctx->pc = 0x1C2AA8u;
label_1c2aa8:
    // 0x1c2aa8: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_1c2aac:
    if (ctx->pc == 0x1C2AACu) {
        ctx->pc = 0x1C2AACu;
            // 0x1c2aac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C2AB0u;
        goto label_1c2ab0;
    }
    ctx->pc = 0x1C2AA8u;
    {
        const bool branch_taken_0x1c2aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2aa8) {
            ctx->pc = 0x1C2AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2AA8u;
            // 0x1c2aac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C2B8Cu;
            goto label_1c2b8c;
        }
    }
    ctx->pc = 0x1C2AB0u;
label_1c2ab0:
    // 0x1c2ab0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1c2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1c2ab4:
    // 0x1c2ab4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ab8:
    // 0x1c2ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2abc:
    // 0x1c2abc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ac0:
    // 0x1c2ac0: 0xac550038  sw          $s5, 0x38($v0)
    ctx->pc = 0x1c2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 21));
label_1c2ac4:
    // 0x1c2ac4: 0xac56003c  sw          $s6, 0x3C($v0)
    ctx->pc = 0x1c2ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 22));
label_1c2ac8:
    // 0x1c2ac8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x1c2ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_1c2acc:
    // 0x1c2acc: 0xc07140a  jal         func_1C5028
label_1c2ad0:
    if (ctx->pc == 0x1C2AD0u) {
        ctx->pc = 0x1C2AD0u;
            // 0x1c2ad0: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x1C2AD4u;
        goto label_1c2ad4;
    }
    ctx->pc = 0x1C2ACCu;
    SET_GPR_U32(ctx, 31, 0x1C2AD4u);
    ctx->pc = 0x1C2AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2ACCu;
            // 0x1c2ad0: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5028u;
    if (runtime->hasFunction(0x1C5028u)) {
        auto targetFn = runtime->lookupFunction(0x1C5028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AD4u; }
        if (ctx->pc != 0x1C2AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5028_0x1c5028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AD4u; }
        if (ctx->pc != 0x1C2AD4u) { return; }
    }
    ctx->pc = 0x1C2AD4u;
label_1c2ad4:
    // 0x1c2ad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ad8:
    // 0x1c2ad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c2ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2adc:
    // 0x1c2adc: 0xc07140a  jal         func_1C5028
label_1c2ae0:
    if (ctx->pc == 0x1C2AE0u) {
        ctx->pc = 0x1C2AE0u;
            // 0x1c2ae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AE4u;
        goto label_1c2ae4;
    }
    ctx->pc = 0x1C2ADCu;
    SET_GPR_U32(ctx, 31, 0x1C2AE4u);
    ctx->pc = 0x1C2AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2ADCu;
            // 0x1c2ae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5028u;
    if (runtime->hasFunction(0x1C5028u)) {
        auto targetFn = runtime->lookupFunction(0x1C5028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AE4u; }
        if (ctx->pc != 0x1C2AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5028_0x1c5028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AE4u; }
        if (ctx->pc != 0x1C2AE4u) { return; }
    }
    ctx->pc = 0x1C2AE4u;
label_1c2ae4:
    // 0x1c2ae4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ae8:
    // 0x1c2ae8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c2ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2aec:
    // 0x1c2aec: 0xc07140a  jal         func_1C5028
label_1c2af0:
    if (ctx->pc == 0x1C2AF0u) {
        ctx->pc = 0x1C2AF0u;
            // 0x1c2af0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C2AF4u;
        goto label_1c2af4;
    }
    ctx->pc = 0x1C2AECu;
    SET_GPR_U32(ctx, 31, 0x1C2AF4u);
    ctx->pc = 0x1C2AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2AECu;
            // 0x1c2af0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5028u;
    if (runtime->hasFunction(0x1C5028u)) {
        auto targetFn = runtime->lookupFunction(0x1C5028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AF4u; }
        if (ctx->pc != 0x1C2AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5028_0x1c5028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AF4u; }
        if (ctx->pc != 0x1C2AF4u) { return; }
    }
    ctx->pc = 0x1C2AF4u;
label_1c2af4:
    // 0x1c2af4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1c2af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1c2af8:
    // 0x1c2af8: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x1c2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_1c2afc:
    // 0x1c2afc: 0x24a2008b  addiu       $v0, $a1, 0x8B
    ctx->pc = 0x1c2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 139));
label_1c2b00:
    // 0x1c2b00: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1c2b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c2b04:
    // 0x1c2b04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c2b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c2b08:
    // 0x1c2b08: 0x24a4108c  addiu       $a0, $a1, 0x108C
    ctx->pc = 0x1c2b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4236));
label_1c2b0c:
    // 0x1c2b0c: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
label_1c2b10:
    if (ctx->pc == 0x1C2B10u) {
        ctx->pc = 0x1C2B10u;
            // 0x1c2b10: 0xaca20048  sw          $v0, 0x48($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2B14u;
        goto label_1c2b14;
    }
    ctx->pc = 0x1C2B0Cu;
    {
        const bool branch_taken_0x1c2b0c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C2B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B0Cu;
            // 0x1c2b10: 0xaca20048  sw          $v0, 0x48($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b0c) {
            ctx->pc = 0x1C2B3Cu;
            goto label_1c2b3c;
        }
    }
    ctx->pc = 0x1C2B14u;
label_1c2b14:
    // 0x1c2b14: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c2b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b18:
    // 0x1c2b18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c2b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b1c:
    // 0x1c2b1c: 0x0  nop
    ctx->pc = 0x1c2b1cu;
    // NOP
label_1c2b20:
    // 0x1c2b20: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c2b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1c2b24:
    // 0x1c2b24: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x1c2b24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
label_1c2b28:
    // 0x1c2b28: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c2b2c:
    // 0x1c2b2c: 0x0  nop
    ctx->pc = 0x1c2b2cu;
    // NOP
label_1c2b30:
    // 0x1c2b30: 0x0  nop
    ctx->pc = 0x1c2b30u;
    // NOP
label_1c2b34:
    // 0x1c2b34: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_1c2b38:
    if (ctx->pc == 0x1C2B38u) {
        ctx->pc = 0x1C2B38u;
            // 0x1c2b38: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->pc = 0x1C2B3Cu;
        goto label_1c2b3c;
    }
    ctx->pc = 0x1C2B34u;
    {
        const bool branch_taken_0x1c2b34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B34u;
            // 0x1c2b38: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b34) {
            ctx->pc = 0x1C2B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2b20;
        }
    }
    ctx->pc = 0x1C2B3Cu;
label_1c2b3c:
    // 0x1c2b3c: 0x26f0a4d8  addiu       $s0, $s7, -0x5B28
    ctx->pc = 0x1c2b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943960));
label_1c2b40:
    // 0x1c2b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b44:
    // 0x1c2b44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2b48:
    // 0x1c2b48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b4c:
    // 0x1c2b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b50:
    // 0x1c2b50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b54:
    // 0x1c2b54: 0xc0702d0  jal         func_1C0B40
label_1c2b58:
    if (ctx->pc == 0x1C2B58u) {
        ctx->pc = 0x1C2B58u;
            // 0x1c2b58: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->pc = 0x1C2B5Cu;
        goto label_1c2b5c;
    }
    ctx->pc = 0x1C2B54u;
    SET_GPR_U32(ctx, 31, 0x1C2B5Cu);
    ctx->pc = 0x1C2B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B54u;
            // 0x1c2b58: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B40u;
    if (runtime->hasFunction(0x1C0B40u)) {
        auto targetFn = runtime->lookupFunction(0x1C0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B5Cu; }
        if (ctx->pc != 0x1C2B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0B40_0x1c0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B5Cu; }
        if (ctx->pc != 0x1C2B5Cu) { return; }
    }
    ctx->pc = 0x1C2B5Cu;
label_1c2b5c:
    // 0x1c2b5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c2b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2b60:
    // 0x1c2b60: 0xc070322  jal         func_1C0C88
label_1c2b64:
    if (ctx->pc == 0x1C2B64u) {
        ctx->pc = 0x1C2B64u;
            // 0x1c2b64: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->pc = 0x1C2B68u;
        goto label_1c2b68;
    }
    ctx->pc = 0x1C2B60u;
    SET_GPR_U32(ctx, 31, 0x1C2B68u);
    ctx->pc = 0x1C2B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B60u;
            // 0x1c2b64: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0C88u;
    if (runtime->hasFunction(0x1C0C88u)) {
        auto targetFn = runtime->lookupFunction(0x1C0C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B68u; }
        if (ctx->pc != 0x1C2B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0C88_0x1c0c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B68u; }
        if (ctx->pc != 0x1C2B68u) { return; }
    }
    ctx->pc = 0x1C2B68u;
label_1c2b68:
    // 0x1c2b68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c2b6c:
    // 0x1c2b6c: 0x2442a4e0  addiu       $v0, $v0, -0x5B20
    ctx->pc = 0x1c2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943968));
label_1c2b70:
    // 0x1c2b70: 0xc0721ec  jal         func_1C87B0
label_1c2b74:
    if (ctx->pc == 0x1C2B74u) {
        ctx->pc = 0x1C2B74u;
            // 0x1c2b74: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1C2B78u;
        goto label_1c2b78;
    }
    ctx->pc = 0x1C2B70u;
    SET_GPR_U32(ctx, 31, 0x1C2B78u);
    ctx->pc = 0x1C2B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B70u;
            // 0x1c2b74: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C87B0u;
    if (runtime->hasFunction(0x1C87B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C87B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B78u; }
        if (ctx->pc != 0x1C2B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C87B0_0x1c87b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B78u; }
        if (ctx->pc != 0x1C2B78u) { return; }
    }
    ctx->pc = 0x1C2B78u;
label_1c2b78:
    // 0x1c2b78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c2b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c2b7c:
    // 0x1c2b7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2b80:
    // 0x1c2b80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c2b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b84:
    // 0x1c2b84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1c2b88:
    // 0x1c2b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2b8c:
    // 0x1c2b8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c2b90:
    // 0x1c2b90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2b94:
    // 0x1c2b94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c2b94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c2b98:
    // 0x1c2b98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c2b98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2b9c:
    // 0x1c2b9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c2b9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c2ba0:
    // 0x1c2ba0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1c2ba0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c2ba4:
    // 0x1c2ba4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1c2ba4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1c2ba8:
    // 0x1c2ba8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c2ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c2bac:
    // 0x1c2bac: 0x3e00008  jr          $ra
label_1c2bb0:
    if (ctx->pc == 0x1C2BB0u) {
        ctx->pc = 0x1C2BB0u;
            // 0x1c2bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1C2BB4u;
        goto label_1c2bb4;
    }
    ctx->pc = 0x1C2BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BACu;
            // 0x1c2bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2BB4u;
label_1c2bb4:
    // 0x1c2bb4: 0x0  nop
    ctx->pc = 0x1c2bb4u;
    // NOP
}
