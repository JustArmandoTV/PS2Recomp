#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00539830
// Address: 0x539830 - 0x539c80
void sub_00539830_0x539830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00539830_0x539830");
#endif

    switch (ctx->pc) {
        case 0x539830u: goto label_539830;
        case 0x539834u: goto label_539834;
        case 0x539838u: goto label_539838;
        case 0x53983cu: goto label_53983c;
        case 0x539840u: goto label_539840;
        case 0x539844u: goto label_539844;
        case 0x539848u: goto label_539848;
        case 0x53984cu: goto label_53984c;
        case 0x539850u: goto label_539850;
        case 0x539854u: goto label_539854;
        case 0x539858u: goto label_539858;
        case 0x53985cu: goto label_53985c;
        case 0x539860u: goto label_539860;
        case 0x539864u: goto label_539864;
        case 0x539868u: goto label_539868;
        case 0x53986cu: goto label_53986c;
        case 0x539870u: goto label_539870;
        case 0x539874u: goto label_539874;
        case 0x539878u: goto label_539878;
        case 0x53987cu: goto label_53987c;
        case 0x539880u: goto label_539880;
        case 0x539884u: goto label_539884;
        case 0x539888u: goto label_539888;
        case 0x53988cu: goto label_53988c;
        case 0x539890u: goto label_539890;
        case 0x539894u: goto label_539894;
        case 0x539898u: goto label_539898;
        case 0x53989cu: goto label_53989c;
        case 0x5398a0u: goto label_5398a0;
        case 0x5398a4u: goto label_5398a4;
        case 0x5398a8u: goto label_5398a8;
        case 0x5398acu: goto label_5398ac;
        case 0x5398b0u: goto label_5398b0;
        case 0x5398b4u: goto label_5398b4;
        case 0x5398b8u: goto label_5398b8;
        case 0x5398bcu: goto label_5398bc;
        case 0x5398c0u: goto label_5398c0;
        case 0x5398c4u: goto label_5398c4;
        case 0x5398c8u: goto label_5398c8;
        case 0x5398ccu: goto label_5398cc;
        case 0x5398d0u: goto label_5398d0;
        case 0x5398d4u: goto label_5398d4;
        case 0x5398d8u: goto label_5398d8;
        case 0x5398dcu: goto label_5398dc;
        case 0x5398e0u: goto label_5398e0;
        case 0x5398e4u: goto label_5398e4;
        case 0x5398e8u: goto label_5398e8;
        case 0x5398ecu: goto label_5398ec;
        case 0x5398f0u: goto label_5398f0;
        case 0x5398f4u: goto label_5398f4;
        case 0x5398f8u: goto label_5398f8;
        case 0x5398fcu: goto label_5398fc;
        case 0x539900u: goto label_539900;
        case 0x539904u: goto label_539904;
        case 0x539908u: goto label_539908;
        case 0x53990cu: goto label_53990c;
        case 0x539910u: goto label_539910;
        case 0x539914u: goto label_539914;
        case 0x539918u: goto label_539918;
        case 0x53991cu: goto label_53991c;
        case 0x539920u: goto label_539920;
        case 0x539924u: goto label_539924;
        case 0x539928u: goto label_539928;
        case 0x53992cu: goto label_53992c;
        case 0x539930u: goto label_539930;
        case 0x539934u: goto label_539934;
        case 0x539938u: goto label_539938;
        case 0x53993cu: goto label_53993c;
        case 0x539940u: goto label_539940;
        case 0x539944u: goto label_539944;
        case 0x539948u: goto label_539948;
        case 0x53994cu: goto label_53994c;
        case 0x539950u: goto label_539950;
        case 0x539954u: goto label_539954;
        case 0x539958u: goto label_539958;
        case 0x53995cu: goto label_53995c;
        case 0x539960u: goto label_539960;
        case 0x539964u: goto label_539964;
        case 0x539968u: goto label_539968;
        case 0x53996cu: goto label_53996c;
        case 0x539970u: goto label_539970;
        case 0x539974u: goto label_539974;
        case 0x539978u: goto label_539978;
        case 0x53997cu: goto label_53997c;
        case 0x539980u: goto label_539980;
        case 0x539984u: goto label_539984;
        case 0x539988u: goto label_539988;
        case 0x53998cu: goto label_53998c;
        case 0x539990u: goto label_539990;
        case 0x539994u: goto label_539994;
        case 0x539998u: goto label_539998;
        case 0x53999cu: goto label_53999c;
        case 0x5399a0u: goto label_5399a0;
        case 0x5399a4u: goto label_5399a4;
        case 0x5399a8u: goto label_5399a8;
        case 0x5399acu: goto label_5399ac;
        case 0x5399b0u: goto label_5399b0;
        case 0x5399b4u: goto label_5399b4;
        case 0x5399b8u: goto label_5399b8;
        case 0x5399bcu: goto label_5399bc;
        case 0x5399c0u: goto label_5399c0;
        case 0x5399c4u: goto label_5399c4;
        case 0x5399c8u: goto label_5399c8;
        case 0x5399ccu: goto label_5399cc;
        case 0x5399d0u: goto label_5399d0;
        case 0x5399d4u: goto label_5399d4;
        case 0x5399d8u: goto label_5399d8;
        case 0x5399dcu: goto label_5399dc;
        case 0x5399e0u: goto label_5399e0;
        case 0x5399e4u: goto label_5399e4;
        case 0x5399e8u: goto label_5399e8;
        case 0x5399ecu: goto label_5399ec;
        case 0x5399f0u: goto label_5399f0;
        case 0x5399f4u: goto label_5399f4;
        case 0x5399f8u: goto label_5399f8;
        case 0x5399fcu: goto label_5399fc;
        case 0x539a00u: goto label_539a00;
        case 0x539a04u: goto label_539a04;
        case 0x539a08u: goto label_539a08;
        case 0x539a0cu: goto label_539a0c;
        case 0x539a10u: goto label_539a10;
        case 0x539a14u: goto label_539a14;
        case 0x539a18u: goto label_539a18;
        case 0x539a1cu: goto label_539a1c;
        case 0x539a20u: goto label_539a20;
        case 0x539a24u: goto label_539a24;
        case 0x539a28u: goto label_539a28;
        case 0x539a2cu: goto label_539a2c;
        case 0x539a30u: goto label_539a30;
        case 0x539a34u: goto label_539a34;
        case 0x539a38u: goto label_539a38;
        case 0x539a3cu: goto label_539a3c;
        case 0x539a40u: goto label_539a40;
        case 0x539a44u: goto label_539a44;
        case 0x539a48u: goto label_539a48;
        case 0x539a4cu: goto label_539a4c;
        case 0x539a50u: goto label_539a50;
        case 0x539a54u: goto label_539a54;
        case 0x539a58u: goto label_539a58;
        case 0x539a5cu: goto label_539a5c;
        case 0x539a60u: goto label_539a60;
        case 0x539a64u: goto label_539a64;
        case 0x539a68u: goto label_539a68;
        case 0x539a6cu: goto label_539a6c;
        case 0x539a70u: goto label_539a70;
        case 0x539a74u: goto label_539a74;
        case 0x539a78u: goto label_539a78;
        case 0x539a7cu: goto label_539a7c;
        case 0x539a80u: goto label_539a80;
        case 0x539a84u: goto label_539a84;
        case 0x539a88u: goto label_539a88;
        case 0x539a8cu: goto label_539a8c;
        case 0x539a90u: goto label_539a90;
        case 0x539a94u: goto label_539a94;
        case 0x539a98u: goto label_539a98;
        case 0x539a9cu: goto label_539a9c;
        case 0x539aa0u: goto label_539aa0;
        case 0x539aa4u: goto label_539aa4;
        case 0x539aa8u: goto label_539aa8;
        case 0x539aacu: goto label_539aac;
        case 0x539ab0u: goto label_539ab0;
        case 0x539ab4u: goto label_539ab4;
        case 0x539ab8u: goto label_539ab8;
        case 0x539abcu: goto label_539abc;
        case 0x539ac0u: goto label_539ac0;
        case 0x539ac4u: goto label_539ac4;
        case 0x539ac8u: goto label_539ac8;
        case 0x539accu: goto label_539acc;
        case 0x539ad0u: goto label_539ad0;
        case 0x539ad4u: goto label_539ad4;
        case 0x539ad8u: goto label_539ad8;
        case 0x539adcu: goto label_539adc;
        case 0x539ae0u: goto label_539ae0;
        case 0x539ae4u: goto label_539ae4;
        case 0x539ae8u: goto label_539ae8;
        case 0x539aecu: goto label_539aec;
        case 0x539af0u: goto label_539af0;
        case 0x539af4u: goto label_539af4;
        case 0x539af8u: goto label_539af8;
        case 0x539afcu: goto label_539afc;
        case 0x539b00u: goto label_539b00;
        case 0x539b04u: goto label_539b04;
        case 0x539b08u: goto label_539b08;
        case 0x539b0cu: goto label_539b0c;
        case 0x539b10u: goto label_539b10;
        case 0x539b14u: goto label_539b14;
        case 0x539b18u: goto label_539b18;
        case 0x539b1cu: goto label_539b1c;
        case 0x539b20u: goto label_539b20;
        case 0x539b24u: goto label_539b24;
        case 0x539b28u: goto label_539b28;
        case 0x539b2cu: goto label_539b2c;
        case 0x539b30u: goto label_539b30;
        case 0x539b34u: goto label_539b34;
        case 0x539b38u: goto label_539b38;
        case 0x539b3cu: goto label_539b3c;
        case 0x539b40u: goto label_539b40;
        case 0x539b44u: goto label_539b44;
        case 0x539b48u: goto label_539b48;
        case 0x539b4cu: goto label_539b4c;
        case 0x539b50u: goto label_539b50;
        case 0x539b54u: goto label_539b54;
        case 0x539b58u: goto label_539b58;
        case 0x539b5cu: goto label_539b5c;
        case 0x539b60u: goto label_539b60;
        case 0x539b64u: goto label_539b64;
        case 0x539b68u: goto label_539b68;
        case 0x539b6cu: goto label_539b6c;
        case 0x539b70u: goto label_539b70;
        case 0x539b74u: goto label_539b74;
        case 0x539b78u: goto label_539b78;
        case 0x539b7cu: goto label_539b7c;
        case 0x539b80u: goto label_539b80;
        case 0x539b84u: goto label_539b84;
        case 0x539b88u: goto label_539b88;
        case 0x539b8cu: goto label_539b8c;
        case 0x539b90u: goto label_539b90;
        case 0x539b94u: goto label_539b94;
        case 0x539b98u: goto label_539b98;
        case 0x539b9cu: goto label_539b9c;
        case 0x539ba0u: goto label_539ba0;
        case 0x539ba4u: goto label_539ba4;
        case 0x539ba8u: goto label_539ba8;
        case 0x539bacu: goto label_539bac;
        case 0x539bb0u: goto label_539bb0;
        case 0x539bb4u: goto label_539bb4;
        case 0x539bb8u: goto label_539bb8;
        case 0x539bbcu: goto label_539bbc;
        case 0x539bc0u: goto label_539bc0;
        case 0x539bc4u: goto label_539bc4;
        case 0x539bc8u: goto label_539bc8;
        case 0x539bccu: goto label_539bcc;
        case 0x539bd0u: goto label_539bd0;
        case 0x539bd4u: goto label_539bd4;
        case 0x539bd8u: goto label_539bd8;
        case 0x539bdcu: goto label_539bdc;
        case 0x539be0u: goto label_539be0;
        case 0x539be4u: goto label_539be4;
        case 0x539be8u: goto label_539be8;
        case 0x539becu: goto label_539bec;
        case 0x539bf0u: goto label_539bf0;
        case 0x539bf4u: goto label_539bf4;
        case 0x539bf8u: goto label_539bf8;
        case 0x539bfcu: goto label_539bfc;
        case 0x539c00u: goto label_539c00;
        case 0x539c04u: goto label_539c04;
        case 0x539c08u: goto label_539c08;
        case 0x539c0cu: goto label_539c0c;
        case 0x539c10u: goto label_539c10;
        case 0x539c14u: goto label_539c14;
        case 0x539c18u: goto label_539c18;
        case 0x539c1cu: goto label_539c1c;
        case 0x539c20u: goto label_539c20;
        case 0x539c24u: goto label_539c24;
        case 0x539c28u: goto label_539c28;
        case 0x539c2cu: goto label_539c2c;
        case 0x539c30u: goto label_539c30;
        case 0x539c34u: goto label_539c34;
        case 0x539c38u: goto label_539c38;
        case 0x539c3cu: goto label_539c3c;
        case 0x539c40u: goto label_539c40;
        case 0x539c44u: goto label_539c44;
        case 0x539c48u: goto label_539c48;
        case 0x539c4cu: goto label_539c4c;
        case 0x539c50u: goto label_539c50;
        case 0x539c54u: goto label_539c54;
        case 0x539c58u: goto label_539c58;
        case 0x539c5cu: goto label_539c5c;
        case 0x539c60u: goto label_539c60;
        case 0x539c64u: goto label_539c64;
        case 0x539c68u: goto label_539c68;
        case 0x539c6cu: goto label_539c6c;
        case 0x539c70u: goto label_539c70;
        case 0x539c74u: goto label_539c74;
        case 0x539c78u: goto label_539c78;
        case 0x539c7cu: goto label_539c7c;
        default: break;
    }

    ctx->pc = 0x539830u;

label_539830:
    // 0x539830: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x539830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_539834:
    // 0x539834: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x539834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_539838:
    // 0x539838: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x539838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_53983c:
    // 0x53983c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_539840:
    // 0x539840: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x539840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_539844:
    // 0x539844: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x539844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_539848:
    // 0x539848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x539848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53984c:
    // 0x53984c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x53984cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_539850:
    // 0x539850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x539850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_539854:
    // 0x539854: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x539854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_539858:
    // 0x539858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x539858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53985c:
    // 0x53985c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53985cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_539860:
    // 0x539860: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x539860u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_539864:
    // 0x539864: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_539868:
    if (ctx->pc == 0x539868u) {
        ctx->pc = 0x539868u;
            // 0x539868: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53986Cu;
        goto label_53986c;
    }
    ctx->pc = 0x539864u;
    {
        const bool branch_taken_0x539864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x539868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539864u;
            // 0x539868: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539864) {
            ctx->pc = 0x539AF8u;
            goto label_539af8;
        }
    }
    ctx->pc = 0x53986Cu;
label_53986c:
    // 0x53986c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x53986cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_539870:
    // 0x539870: 0xc04f278  jal         func_13C9E0
label_539874:
    if (ctx->pc == 0x539874u) {
        ctx->pc = 0x539874u;
            // 0x539874: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x539878u;
        goto label_539878;
    }
    ctx->pc = 0x539870u;
    SET_GPR_U32(ctx, 31, 0x539878u);
    ctx->pc = 0x539874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539870u;
            // 0x539874: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539878u; }
        if (ctx->pc != 0x539878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539878u; }
        if (ctx->pc != 0x539878u) { return; }
    }
    ctx->pc = 0x539878u;
label_539878:
    // 0x539878: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x539878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53987c:
    // 0x53987c: 0xc04ce80  jal         func_133A00
label_539880:
    if (ctx->pc == 0x539880u) {
        ctx->pc = 0x539880u;
            // 0x539880: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x539884u;
        goto label_539884;
    }
    ctx->pc = 0x53987Cu;
    SET_GPR_U32(ctx, 31, 0x539884u);
    ctx->pc = 0x539880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53987Cu;
            // 0x539880: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539884u; }
        if (ctx->pc != 0x539884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539884u; }
        if (ctx->pc != 0x539884u) { return; }
    }
    ctx->pc = 0x539884u;
label_539884:
    // 0x539884: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x539884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_539888:
    // 0x539888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x539888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53988c:
    // 0x53988c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x53988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_539890:
    // 0x539890: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x539890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_539894:
    // 0x539894: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_539898:
    if (ctx->pc == 0x539898u) {
        ctx->pc = 0x539898u;
            // 0x539898: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->pc = 0x53989Cu;
        goto label_53989c;
    }
    ctx->pc = 0x539894u;
    {
        const bool branch_taken_0x539894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x539894) {
            ctx->pc = 0x539898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539894u;
            // 0x539898: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5398C4u;
            goto label_5398c4;
        }
    }
    ctx->pc = 0x53989Cu;
label_53989c:
    // 0x53989c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x53989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_5398a0:
    // 0x5398a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5398a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5398a4:
    // 0x5398a4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5398a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5398a8:
    // 0x5398a8: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x5398a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_5398ac:
    // 0x5398ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5398acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5398b0:
    // 0x5398b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x5398b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5398b4:
    // 0x5398b4: 0xc04ce50  jal         func_133940
label_5398b8:
    if (ctx->pc == 0x5398B8u) {
        ctx->pc = 0x5398B8u;
            // 0x5398b8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5398BCu;
        goto label_5398bc;
    }
    ctx->pc = 0x5398B4u;
    SET_GPR_U32(ctx, 31, 0x5398BCu);
    ctx->pc = 0x5398B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5398B4u;
            // 0x5398b8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5398BCu; }
        if (ctx->pc != 0x5398BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5398BCu; }
        if (ctx->pc != 0x5398BCu) { return; }
    }
    ctx->pc = 0x5398BCu;
label_5398bc:
    // 0x5398bc: 0x1000000e  b           . + 4 + (0xE << 2)
label_5398c0:
    if (ctx->pc == 0x5398C0u) {
        ctx->pc = 0x5398C4u;
        goto label_5398c4;
    }
    ctx->pc = 0x5398BCu;
    {
        const bool branch_taken_0x5398bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5398bc) {
            ctx->pc = 0x5398F8u;
            goto label_5398f8;
        }
    }
    ctx->pc = 0x5398C4u;
label_5398c4:
    // 0x5398c4: 0xc04f278  jal         func_13C9E0
label_5398c8:
    if (ctx->pc == 0x5398C8u) {
        ctx->pc = 0x5398C8u;
            // 0x5398c8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x5398CCu;
        goto label_5398cc;
    }
    ctx->pc = 0x5398C4u;
    SET_GPR_U32(ctx, 31, 0x5398CCu);
    ctx->pc = 0x5398C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5398C4u;
            // 0x5398c8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5398CCu; }
        if (ctx->pc != 0x5398CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5398CCu; }
        if (ctx->pc != 0x5398CCu) { return; }
    }
    ctx->pc = 0x5398CCu;
label_5398cc:
    // 0x5398cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x5398ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_5398d0:
    // 0x5398d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5398d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5398d4:
    // 0x5398d4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5398d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5398d8:
    // 0x5398d8: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x5398d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_5398dc:
    // 0x5398dc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x5398dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5398e0:
    // 0x5398e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x5398e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5398e4:
    // 0x5398e4: 0xc04ce50  jal         func_133940
label_5398e8:
    if (ctx->pc == 0x5398E8u) {
        ctx->pc = 0x5398E8u;
            // 0x5398e8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5398ECu;
        goto label_5398ec;
    }
    ctx->pc = 0x5398E4u;
    SET_GPR_U32(ctx, 31, 0x5398ECu);
    ctx->pc = 0x5398E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5398E4u;
            // 0x5398e8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5398ECu; }
        if (ctx->pc != 0x5398ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5398ECu; }
        if (ctx->pc != 0x5398ECu) { return; }
    }
    ctx->pc = 0x5398ECu;
label_5398ec:
    // 0x5398ec: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x5398ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_5398f0:
    // 0x5398f0: 0xc04ce80  jal         func_133A00
label_5398f4:
    if (ctx->pc == 0x5398F4u) {
        ctx->pc = 0x5398F4u;
            // 0x5398f4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x5398F8u;
        goto label_5398f8;
    }
    ctx->pc = 0x5398F0u;
    SET_GPR_U32(ctx, 31, 0x5398F8u);
    ctx->pc = 0x5398F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5398F0u;
            // 0x5398f4: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5398F8u; }
        if (ctx->pc != 0x5398F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5398F8u; }
        if (ctx->pc != 0x5398F8u) { return; }
    }
    ctx->pc = 0x5398F8u;
label_5398f8:
    // 0x5398f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5398f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5398fc:
    // 0x5398fc: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x5398fcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_539900:
    // 0x539900: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x539900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_539904:
    // 0x539904: 0xc07698c  jal         func_1DA630
label_539908:
    if (ctx->pc == 0x539908u) {
        ctx->pc = 0x539908u;
            // 0x539908: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53990Cu;
        goto label_53990c;
    }
    ctx->pc = 0x539904u;
    SET_GPR_U32(ctx, 31, 0x53990Cu);
    ctx->pc = 0x539908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539904u;
            // 0x539908: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53990Cu; }
        if (ctx->pc != 0x53990Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53990Cu; }
        if (ctx->pc != 0x53990Cu) { return; }
    }
    ctx->pc = 0x53990Cu;
label_53990c:
    // 0x53990c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x53990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_539910:
    // 0x539910: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_539914:
    if (ctx->pc == 0x539914u) {
        ctx->pc = 0x539918u;
        goto label_539918;
    }
    ctx->pc = 0x539910u;
    {
        const bool branch_taken_0x539910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x539910) {
            ctx->pc = 0x539920u;
            goto label_539920;
        }
    }
    ctx->pc = 0x539918u;
label_539918:
    // 0x539918: 0x10000033  b           . + 4 + (0x33 << 2)
label_53991c:
    if (ctx->pc == 0x53991Cu) {
        ctx->pc = 0x53991Cu;
            // 0x53991c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x539920u;
        goto label_539920;
    }
    ctx->pc = 0x539918u;
    {
        const bool branch_taken_0x539918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53991Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539918u;
            // 0x53991c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539918) {
            ctx->pc = 0x5399E8u;
            goto label_5399e8;
        }
    }
    ctx->pc = 0x539920u;
label_539920:
    // 0x539920: 0xc0576f4  jal         func_15DBD0
label_539924:
    if (ctx->pc == 0x539924u) {
        ctx->pc = 0x539928u;
        goto label_539928;
    }
    ctx->pc = 0x539920u;
    SET_GPR_U32(ctx, 31, 0x539928u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539928u; }
        if (ctx->pc != 0x539928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539928u; }
        if (ctx->pc != 0x539928u) { return; }
    }
    ctx->pc = 0x539928u;
label_539928:
    // 0x539928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x539928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_53992c:
    // 0x53992c: 0xc076984  jal         func_1DA610
label_539930:
    if (ctx->pc == 0x539930u) {
        ctx->pc = 0x539930u;
            // 0x539930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539934u;
        goto label_539934;
    }
    ctx->pc = 0x53992Cu;
    SET_GPR_U32(ctx, 31, 0x539934u);
    ctx->pc = 0x539930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53992Cu;
            // 0x539930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539934u; }
        if (ctx->pc != 0x539934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539934u; }
        if (ctx->pc != 0x539934u) { return; }
    }
    ctx->pc = 0x539934u;
label_539934:
    // 0x539934: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x539934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_539938:
    // 0x539938: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x539938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_53993c:
    // 0x53993c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53993cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_539940:
    // 0x539940: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x539940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_539944:
    // 0x539944: 0xc442cfc0  lwc1        $f2, -0x3040($v0)
    ctx->pc = 0x539944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_539948:
    // 0x539948: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x539948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53994c:
    // 0x53994c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53994cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_539950:
    // 0x539950: 0xc441cfc8  lwc1        $f1, -0x3038($v0)
    ctx->pc = 0x539950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_539954:
    // 0x539954: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x539954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_539958:
    // 0x539958: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x539958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_53995c:
    // 0x53995c: 0xc440cfcc  lwc1        $f0, -0x3034($v0)
    ctx->pc = 0x53995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_539960:
    // 0x539960: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x539960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_539964:
    // 0x539964: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x539964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_539968:
    // 0x539968: 0x8c42cfc4  lw          $v0, -0x303C($v0)
    ctx->pc = 0x539968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954948)));
label_53996c:
    // 0x53996c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x53996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_539970:
    // 0x539970: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x539970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_539974:
    // 0x539974: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x539974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_539978:
    // 0x539978: 0xc04cca0  jal         func_133280
label_53997c:
    if (ctx->pc == 0x53997Cu) {
        ctx->pc = 0x53997Cu;
            // 0x53997c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x539980u;
        goto label_539980;
    }
    ctx->pc = 0x539978u;
    SET_GPR_U32(ctx, 31, 0x539980u);
    ctx->pc = 0x53997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539978u;
            // 0x53997c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539980u; }
        if (ctx->pc != 0x539980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539980u; }
        if (ctx->pc != 0x539980u) { return; }
    }
    ctx->pc = 0x539980u;
label_539980:
    // 0x539980: 0xc076980  jal         func_1DA600
label_539984:
    if (ctx->pc == 0x539984u) {
        ctx->pc = 0x539984u;
            // 0x539984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539988u;
        goto label_539988;
    }
    ctx->pc = 0x539980u;
    SET_GPR_U32(ctx, 31, 0x539988u);
    ctx->pc = 0x539984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539980u;
            // 0x539984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539988u; }
        if (ctx->pc != 0x539988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539988u; }
        if (ctx->pc != 0x539988u) { return; }
    }
    ctx->pc = 0x539988u;
label_539988:
    // 0x539988: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x539988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53998c:
    // 0x53998c: 0xc04cc34  jal         func_1330D0
label_539990:
    if (ctx->pc == 0x539990u) {
        ctx->pc = 0x539990u;
            // 0x539990: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x539994u;
        goto label_539994;
    }
    ctx->pc = 0x53998Cu;
    SET_GPR_U32(ctx, 31, 0x539994u);
    ctx->pc = 0x539990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53998Cu;
            // 0x539990: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539994u; }
        if (ctx->pc != 0x539994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539994u; }
        if (ctx->pc != 0x539994u) { return; }
    }
    ctx->pc = 0x539994u;
label_539994:
    // 0x539994: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x539994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_539998:
    // 0x539998: 0xc441d208  lwc1        $f1, -0x2DF8($v0)
    ctx->pc = 0x539998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53999c:
    // 0x53999c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x53999cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5399a0:
    // 0x5399a0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_5399a4:
    if (ctx->pc == 0x5399A4u) {
        ctx->pc = 0x5399A4u;
            // 0x5399a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5399A8u;
        goto label_5399a8;
    }
    ctx->pc = 0x5399A0u;
    {
        const bool branch_taken_0x5399a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5399a0) {
            ctx->pc = 0x5399A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5399A0u;
            // 0x5399a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5399B0u;
            goto label_5399b0;
        }
    }
    ctx->pc = 0x5399A8u;
label_5399a8:
    // 0x5399a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_5399ac:
    if (ctx->pc == 0x5399ACu) {
        ctx->pc = 0x5399ACu;
            // 0x5399ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x5399B0u;
        goto label_5399b0;
    }
    ctx->pc = 0x5399A8u;
    {
        const bool branch_taken_0x5399a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5399ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5399A8u;
            // 0x5399ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5399a8) {
            ctx->pc = 0x5399E8u;
            goto label_5399e8;
        }
    }
    ctx->pc = 0x5399B0u;
label_5399b0:
    // 0x5399b0: 0xc07697c  jal         func_1DA5F0
label_5399b4:
    if (ctx->pc == 0x5399B4u) {
        ctx->pc = 0x5399B8u;
        goto label_5399b8;
    }
    ctx->pc = 0x5399B0u;
    SET_GPR_U32(ctx, 31, 0x5399B8u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5399B8u; }
        if (ctx->pc != 0x5399B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5399B8u; }
        if (ctx->pc != 0x5399B8u) { return; }
    }
    ctx->pc = 0x5399B8u;
label_5399b8:
    // 0x5399b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5399b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5399bc:
    // 0x5399bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x5399bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5399c0:
    // 0x5399c0: 0xc04cd60  jal         func_133580
label_5399c4:
    if (ctx->pc == 0x5399C4u) {
        ctx->pc = 0x5399C4u;
            // 0x5399c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5399C8u;
        goto label_5399c8;
    }
    ctx->pc = 0x5399C0u;
    SET_GPR_U32(ctx, 31, 0x5399C8u);
    ctx->pc = 0x5399C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5399C0u;
            // 0x5399c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5399C8u; }
        if (ctx->pc != 0x5399C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5399C8u; }
        if (ctx->pc != 0x5399C8u) { return; }
    }
    ctx->pc = 0x5399C8u;
label_5399c8:
    // 0x5399c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5399c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5399cc:
    // 0x5399cc: 0xc04c650  jal         func_131940
label_5399d0:
    if (ctx->pc == 0x5399D0u) {
        ctx->pc = 0x5399D0u;
            // 0x5399d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5399D4u;
        goto label_5399d4;
    }
    ctx->pc = 0x5399CCu;
    SET_GPR_U32(ctx, 31, 0x5399D4u);
    ctx->pc = 0x5399D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5399CCu;
            // 0x5399d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5399D4u; }
        if (ctx->pc != 0x5399D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5399D4u; }
        if (ctx->pc != 0x5399D4u) { return; }
    }
    ctx->pc = 0x5399D4u;
label_5399d4:
    // 0x5399d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x5399d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5399d8:
    // 0x5399d8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5399d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5399dc:
    // 0x5399dc: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x5399dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_5399e0:
    // 0x5399e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5399e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5399e4:
    // 0x5399e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x5399e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5399e8:
    // 0x5399e8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x5399e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_5399ec:
    // 0x5399ec: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_5399f0:
    if (ctx->pc == 0x5399F0u) {
        ctx->pc = 0x5399F0u;
            // 0x5399f0: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x5399F4u;
        goto label_5399f4;
    }
    ctx->pc = 0x5399ECu;
    {
        const bool branch_taken_0x5399ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x5399F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5399ECu;
            // 0x5399f0: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5399ec) {
            ctx->pc = 0x539A10u;
            goto label_539a10;
        }
    }
    ctx->pc = 0x5399F4u;
label_5399f4:
    // 0x5399f4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x5399f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_5399f8:
    // 0x5399f8: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_5399fc:
    if (ctx->pc == 0x5399FCu) {
        ctx->pc = 0x5399FCu;
            // 0x5399fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539A00u;
        goto label_539a00;
    }
    ctx->pc = 0x5399F8u;
    {
        const bool branch_taken_0x5399f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5399f8) {
            ctx->pc = 0x5399FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5399F8u;
            // 0x5399fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539AFCu;
            goto label_539afc;
        }
    }
    ctx->pc = 0x539A00u;
label_539a00:
    // 0x539a00: 0xa04000d0  sb          $zero, 0xD0($v0)
    ctx->pc = 0x539a00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 208), (uint8_t)GPR_U32(ctx, 0));
label_539a04:
    // 0x539a04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x539a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_539a08:
    // 0x539a08: 0x1000003c  b           . + 4 + (0x3C << 2)
label_539a0c:
    if (ctx->pc == 0x539A0Cu) {
        ctx->pc = 0x539A10u;
        goto label_539a10;
    }
    ctx->pc = 0x539A08u;
    {
        const bool branch_taken_0x539a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x539a08) {
            ctx->pc = 0x539AFCu;
            goto label_539afc;
        }
    }
    ctx->pc = 0x539A10u;
label_539a10:
    // 0x539a10: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x539a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_539a14:
    // 0x539a14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_539a18:
    if (ctx->pc == 0x539A18u) {
        ctx->pc = 0x539A1Cu;
        goto label_539a1c;
    }
    ctx->pc = 0x539A14u;
    {
        const bool branch_taken_0x539a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x539a14) {
            ctx->pc = 0x539A24u;
            goto label_539a24;
        }
    }
    ctx->pc = 0x539A1Cu;
label_539a1c:
    // 0x539a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x539a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_539a20:
    // 0x539a20: 0xa06200d0  sb          $v0, 0xD0($v1)
    ctx->pc = 0x539a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 208), (uint8_t)GPR_U32(ctx, 2));
label_539a24:
    // 0x539a24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x539a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_539a28:
    // 0x539a28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x539a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_539a2c:
    // 0x539a2c: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x539a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_539a30:
    // 0x539a30: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x539a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_539a34:
    // 0x539a34: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x539a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_539a38:
    // 0x539a38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x539a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_539a3c:
    // 0x539a3c: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x539a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_539a40:
    // 0x539a40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x539a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_539a44:
    // 0x539a44: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x539a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_539a48:
    // 0x539a48: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x539a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_539a4c:
    // 0x539a4c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x539a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_539a50:
    // 0x539a50: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x539a50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_539a54:
    // 0x539a54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x539a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_539a58:
    // 0x539a58: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x539a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_539a5c:
    // 0x539a5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x539a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_539a60:
    // 0x539a60: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x539a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_539a64:
    // 0x539a64: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x539a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_539a68:
    // 0x539a68: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x539a68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_539a6c:
    // 0x539a6c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x539a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_539a70:
    // 0x539a70: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x539a70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_539a74:
    // 0x539a74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x539a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_539a78:
    // 0x539a78: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x539a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_539a7c:
    // 0x539a7c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x539a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_539a80:
    // 0x539a80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x539a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_539a84:
    // 0x539a84: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x539a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_539a88:
    // 0x539a88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x539a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_539a8c:
    // 0x539a8c: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x539a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_539a90:
    // 0x539a90: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x539a90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_539a94:
    // 0x539a94: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x539a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_539a98:
    // 0x539a98: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x539a98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_539a9c:
    // 0x539a9c: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x539a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_539aa0:
    // 0x539aa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x539aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_539aa4:
    // 0x539aa4: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x539aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_539aa8:
    // 0x539aa8: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x539aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_539aac:
    // 0x539aac: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x539aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_539ab0:
    // 0x539ab0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x539ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_539ab4:
    // 0x539ab4: 0xc04e4a4  jal         func_139290
label_539ab8:
    if (ctx->pc == 0x539AB8u) {
        ctx->pc = 0x539AB8u;
            // 0x539ab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539ABCu;
        goto label_539abc;
    }
    ctx->pc = 0x539AB4u;
    SET_GPR_U32(ctx, 31, 0x539ABCu);
    ctx->pc = 0x539AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539AB4u;
            // 0x539ab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539ABCu; }
        if (ctx->pc != 0x539ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539ABCu; }
        if (ctx->pc != 0x539ABCu) { return; }
    }
    ctx->pc = 0x539ABCu;
label_539abc:
    // 0x539abc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x539abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_539ac0:
    // 0x539ac0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x539ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_539ac4:
    // 0x539ac4: 0xc04cd60  jal         func_133580
label_539ac8:
    if (ctx->pc == 0x539AC8u) {
        ctx->pc = 0x539AC8u;
            // 0x539ac8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539ACCu;
        goto label_539acc;
    }
    ctx->pc = 0x539AC4u;
    SET_GPR_U32(ctx, 31, 0x539ACCu);
    ctx->pc = 0x539AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539AC4u;
            // 0x539ac8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539ACCu; }
        if (ctx->pc != 0x539ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539ACCu; }
        if (ctx->pc != 0x539ACCu) { return; }
    }
    ctx->pc = 0x539ACCu;
label_539acc:
    // 0x539acc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x539accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_539ad0:
    // 0x539ad0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x539ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_539ad4:
    // 0x539ad4: 0x320f809  jalr        $t9
label_539ad8:
    if (ctx->pc == 0x539AD8u) {
        ctx->pc = 0x539AD8u;
            // 0x539ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539ADCu;
        goto label_539adc;
    }
    ctx->pc = 0x539AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x539ADCu);
        ctx->pc = 0x539AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539AD4u;
            // 0x539ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x539ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x539ADCu; }
            if (ctx->pc != 0x539ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x539ADCu;
label_539adc:
    // 0x539adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x539adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_539ae0:
    // 0x539ae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x539ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_539ae4:
    // 0x539ae4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x539ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_539ae8:
    // 0x539ae8: 0xc054fd4  jal         func_153F50
label_539aec:
    if (ctx->pc == 0x539AECu) {
        ctx->pc = 0x539AECu;
            // 0x539aec: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539AF0u;
        goto label_539af0;
    }
    ctx->pc = 0x539AE8u;
    SET_GPR_U32(ctx, 31, 0x539AF0u);
    ctx->pc = 0x539AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539AE8u;
            // 0x539aec: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539AF0u; }
        if (ctx->pc != 0x539AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539AF0u; }
        if (ctx->pc != 0x539AF0u) { return; }
    }
    ctx->pc = 0x539AF0u;
label_539af0:
    // 0x539af0: 0x10000002  b           . + 4 + (0x2 << 2)
label_539af4:
    if (ctx->pc == 0x539AF4u) {
        ctx->pc = 0x539AF4u;
            // 0x539af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x539AF8u;
        goto label_539af8;
    }
    ctx->pc = 0x539AF0u;
    {
        const bool branch_taken_0x539af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x539AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539AF0u;
            // 0x539af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539af0) {
            ctx->pc = 0x539AFCu;
            goto label_539afc;
        }
    }
    ctx->pc = 0x539AF8u;
label_539af8:
    // 0x539af8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x539af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_539afc:
    // 0x539afc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x539afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_539b00:
    // 0x539b00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x539b00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_539b04:
    // 0x539b04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x539b04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_539b08:
    // 0x539b08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x539b08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_539b0c:
    // 0x539b0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x539b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_539b10:
    // 0x539b10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x539b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_539b14:
    // 0x539b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x539b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_539b18:
    // 0x539b18: 0x3e00008  jr          $ra
label_539b1c:
    if (ctx->pc == 0x539B1Cu) {
        ctx->pc = 0x539B1Cu;
            // 0x539b1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x539B20u;
        goto label_539b20;
    }
    ctx->pc = 0x539B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x539B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539B18u;
            // 0x539b1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x539B20u;
label_539b20:
    // 0x539b20: 0x3e00008  jr          $ra
label_539b24:
    if (ctx->pc == 0x539B24u) {
        ctx->pc = 0x539B24u;
            // 0x539b24: 0x24025dde  addiu       $v0, $zero, 0x5DDE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24030));
        ctx->pc = 0x539B28u;
        goto label_539b28;
    }
    ctx->pc = 0x539B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x539B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539B20u;
            // 0x539b24: 0x24025dde  addiu       $v0, $zero, 0x5DDE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x539B28u;
label_539b28:
    // 0x539b28: 0x0  nop
    ctx->pc = 0x539b28u;
    // NOP
label_539b2c:
    // 0x539b2c: 0x0  nop
    ctx->pc = 0x539b2cu;
    // NOP
label_539b30:
    // 0x539b30: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x539b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_539b34:
    // 0x539b34: 0x3e00008  jr          $ra
label_539b38:
    if (ctx->pc == 0x539B38u) {
        ctx->pc = 0x539B38u;
            // 0x539b38: 0x2442d1f0  addiu       $v0, $v0, -0x2E10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955504));
        ctx->pc = 0x539B3Cu;
        goto label_539b3c;
    }
    ctx->pc = 0x539B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x539B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539B34u;
            // 0x539b38: 0x2442d1f0  addiu       $v0, $v0, -0x2E10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x539B3Cu;
label_539b3c:
    // 0x539b3c: 0x0  nop
    ctx->pc = 0x539b3cu;
    // NOP
label_539b40:
    // 0x539b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x539b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_539b44:
    // 0x539b44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x539b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_539b48:
    // 0x539b48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x539b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_539b4c:
    // 0x539b4c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x539b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_539b50:
    // 0x539b50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x539b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_539b54:
    // 0x539b54: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x539b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_539b58:
    // 0x539b58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x539b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_539b5c:
    // 0x539b5c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x539b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_539b60:
    // 0x539b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x539b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_539b64:
    // 0x539b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x539b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_539b68:
    // 0x539b68: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x539b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_539b6c:
    // 0x539b6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x539b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_539b70:
    // 0x539b70: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x539b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_539b74:
    // 0x539b74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x539b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_539b78:
    // 0x539b78: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x539b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_539b7c:
    // 0x539b7c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x539b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_539b80:
    // 0x539b80: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x539b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_539b84:
    // 0x539b84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x539b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_539b88:
    // 0x539b88: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x539b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_539b8c:
    // 0x539b8c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x539b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_539b90:
    // 0x539b90: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x539b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_539b94:
    // 0x539b94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x539b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_539b98:
    // 0x539b98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x539b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_539b9c:
    // 0x539b9c: 0xc0a997c  jal         func_2A65F0
label_539ba0:
    if (ctx->pc == 0x539BA0u) {
        ctx->pc = 0x539BA0u;
            // 0x539ba0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x539BA4u;
        goto label_539ba4;
    }
    ctx->pc = 0x539B9Cu;
    SET_GPR_U32(ctx, 31, 0x539BA4u);
    ctx->pc = 0x539BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539B9Cu;
            // 0x539ba0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539BA4u; }
        if (ctx->pc != 0x539BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539BA4u; }
        if (ctx->pc != 0x539BA4u) { return; }
    }
    ctx->pc = 0x539BA4u;
label_539ba4:
    // 0x539ba4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x539ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_539ba8:
    // 0x539ba8: 0xc0d879c  jal         func_361E70
label_539bac:
    if (ctx->pc == 0x539BACu) {
        ctx->pc = 0x539BACu;
            // 0x539bac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539BB0u;
        goto label_539bb0;
    }
    ctx->pc = 0x539BA8u;
    SET_GPR_U32(ctx, 31, 0x539BB0u);
    ctx->pc = 0x539BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539BA8u;
            // 0x539bac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539BB0u; }
        if (ctx->pc != 0x539BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539BB0u; }
        if (ctx->pc != 0x539BB0u) { return; }
    }
    ctx->pc = 0x539BB0u;
label_539bb0:
    // 0x539bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x539bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_539bb4:
    // 0x539bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x539bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_539bb8:
    // 0x539bb8: 0x3e00008  jr          $ra
label_539bbc:
    if (ctx->pc == 0x539BBCu) {
        ctx->pc = 0x539BBCu;
            // 0x539bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x539BC0u;
        goto label_539bc0;
    }
    ctx->pc = 0x539BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x539BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539BB8u;
            // 0x539bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x539BC0u;
label_539bc0:
    // 0x539bc0: 0x814ddcc  j           func_537730
label_539bc4:
    if (ctx->pc == 0x539BC4u) {
        ctx->pc = 0x539BC4u;
            // 0x539bc4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x539BC8u;
        goto label_539bc8;
    }
    ctx->pc = 0x539BC0u;
    ctx->pc = 0x539BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539BC0u;
            // 0x539bc4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x537730u;
    {
        auto targetFn = runtime->lookupFunction(0x537730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x539BC8u;
label_539bc8:
    // 0x539bc8: 0x0  nop
    ctx->pc = 0x539bc8u;
    // NOP
label_539bcc:
    // 0x539bcc: 0x0  nop
    ctx->pc = 0x539bccu;
    // NOP
label_539bd0:
    // 0x539bd0: 0x814e064  j           func_538190
label_539bd4:
    if (ctx->pc == 0x539BD4u) {
        ctx->pc = 0x539BD4u;
            // 0x539bd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x539BD8u;
        goto label_539bd8;
    }
    ctx->pc = 0x539BD0u;
    ctx->pc = 0x539BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539BD0u;
            // 0x539bd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x538190u;
    {
        auto targetFn = runtime->lookupFunction(0x538190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x539BD8u;
label_539bd8:
    // 0x539bd8: 0x0  nop
    ctx->pc = 0x539bd8u;
    // NOP
label_539bdc:
    // 0x539bdc: 0x0  nop
    ctx->pc = 0x539bdcu;
    // NOP
label_539be0:
    // 0x539be0: 0x814dd1c  j           func_537470
label_539be4:
    if (ctx->pc == 0x539BE4u) {
        ctx->pc = 0x539BE4u;
            // 0x539be4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x539BE8u;
        goto label_539be8;
    }
    ctx->pc = 0x539BE0u;
    ctx->pc = 0x539BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539BE0u;
            // 0x539be4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x537470u;
    {
        auto targetFn = runtime->lookupFunction(0x537470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x539BE8u;
label_539be8:
    // 0x539be8: 0x0  nop
    ctx->pc = 0x539be8u;
    // NOP
label_539bec:
    // 0x539bec: 0x0  nop
    ctx->pc = 0x539becu;
    // NOP
label_539bf0:
    // 0x539bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x539bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_539bf4:
    // 0x539bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x539bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_539bf8:
    // 0x539bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x539bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_539bfc:
    // 0x539bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x539bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_539c00:
    // 0x539c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x539c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_539c04:
    // 0x539c04: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_539c08:
    if (ctx->pc == 0x539C08u) {
        ctx->pc = 0x539C08u;
            // 0x539c08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539C0Cu;
        goto label_539c0c;
    }
    ctx->pc = 0x539C04u;
    {
        const bool branch_taken_0x539c04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x539C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539C04u;
            // 0x539c08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539c04) {
            ctx->pc = 0x539C60u;
            goto label_539c60;
        }
    }
    ctx->pc = 0x539C0Cu;
label_539c0c:
    // 0x539c0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x539c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_539c10:
    // 0x539c10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x539c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_539c14:
    // 0x539c14: 0x24637160  addiu       $v1, $v1, 0x7160
    ctx->pc = 0x539c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29024));
label_539c18:
    // 0x539c18: 0x24427198  addiu       $v0, $v0, 0x7198
    ctx->pc = 0x539c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29080));
label_539c1c:
    // 0x539c1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x539c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_539c20:
    // 0x539c20: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_539c24:
    if (ctx->pc == 0x539C24u) {
        ctx->pc = 0x539C24u;
            // 0x539c24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x539C28u;
        goto label_539c28;
    }
    ctx->pc = 0x539C20u;
    {
        const bool branch_taken_0x539c20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x539C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539C20u;
            // 0x539c24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539c20) {
            ctx->pc = 0x539C48u;
            goto label_539c48;
        }
    }
    ctx->pc = 0x539C28u;
label_539c28:
    // 0x539c28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x539c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_539c2c:
    // 0x539c2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x539c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_539c30:
    // 0x539c30: 0x24637210  addiu       $v1, $v1, 0x7210
    ctx->pc = 0x539c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29200));
label_539c34:
    // 0x539c34: 0x24427248  addiu       $v0, $v0, 0x7248
    ctx->pc = 0x539c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29256));
label_539c38:
    // 0x539c38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x539c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_539c3c:
    // 0x539c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x539c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_539c40:
    // 0x539c40: 0xc14e720  jal         func_539C80
label_539c44:
    if (ctx->pc == 0x539C44u) {
        ctx->pc = 0x539C44u;
            // 0x539c44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x539C48u;
        goto label_539c48;
    }
    ctx->pc = 0x539C40u;
    SET_GPR_U32(ctx, 31, 0x539C48u);
    ctx->pc = 0x539C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539C40u;
            // 0x539c44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x539C80u;
    if (runtime->hasFunction(0x539C80u)) {
        auto targetFn = runtime->lookupFunction(0x539C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539C48u; }
        if (ctx->pc != 0x539C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00539C80_0x539c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539C48u; }
        if (ctx->pc != 0x539C48u) { return; }
    }
    ctx->pc = 0x539C48u;
label_539c48:
    // 0x539c48: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x539c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_539c4c:
    // 0x539c4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x539c4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_539c50:
    // 0x539c50: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_539c54:
    if (ctx->pc == 0x539C54u) {
        ctx->pc = 0x539C54u;
            // 0x539c54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539C58u;
        goto label_539c58;
    }
    ctx->pc = 0x539C50u;
    {
        const bool branch_taken_0x539c50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x539c50) {
            ctx->pc = 0x539C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539C50u;
            // 0x539c54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539C64u;
            goto label_539c64;
        }
    }
    ctx->pc = 0x539C58u;
label_539c58:
    // 0x539c58: 0xc0400a8  jal         func_1002A0
label_539c5c:
    if (ctx->pc == 0x539C5Cu) {
        ctx->pc = 0x539C5Cu;
            // 0x539c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x539C60u;
        goto label_539c60;
    }
    ctx->pc = 0x539C58u;
    SET_GPR_U32(ctx, 31, 0x539C60u);
    ctx->pc = 0x539C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539C58u;
            // 0x539c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539C60u; }
        if (ctx->pc != 0x539C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539C60u; }
        if (ctx->pc != 0x539C60u) { return; }
    }
    ctx->pc = 0x539C60u;
label_539c60:
    // 0x539c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x539c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_539c64:
    // 0x539c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x539c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_539c68:
    // 0x539c68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x539c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_539c6c:
    // 0x539c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x539c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_539c70:
    // 0x539c70: 0x3e00008  jr          $ra
label_539c74:
    if (ctx->pc == 0x539C74u) {
        ctx->pc = 0x539C74u;
            // 0x539c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x539C78u;
        goto label_539c78;
    }
    ctx->pc = 0x539C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x539C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539C70u;
            // 0x539c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x539C78u;
label_539c78:
    // 0x539c78: 0x0  nop
    ctx->pc = 0x539c78u;
    // NOP
label_539c7c:
    // 0x539c7c: 0x0  nop
    ctx->pc = 0x539c7cu;
    // NOP
}
