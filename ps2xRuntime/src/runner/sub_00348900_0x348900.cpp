#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348900
// Address: 0x348900 - 0x348bb0
void sub_00348900_0x348900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348900_0x348900");
#endif

    switch (ctx->pc) {
        case 0x348900u: goto label_348900;
        case 0x348904u: goto label_348904;
        case 0x348908u: goto label_348908;
        case 0x34890cu: goto label_34890c;
        case 0x348910u: goto label_348910;
        case 0x348914u: goto label_348914;
        case 0x348918u: goto label_348918;
        case 0x34891cu: goto label_34891c;
        case 0x348920u: goto label_348920;
        case 0x348924u: goto label_348924;
        case 0x348928u: goto label_348928;
        case 0x34892cu: goto label_34892c;
        case 0x348930u: goto label_348930;
        case 0x348934u: goto label_348934;
        case 0x348938u: goto label_348938;
        case 0x34893cu: goto label_34893c;
        case 0x348940u: goto label_348940;
        case 0x348944u: goto label_348944;
        case 0x348948u: goto label_348948;
        case 0x34894cu: goto label_34894c;
        case 0x348950u: goto label_348950;
        case 0x348954u: goto label_348954;
        case 0x348958u: goto label_348958;
        case 0x34895cu: goto label_34895c;
        case 0x348960u: goto label_348960;
        case 0x348964u: goto label_348964;
        case 0x348968u: goto label_348968;
        case 0x34896cu: goto label_34896c;
        case 0x348970u: goto label_348970;
        case 0x348974u: goto label_348974;
        case 0x348978u: goto label_348978;
        case 0x34897cu: goto label_34897c;
        case 0x348980u: goto label_348980;
        case 0x348984u: goto label_348984;
        case 0x348988u: goto label_348988;
        case 0x34898cu: goto label_34898c;
        case 0x348990u: goto label_348990;
        case 0x348994u: goto label_348994;
        case 0x348998u: goto label_348998;
        case 0x34899cu: goto label_34899c;
        case 0x3489a0u: goto label_3489a0;
        case 0x3489a4u: goto label_3489a4;
        case 0x3489a8u: goto label_3489a8;
        case 0x3489acu: goto label_3489ac;
        case 0x3489b0u: goto label_3489b0;
        case 0x3489b4u: goto label_3489b4;
        case 0x3489b8u: goto label_3489b8;
        case 0x3489bcu: goto label_3489bc;
        case 0x3489c0u: goto label_3489c0;
        case 0x3489c4u: goto label_3489c4;
        case 0x3489c8u: goto label_3489c8;
        case 0x3489ccu: goto label_3489cc;
        case 0x3489d0u: goto label_3489d0;
        case 0x3489d4u: goto label_3489d4;
        case 0x3489d8u: goto label_3489d8;
        case 0x3489dcu: goto label_3489dc;
        case 0x3489e0u: goto label_3489e0;
        case 0x3489e4u: goto label_3489e4;
        case 0x3489e8u: goto label_3489e8;
        case 0x3489ecu: goto label_3489ec;
        case 0x3489f0u: goto label_3489f0;
        case 0x3489f4u: goto label_3489f4;
        case 0x3489f8u: goto label_3489f8;
        case 0x3489fcu: goto label_3489fc;
        case 0x348a00u: goto label_348a00;
        case 0x348a04u: goto label_348a04;
        case 0x348a08u: goto label_348a08;
        case 0x348a0cu: goto label_348a0c;
        case 0x348a10u: goto label_348a10;
        case 0x348a14u: goto label_348a14;
        case 0x348a18u: goto label_348a18;
        case 0x348a1cu: goto label_348a1c;
        case 0x348a20u: goto label_348a20;
        case 0x348a24u: goto label_348a24;
        case 0x348a28u: goto label_348a28;
        case 0x348a2cu: goto label_348a2c;
        case 0x348a30u: goto label_348a30;
        case 0x348a34u: goto label_348a34;
        case 0x348a38u: goto label_348a38;
        case 0x348a3cu: goto label_348a3c;
        case 0x348a40u: goto label_348a40;
        case 0x348a44u: goto label_348a44;
        case 0x348a48u: goto label_348a48;
        case 0x348a4cu: goto label_348a4c;
        case 0x348a50u: goto label_348a50;
        case 0x348a54u: goto label_348a54;
        case 0x348a58u: goto label_348a58;
        case 0x348a5cu: goto label_348a5c;
        case 0x348a60u: goto label_348a60;
        case 0x348a64u: goto label_348a64;
        case 0x348a68u: goto label_348a68;
        case 0x348a6cu: goto label_348a6c;
        case 0x348a70u: goto label_348a70;
        case 0x348a74u: goto label_348a74;
        case 0x348a78u: goto label_348a78;
        case 0x348a7cu: goto label_348a7c;
        case 0x348a80u: goto label_348a80;
        case 0x348a84u: goto label_348a84;
        case 0x348a88u: goto label_348a88;
        case 0x348a8cu: goto label_348a8c;
        case 0x348a90u: goto label_348a90;
        case 0x348a94u: goto label_348a94;
        case 0x348a98u: goto label_348a98;
        case 0x348a9cu: goto label_348a9c;
        case 0x348aa0u: goto label_348aa0;
        case 0x348aa4u: goto label_348aa4;
        case 0x348aa8u: goto label_348aa8;
        case 0x348aacu: goto label_348aac;
        case 0x348ab0u: goto label_348ab0;
        case 0x348ab4u: goto label_348ab4;
        case 0x348ab8u: goto label_348ab8;
        case 0x348abcu: goto label_348abc;
        case 0x348ac0u: goto label_348ac0;
        case 0x348ac4u: goto label_348ac4;
        case 0x348ac8u: goto label_348ac8;
        case 0x348accu: goto label_348acc;
        case 0x348ad0u: goto label_348ad0;
        case 0x348ad4u: goto label_348ad4;
        case 0x348ad8u: goto label_348ad8;
        case 0x348adcu: goto label_348adc;
        case 0x348ae0u: goto label_348ae0;
        case 0x348ae4u: goto label_348ae4;
        case 0x348ae8u: goto label_348ae8;
        case 0x348aecu: goto label_348aec;
        case 0x348af0u: goto label_348af0;
        case 0x348af4u: goto label_348af4;
        case 0x348af8u: goto label_348af8;
        case 0x348afcu: goto label_348afc;
        case 0x348b00u: goto label_348b00;
        case 0x348b04u: goto label_348b04;
        case 0x348b08u: goto label_348b08;
        case 0x348b0cu: goto label_348b0c;
        case 0x348b10u: goto label_348b10;
        case 0x348b14u: goto label_348b14;
        case 0x348b18u: goto label_348b18;
        case 0x348b1cu: goto label_348b1c;
        case 0x348b20u: goto label_348b20;
        case 0x348b24u: goto label_348b24;
        case 0x348b28u: goto label_348b28;
        case 0x348b2cu: goto label_348b2c;
        case 0x348b30u: goto label_348b30;
        case 0x348b34u: goto label_348b34;
        case 0x348b38u: goto label_348b38;
        case 0x348b3cu: goto label_348b3c;
        case 0x348b40u: goto label_348b40;
        case 0x348b44u: goto label_348b44;
        case 0x348b48u: goto label_348b48;
        case 0x348b4cu: goto label_348b4c;
        case 0x348b50u: goto label_348b50;
        case 0x348b54u: goto label_348b54;
        case 0x348b58u: goto label_348b58;
        case 0x348b5cu: goto label_348b5c;
        case 0x348b60u: goto label_348b60;
        case 0x348b64u: goto label_348b64;
        case 0x348b68u: goto label_348b68;
        case 0x348b6cu: goto label_348b6c;
        case 0x348b70u: goto label_348b70;
        case 0x348b74u: goto label_348b74;
        case 0x348b78u: goto label_348b78;
        case 0x348b7cu: goto label_348b7c;
        case 0x348b80u: goto label_348b80;
        case 0x348b84u: goto label_348b84;
        case 0x348b88u: goto label_348b88;
        case 0x348b8cu: goto label_348b8c;
        case 0x348b90u: goto label_348b90;
        case 0x348b94u: goto label_348b94;
        case 0x348b98u: goto label_348b98;
        case 0x348b9cu: goto label_348b9c;
        case 0x348ba0u: goto label_348ba0;
        case 0x348ba4u: goto label_348ba4;
        case 0x348ba8u: goto label_348ba8;
        case 0x348bacu: goto label_348bac;
        default: break;
    }

    ctx->pc = 0x348900u;

label_348900:
    // 0x348900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x348900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_348904:
    // 0x348904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x348904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_348908:
    // 0x348908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34890c:
    // 0x34890c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_348910:
    // 0x348910: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x348910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348914:
    // 0x348914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_348918:
    // 0x348918: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x348918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_34891c:
    // 0x34891c: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x34891cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_348920:
    // 0x348920: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x348920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_348924:
    // 0x348924: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x348924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_348928:
    // 0x348928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x348928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34892c:
    // 0x34892c: 0xc0d25ec  jal         func_3497B0
label_348930:
    if (ctx->pc == 0x348930u) {
        ctx->pc = 0x348930u;
            // 0x348930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348934u;
        goto label_348934;
    }
    ctx->pc = 0x34892Cu;
    SET_GPR_U32(ctx, 31, 0x348934u);
    ctx->pc = 0x348930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34892Cu;
            // 0x348930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3497B0u;
    if (runtime->hasFunction(0x3497B0u)) {
        auto targetFn = runtime->lookupFunction(0x3497B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348934u; }
        if (ctx->pc != 0x348934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003497B0_0x3497b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348934u; }
        if (ctx->pc != 0x348934u) { return; }
    }
    ctx->pc = 0x348934u;
label_348934:
    // 0x348934: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x348934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_348938:
    // 0x348938: 0x26100240  addiu       $s0, $s0, 0x240
    ctx->pc = 0x348938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
label_34893c:
    // 0x34893c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_348940:
    if (ctx->pc == 0x348940u) {
        ctx->pc = 0x348944u;
        goto label_348944;
    }
    ctx->pc = 0x34893Cu;
    {
        const bool branch_taken_0x34893c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x34893c) {
            ctx->pc = 0x348928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_348928;
        }
    }
    ctx->pc = 0x348944u;
label_348944:
    // 0x348944: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x348944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_348948:
    // 0x348948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34894c:
    // 0x34894c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34894cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_348950:
    // 0x348950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_348954:
    // 0x348954: 0x3e00008  jr          $ra
label_348958:
    if (ctx->pc == 0x348958u) {
        ctx->pc = 0x348958u;
            // 0x348958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x34895Cu;
        goto label_34895c;
    }
    ctx->pc = 0x348954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348954u;
            // 0x348958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34895Cu;
label_34895c:
    // 0x34895c: 0x0  nop
    ctx->pc = 0x34895cu;
    // NOP
label_348960:
    // 0x348960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x348960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_348964:
    // 0x348964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x348964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_348968:
    // 0x348968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x348968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_34896c:
    // 0x34896c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_348970:
    // 0x348970: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x348970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348974:
    // 0x348974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_348978:
    // 0x348978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34897c:
    // 0x34897c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34897cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_348980:
    // 0x348980: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x348980u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_348984:
    // 0x348984: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_348988:
    if (ctx->pc == 0x348988u) {
        ctx->pc = 0x348988u;
            // 0x348988: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34898Cu;
        goto label_34898c;
    }
    ctx->pc = 0x348984u;
    {
        const bool branch_taken_0x348984 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x348988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348984u;
            // 0x348988: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348984) {
            ctx->pc = 0x3489C8u;
            goto label_3489c8;
        }
    }
    ctx->pc = 0x34898Cu;
label_34898c:
    // 0x34898c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34898cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348990:
    // 0x348990: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x348990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348994:
    // 0x348994: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x348994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348998:
    // 0x348998: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x348998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_34899c:
    // 0x34899c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3489a0:
    // 0x3489a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3489a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3489a4:
    // 0x3489a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3489a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3489a8:
    // 0x3489a8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3489a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3489ac:
    // 0x3489ac: 0x320f809  jalr        $t9
label_3489b0:
    if (ctx->pc == 0x3489B0u) {
        ctx->pc = 0x3489B4u;
        goto label_3489b4;
    }
    ctx->pc = 0x3489ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3489B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3489B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3489B4u; }
            if (ctx->pc != 0x3489B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3489B4u;
label_3489b4:
    // 0x3489b4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3489b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3489b8:
    // 0x3489b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3489b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3489bc:
    // 0x3489bc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3489bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3489c0:
    // 0x3489c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3489c4:
    if (ctx->pc == 0x3489C4u) {
        ctx->pc = 0x3489C4u;
            // 0x3489c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3489C8u;
        goto label_3489c8;
    }
    ctx->pc = 0x3489C0u;
    {
        const bool branch_taken_0x3489c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3489C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3489C0u;
            // 0x3489c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3489c0) {
            ctx->pc = 0x348998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_348998;
        }
    }
    ctx->pc = 0x3489C8u;
label_3489c8:
    // 0x3489c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3489c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3489cc:
    // 0x3489cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3489ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3489d0:
    // 0x3489d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3489d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3489d4:
    // 0x3489d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3489d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3489d8:
    // 0x3489d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3489d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3489dc:
    // 0x3489dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3489dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3489e0:
    // 0x3489e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3489e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3489e4:
    // 0x3489e4: 0x3e00008  jr          $ra
label_3489e8:
    if (ctx->pc == 0x3489E8u) {
        ctx->pc = 0x3489E8u;
            // 0x3489e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3489ECu;
        goto label_3489ec;
    }
    ctx->pc = 0x3489E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3489E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3489E4u;
            // 0x3489e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3489ECu;
label_3489ec:
    // 0x3489ec: 0x0  nop
    ctx->pc = 0x3489ecu;
    // NOP
label_3489f0:
    // 0x3489f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3489f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3489f4:
    // 0x3489f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3489f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3489f8:
    // 0x3489f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3489f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3489fc:
    // 0x3489fc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3489fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_348a00:
    // 0x348a00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_348a04:
    // 0x348a04: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x348a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_348a08:
    // 0x348a08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x348a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_348a0c:
    // 0x348a0c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x348a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_348a10:
    // 0x348a10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x348a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_348a14:
    // 0x348a14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x348a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_348a18:
    // 0x348a18: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x348a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_348a1c:
    // 0x348a1c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x348a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348a20:
    // 0x348a20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x348a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_348a24:
    // 0x348a24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x348a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_348a28:
    // 0x348a28: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x348a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_348a2c:
    // 0x348a2c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x348a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_348a30:
    // 0x348a30: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x348a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_348a34:
    // 0x348a34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x348a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_348a38:
    // 0x348a38: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x348a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_348a3c:
    // 0x348a3c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x348a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_348a40:
    // 0x348a40: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x348a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_348a44:
    // 0x348a44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x348a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_348a48:
    // 0x348a48: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x348a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_348a4c:
    // 0x348a4c: 0xc0a997c  jal         func_2A65F0
label_348a50:
    if (ctx->pc == 0x348A50u) {
        ctx->pc = 0x348A50u;
            // 0x348a50: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x348A54u;
        goto label_348a54;
    }
    ctx->pc = 0x348A4Cu;
    SET_GPR_U32(ctx, 31, 0x348A54u);
    ctx->pc = 0x348A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348A4Cu;
            // 0x348a50: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348A54u; }
        if (ctx->pc != 0x348A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348A54u; }
        if (ctx->pc != 0x348A54u) { return; }
    }
    ctx->pc = 0x348A54u;
label_348a54:
    // 0x348a54: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x348a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_348a58:
    // 0x348a58: 0xc0d879c  jal         func_361E70
label_348a5c:
    if (ctx->pc == 0x348A5Cu) {
        ctx->pc = 0x348A5Cu;
            // 0x348a5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348A60u;
        goto label_348a60;
    }
    ctx->pc = 0x348A58u;
    SET_GPR_U32(ctx, 31, 0x348A60u);
    ctx->pc = 0x348A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348A58u;
            // 0x348a5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348A60u; }
        if (ctx->pc != 0x348A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348A60u; }
        if (ctx->pc != 0x348A60u) { return; }
    }
    ctx->pc = 0x348A60u;
label_348a60:
    // 0x348a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348a64:
    // 0x348a64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_348a68:
    // 0x348a68: 0x3e00008  jr          $ra
label_348a6c:
    if (ctx->pc == 0x348A6Cu) {
        ctx->pc = 0x348A6Cu;
            // 0x348a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x348A70u;
        goto label_348a70;
    }
    ctx->pc = 0x348A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348A68u;
            // 0x348a6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348A70u;
label_348a70:
    // 0x348a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_348a74:
    // 0x348a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_348a78:
    // 0x348a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_348a7c:
    // 0x348a7c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x348a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_348a80:
    // 0x348a80: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_348a84:
    if (ctx->pc == 0x348A84u) {
        ctx->pc = 0x348A84u;
            // 0x348a84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348A88u;
        goto label_348a88;
    }
    ctx->pc = 0x348A80u;
    {
        const bool branch_taken_0x348a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x348A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348A80u;
            // 0x348a84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348a80) {
            ctx->pc = 0x348BA0u;
            goto label_348ba0;
        }
    }
    ctx->pc = 0x348A88u;
label_348a88:
    // 0x348a88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x348a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_348a8c:
    // 0x348a8c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x348a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_348a90:
    // 0x348a90: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x348a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_348a94:
    // 0x348a94: 0xc075128  jal         func_1D44A0
label_348a98:
    if (ctx->pc == 0x348A98u) {
        ctx->pc = 0x348A98u;
            // 0x348a98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x348A9Cu;
        goto label_348a9c;
    }
    ctx->pc = 0x348A94u;
    SET_GPR_U32(ctx, 31, 0x348A9Cu);
    ctx->pc = 0x348A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348A94u;
            // 0x348a98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348A9Cu; }
        if (ctx->pc != 0x348A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348A9Cu; }
        if (ctx->pc != 0x348A9Cu) { return; }
    }
    ctx->pc = 0x348A9Cu;
label_348a9c:
    // 0x348a9c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x348a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_348aa0:
    // 0x348aa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x348aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_348aa4:
    // 0x348aa4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x348aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_348aa8:
    // 0x348aa8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x348aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_348aac:
    // 0x348aac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x348aacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_348ab0:
    // 0x348ab0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_348ab4:
    if (ctx->pc == 0x348AB4u) {
        ctx->pc = 0x348AB4u;
            // 0x348ab4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x348AB8u;
        goto label_348ab8;
    }
    ctx->pc = 0x348AB0u;
    {
        const bool branch_taken_0x348ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x348AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348AB0u;
            // 0x348ab4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ab0) {
            ctx->pc = 0x348AC0u;
            goto label_348ac0;
        }
    }
    ctx->pc = 0x348AB8u;
label_348ab8:
    // 0x348ab8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x348ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_348abc:
    // 0x348abc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x348abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_348ac0:
    // 0x348ac0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x348ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_348ac4:
    // 0x348ac4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x348ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_348ac8:
    // 0x348ac8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x348ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_348acc:
    // 0x348acc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x348accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_348ad0:
    // 0x348ad0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x348ad0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_348ad4:
    // 0x348ad4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_348ad8:
    if (ctx->pc == 0x348AD8u) {
        ctx->pc = 0x348AD8u;
            // 0x348ad8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x348ADCu;
        goto label_348adc;
    }
    ctx->pc = 0x348AD4u;
    {
        const bool branch_taken_0x348ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x348ad4) {
            ctx->pc = 0x348AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348AD4u;
            // 0x348ad8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x348AE8u;
            goto label_348ae8;
        }
    }
    ctx->pc = 0x348ADCu;
label_348adc:
    // 0x348adc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x348adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_348ae0:
    // 0x348ae0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x348ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_348ae4:
    // 0x348ae4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x348ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_348ae8:
    // 0x348ae8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x348ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_348aec:
    // 0x348aec: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x348aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_348af0:
    // 0x348af0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x348af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_348af4:
    // 0x348af4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x348af4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_348af8:
    // 0x348af8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_348afc:
    if (ctx->pc == 0x348AFCu) {
        ctx->pc = 0x348AFCu;
            // 0x348afc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x348B00u;
        goto label_348b00;
    }
    ctx->pc = 0x348AF8u;
    {
        const bool branch_taken_0x348af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x348af8) {
            ctx->pc = 0x348AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348AF8u;
            // 0x348afc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x348B0Cu;
            goto label_348b0c;
        }
    }
    ctx->pc = 0x348B00u;
label_348b00:
    // 0x348b00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x348b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_348b04:
    // 0x348b04: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x348b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_348b08:
    // 0x348b08: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x348b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_348b0c:
    // 0x348b0c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x348b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_348b10:
    // 0x348b10: 0x320f809  jalr        $t9
label_348b14:
    if (ctx->pc == 0x348B14u) {
        ctx->pc = 0x348B14u;
            // 0x348b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348B18u;
        goto label_348b18;
    }
    ctx->pc = 0x348B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348B18u);
        ctx->pc = 0x348B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348B10u;
            // 0x348b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x348B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x348B18u; }
            if (ctx->pc != 0x348B18u) { return; }
        }
        }
    }
    ctx->pc = 0x348B18u;
label_348b18:
    // 0x348b18: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x348b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_348b1c:
    // 0x348b1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x348b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_348b20:
    // 0x348b20: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x348b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_348b24:
    // 0x348b24: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x348b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_348b28:
    // 0x348b28: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x348b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_348b2c:
    // 0x348b2c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x348b2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_348b30:
    // 0x348b30: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_348b34:
    if (ctx->pc == 0x348B34u) {
        ctx->pc = 0x348B34u;
            // 0x348b34: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x348B38u;
        goto label_348b38;
    }
    ctx->pc = 0x348B30u;
    {
        const bool branch_taken_0x348b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x348b30) {
            ctx->pc = 0x348B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348B30u;
            // 0x348b34: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x348B44u;
            goto label_348b44;
        }
    }
    ctx->pc = 0x348B38u;
label_348b38:
    // 0x348b38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x348b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_348b3c:
    // 0x348b3c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x348b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_348b40:
    // 0x348b40: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x348b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_348b44:
    // 0x348b44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x348b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_348b48:
    // 0x348b48: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x348b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_348b4c:
    // 0x348b4c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x348b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_348b50:
    // 0x348b50: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x348b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_348b54:
    // 0x348b54: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x348b54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_348b58:
    // 0x348b58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_348b5c:
    if (ctx->pc == 0x348B5Cu) {
        ctx->pc = 0x348B60u;
        goto label_348b60;
    }
    ctx->pc = 0x348B58u;
    {
        const bool branch_taken_0x348b58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x348b58) {
            ctx->pc = 0x348B68u;
            goto label_348b68;
        }
    }
    ctx->pc = 0x348B60u;
label_348b60:
    // 0x348b60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x348b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_348b64:
    // 0x348b64: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x348b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_348b68:
    // 0x348b68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x348b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_348b6c:
    // 0x348b6c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x348b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_348b70:
    // 0x348b70: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x348b70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_348b74:
    // 0x348b74: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_348b78:
    if (ctx->pc == 0x348B78u) {
        ctx->pc = 0x348B7Cu;
        goto label_348b7c;
    }
    ctx->pc = 0x348B74u;
    {
        const bool branch_taken_0x348b74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x348b74) {
            ctx->pc = 0x348B84u;
            goto label_348b84;
        }
    }
    ctx->pc = 0x348B7Cu;
label_348b7c:
    // 0x348b7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x348b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_348b80:
    // 0x348b80: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x348b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_348b84:
    // 0x348b84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x348b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_348b88:
    // 0x348b88: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x348b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_348b8c:
    // 0x348b8c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x348b8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_348b90:
    // 0x348b90: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_348b94:
    if (ctx->pc == 0x348B94u) {
        ctx->pc = 0x348B94u;
            // 0x348b94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x348B98u;
        goto label_348b98;
    }
    ctx->pc = 0x348B90u;
    {
        const bool branch_taken_0x348b90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x348b90) {
            ctx->pc = 0x348B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348B90u;
            // 0x348b94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x348BA4u;
            goto label_348ba4;
        }
    }
    ctx->pc = 0x348B98u;
label_348b98:
    // 0x348b98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x348b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_348b9c:
    // 0x348b9c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x348b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_348ba0:
    // 0x348ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348ba4:
    // 0x348ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_348ba8:
    // 0x348ba8: 0x3e00008  jr          $ra
label_348bac:
    if (ctx->pc == 0x348BACu) {
        ctx->pc = 0x348BACu;
            // 0x348bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x348BB0u;
        goto label_fallthrough_0x348ba8;
    }
    ctx->pc = 0x348BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348BA8u;
            // 0x348bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x348ba8:
    ctx->pc = 0x348BB0u;
}
