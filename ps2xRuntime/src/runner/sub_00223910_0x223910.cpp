#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223910
// Address: 0x223910 - 0x223bd0
void sub_00223910_0x223910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223910_0x223910");
#endif

    switch (ctx->pc) {
        case 0x223910u: goto label_223910;
        case 0x223914u: goto label_223914;
        case 0x223918u: goto label_223918;
        case 0x22391cu: goto label_22391c;
        case 0x223920u: goto label_223920;
        case 0x223924u: goto label_223924;
        case 0x223928u: goto label_223928;
        case 0x22392cu: goto label_22392c;
        case 0x223930u: goto label_223930;
        case 0x223934u: goto label_223934;
        case 0x223938u: goto label_223938;
        case 0x22393cu: goto label_22393c;
        case 0x223940u: goto label_223940;
        case 0x223944u: goto label_223944;
        case 0x223948u: goto label_223948;
        case 0x22394cu: goto label_22394c;
        case 0x223950u: goto label_223950;
        case 0x223954u: goto label_223954;
        case 0x223958u: goto label_223958;
        case 0x22395cu: goto label_22395c;
        case 0x223960u: goto label_223960;
        case 0x223964u: goto label_223964;
        case 0x223968u: goto label_223968;
        case 0x22396cu: goto label_22396c;
        case 0x223970u: goto label_223970;
        case 0x223974u: goto label_223974;
        case 0x223978u: goto label_223978;
        case 0x22397cu: goto label_22397c;
        case 0x223980u: goto label_223980;
        case 0x223984u: goto label_223984;
        case 0x223988u: goto label_223988;
        case 0x22398cu: goto label_22398c;
        case 0x223990u: goto label_223990;
        case 0x223994u: goto label_223994;
        case 0x223998u: goto label_223998;
        case 0x22399cu: goto label_22399c;
        case 0x2239a0u: goto label_2239a0;
        case 0x2239a4u: goto label_2239a4;
        case 0x2239a8u: goto label_2239a8;
        case 0x2239acu: goto label_2239ac;
        case 0x2239b0u: goto label_2239b0;
        case 0x2239b4u: goto label_2239b4;
        case 0x2239b8u: goto label_2239b8;
        case 0x2239bcu: goto label_2239bc;
        case 0x2239c0u: goto label_2239c0;
        case 0x2239c4u: goto label_2239c4;
        case 0x2239c8u: goto label_2239c8;
        case 0x2239ccu: goto label_2239cc;
        case 0x2239d0u: goto label_2239d0;
        case 0x2239d4u: goto label_2239d4;
        case 0x2239d8u: goto label_2239d8;
        case 0x2239dcu: goto label_2239dc;
        case 0x2239e0u: goto label_2239e0;
        case 0x2239e4u: goto label_2239e4;
        case 0x2239e8u: goto label_2239e8;
        case 0x2239ecu: goto label_2239ec;
        case 0x2239f0u: goto label_2239f0;
        case 0x2239f4u: goto label_2239f4;
        case 0x2239f8u: goto label_2239f8;
        case 0x2239fcu: goto label_2239fc;
        case 0x223a00u: goto label_223a00;
        case 0x223a04u: goto label_223a04;
        case 0x223a08u: goto label_223a08;
        case 0x223a0cu: goto label_223a0c;
        case 0x223a10u: goto label_223a10;
        case 0x223a14u: goto label_223a14;
        case 0x223a18u: goto label_223a18;
        case 0x223a1cu: goto label_223a1c;
        case 0x223a20u: goto label_223a20;
        case 0x223a24u: goto label_223a24;
        case 0x223a28u: goto label_223a28;
        case 0x223a2cu: goto label_223a2c;
        case 0x223a30u: goto label_223a30;
        case 0x223a34u: goto label_223a34;
        case 0x223a38u: goto label_223a38;
        case 0x223a3cu: goto label_223a3c;
        case 0x223a40u: goto label_223a40;
        case 0x223a44u: goto label_223a44;
        case 0x223a48u: goto label_223a48;
        case 0x223a4cu: goto label_223a4c;
        case 0x223a50u: goto label_223a50;
        case 0x223a54u: goto label_223a54;
        case 0x223a58u: goto label_223a58;
        case 0x223a5cu: goto label_223a5c;
        case 0x223a60u: goto label_223a60;
        case 0x223a64u: goto label_223a64;
        case 0x223a68u: goto label_223a68;
        case 0x223a6cu: goto label_223a6c;
        case 0x223a70u: goto label_223a70;
        case 0x223a74u: goto label_223a74;
        case 0x223a78u: goto label_223a78;
        case 0x223a7cu: goto label_223a7c;
        case 0x223a80u: goto label_223a80;
        case 0x223a84u: goto label_223a84;
        case 0x223a88u: goto label_223a88;
        case 0x223a8cu: goto label_223a8c;
        case 0x223a90u: goto label_223a90;
        case 0x223a94u: goto label_223a94;
        case 0x223a98u: goto label_223a98;
        case 0x223a9cu: goto label_223a9c;
        case 0x223aa0u: goto label_223aa0;
        case 0x223aa4u: goto label_223aa4;
        case 0x223aa8u: goto label_223aa8;
        case 0x223aacu: goto label_223aac;
        case 0x223ab0u: goto label_223ab0;
        case 0x223ab4u: goto label_223ab4;
        case 0x223ab8u: goto label_223ab8;
        case 0x223abcu: goto label_223abc;
        case 0x223ac0u: goto label_223ac0;
        case 0x223ac4u: goto label_223ac4;
        case 0x223ac8u: goto label_223ac8;
        case 0x223accu: goto label_223acc;
        case 0x223ad0u: goto label_223ad0;
        case 0x223ad4u: goto label_223ad4;
        case 0x223ad8u: goto label_223ad8;
        case 0x223adcu: goto label_223adc;
        case 0x223ae0u: goto label_223ae0;
        case 0x223ae4u: goto label_223ae4;
        case 0x223ae8u: goto label_223ae8;
        case 0x223aecu: goto label_223aec;
        case 0x223af0u: goto label_223af0;
        case 0x223af4u: goto label_223af4;
        case 0x223af8u: goto label_223af8;
        case 0x223afcu: goto label_223afc;
        case 0x223b00u: goto label_223b00;
        case 0x223b04u: goto label_223b04;
        case 0x223b08u: goto label_223b08;
        case 0x223b0cu: goto label_223b0c;
        case 0x223b10u: goto label_223b10;
        case 0x223b14u: goto label_223b14;
        case 0x223b18u: goto label_223b18;
        case 0x223b1cu: goto label_223b1c;
        case 0x223b20u: goto label_223b20;
        case 0x223b24u: goto label_223b24;
        case 0x223b28u: goto label_223b28;
        case 0x223b2cu: goto label_223b2c;
        case 0x223b30u: goto label_223b30;
        case 0x223b34u: goto label_223b34;
        case 0x223b38u: goto label_223b38;
        case 0x223b3cu: goto label_223b3c;
        case 0x223b40u: goto label_223b40;
        case 0x223b44u: goto label_223b44;
        case 0x223b48u: goto label_223b48;
        case 0x223b4cu: goto label_223b4c;
        case 0x223b50u: goto label_223b50;
        case 0x223b54u: goto label_223b54;
        case 0x223b58u: goto label_223b58;
        case 0x223b5cu: goto label_223b5c;
        case 0x223b60u: goto label_223b60;
        case 0x223b64u: goto label_223b64;
        case 0x223b68u: goto label_223b68;
        case 0x223b6cu: goto label_223b6c;
        case 0x223b70u: goto label_223b70;
        case 0x223b74u: goto label_223b74;
        case 0x223b78u: goto label_223b78;
        case 0x223b7cu: goto label_223b7c;
        case 0x223b80u: goto label_223b80;
        case 0x223b84u: goto label_223b84;
        case 0x223b88u: goto label_223b88;
        case 0x223b8cu: goto label_223b8c;
        case 0x223b90u: goto label_223b90;
        case 0x223b94u: goto label_223b94;
        case 0x223b98u: goto label_223b98;
        case 0x223b9cu: goto label_223b9c;
        case 0x223ba0u: goto label_223ba0;
        case 0x223ba4u: goto label_223ba4;
        case 0x223ba8u: goto label_223ba8;
        case 0x223bacu: goto label_223bac;
        case 0x223bb0u: goto label_223bb0;
        case 0x223bb4u: goto label_223bb4;
        case 0x223bb8u: goto label_223bb8;
        case 0x223bbcu: goto label_223bbc;
        case 0x223bc0u: goto label_223bc0;
        case 0x223bc4u: goto label_223bc4;
        case 0x223bc8u: goto label_223bc8;
        case 0x223bccu: goto label_223bcc;
        default: break;
    }

    ctx->pc = 0x223910u;

label_223910:
    // 0x223910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x223910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_223914:
    // 0x223914: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x223914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_223918:
    // 0x223918: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x223918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_22391c:
    // 0x22391c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_223920:
    // 0x223920: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x223920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223924:
    // 0x223924: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x223924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_223928:
    // 0x223928: 0x2e610009  sltiu       $at, $s3, 0x9
    ctx->pc = 0x223928u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_22392c:
    // 0x22392c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_223930:
    // 0x223930: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x223930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_223934:
    // 0x223934: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x223934u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_223938:
    // 0x223938: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x223938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22393c:
    // 0x22393c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22393cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_223940:
    // 0x223940: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x223940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_223944:
    // 0x223944: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x223944u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_223948:
    // 0x223948: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x223948u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_22394c:
    // 0x22394c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x22394cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_223950:
    // 0x223950: 0x10200077  beqz        $at, . + 4 + (0x77 << 2)
label_223954:
    if (ctx->pc == 0x223954u) {
        ctx->pc = 0x223954u;
            // 0x223954: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x223958u;
        goto label_223958;
    }
    ctx->pc = 0x223950u;
    {
        const bool branch_taken_0x223950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x223954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223950u;
            // 0x223954: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223950) {
            ctx->pc = 0x223B30u;
            goto label_223b30;
        }
    }
    ctx->pc = 0x223958u;
label_223958:
    // 0x223958: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x223958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_22395c:
    // 0x22395c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x22395cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_223960:
    // 0x223960: 0x2484f1b0  addiu       $a0, $a0, -0xE50
    ctx->pc = 0x223960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963632));
label_223964:
    // 0x223964: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_223968:
    // 0x223968: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x223968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22396c:
    // 0x22396c: 0x600008  jr          $v1
label_223970:
    if (ctx->pc == 0x223970u) {
        ctx->pc = 0x223974u;
        goto label_223974;
    }
    ctx->pc = 0x22396Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223974u: goto label_223974;
            case 0x2239A4u: goto label_2239a4;
            case 0x2239C0u: goto label_2239c0;
            case 0x2239DCu: goto label_2239dc;
            case 0x223A20u: goto label_223a20;
            case 0x223A3Cu: goto label_223a3c;
            case 0x223B08u: goto label_223b08;
            case 0x223B30u: goto label_223b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223974u;
label_223974:
    // 0x223974: 0x52000074  beql        $s0, $zero, . + 4 + (0x74 << 2)
label_223978:
    if (ctx->pc == 0x223978u) {
        ctx->pc = 0x223978u;
            // 0x223978: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x22397Cu;
        goto label_22397c;
    }
    ctx->pc = 0x223974u;
    {
        const bool branch_taken_0x223974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223974) {
            ctx->pc = 0x223978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223974u;
            // 0x223978: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223B48u;
            goto label_223b48;
        }
    }
    ctx->pc = 0x22397Cu;
label_22397c:
    // 0x22397c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22397cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223980:
    // 0x223980: 0xc0895e4  jal         func_225790
label_223984:
    if (ctx->pc == 0x223984u) {
        ctx->pc = 0x223984u;
            // 0x223984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223988u;
        goto label_223988;
    }
    ctx->pc = 0x223980u;
    SET_GPR_U32(ctx, 31, 0x223988u);
    ctx->pc = 0x223984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223980u;
            // 0x223984: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225790u;
    if (runtime->hasFunction(0x225790u)) {
        auto targetFn = runtime->lookupFunction(0x225790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223988u; }
        if (ctx->pc != 0x223988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225790_0x225790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223988u; }
        if (ctx->pc != 0x223988u) { return; }
    }
    ctx->pc = 0x223988u;
label_223988:
    // 0x223988: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x223988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_22398c:
    // 0x22398c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22398cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_223990:
    // 0x223990: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x223990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_223994:
    // 0x223994: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x223994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_223998:
    // 0x223998: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x223998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
label_22399c:
    // 0x22399c: 0x10000069  b           . + 4 + (0x69 << 2)
label_2239a0:
    if (ctx->pc == 0x2239A0u) {
        ctx->pc = 0x2239A4u;
        goto label_2239a4;
    }
    ctx->pc = 0x22399Cu;
    {
        const bool branch_taken_0x22399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22399c) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x2239A4u;
label_2239a4:
    // 0x2239a4: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
label_2239a8:
    if (ctx->pc == 0x2239A8u) {
        ctx->pc = 0x2239ACu;
        goto label_2239ac;
    }
    ctx->pc = 0x2239A4u;
    {
        const bool branch_taken_0x2239a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2239a4) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x2239ACu;
label_2239ac:
    // 0x2239ac: 0xc08974c  jal         func_225D30
label_2239b0:
    if (ctx->pc == 0x2239B0u) {
        ctx->pc = 0x2239B0u;
            // 0x2239b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2239B4u;
        goto label_2239b4;
    }
    ctx->pc = 0x2239ACu;
    SET_GPR_U32(ctx, 31, 0x2239B4u);
    ctx->pc = 0x2239B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2239ACu;
            // 0x2239b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239B4u; }
        if (ctx->pc != 0x2239B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225D30_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239B4u; }
        if (ctx->pc != 0x2239B4u) { return; }
    }
    ctx->pc = 0x2239B4u;
label_2239b4:
    // 0x2239b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2239b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2239b8:
    // 0x2239b8: 0x10000062  b           . + 4 + (0x62 << 2)
label_2239bc:
    if (ctx->pc == 0x2239BCu) {
        ctx->pc = 0x2239C0u;
        goto label_2239c0;
    }
    ctx->pc = 0x2239B8u;
    {
        const bool branch_taken_0x2239b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2239b8) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x2239C0u;
label_2239c0:
    // 0x2239c0: 0x12000060  beqz        $s0, . + 4 + (0x60 << 2)
label_2239c4:
    if (ctx->pc == 0x2239C4u) {
        ctx->pc = 0x2239C8u;
        goto label_2239c8;
    }
    ctx->pc = 0x2239C0u;
    {
        const bool branch_taken_0x2239c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2239c0) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x2239C8u;
label_2239c8:
    // 0x2239c8: 0xc08973c  jal         func_225CF0
label_2239cc:
    if (ctx->pc == 0x2239CCu) {
        ctx->pc = 0x2239CCu;
            // 0x2239cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2239D0u;
        goto label_2239d0;
    }
    ctx->pc = 0x2239C8u;
    SET_GPR_U32(ctx, 31, 0x2239D0u);
    ctx->pc = 0x2239CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2239C8u;
            // 0x2239cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CF0u;
    if (runtime->hasFunction(0x225CF0u)) {
        auto targetFn = runtime->lookupFunction(0x225CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239D0u; }
        if (ctx->pc != 0x2239D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225CF0_0x225cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239D0u; }
        if (ctx->pc != 0x2239D0u) { return; }
    }
    ctx->pc = 0x2239D0u;
label_2239d0:
    // 0x2239d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2239d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2239d4:
    // 0x2239d4: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2239d8:
    if (ctx->pc == 0x2239D8u) {
        ctx->pc = 0x2239DCu;
        goto label_2239dc;
    }
    ctx->pc = 0x2239D4u;
    {
        const bool branch_taken_0x2239d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2239d4) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x2239DCu;
label_2239dc:
    // 0x2239dc: 0x12000059  beqz        $s0, . + 4 + (0x59 << 2)
label_2239e0:
    if (ctx->pc == 0x2239E0u) {
        ctx->pc = 0x2239E4u;
        goto label_2239e4;
    }
    ctx->pc = 0x2239DCu;
    {
        const bool branch_taken_0x2239dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2239dc) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x2239E4u;
label_2239e4:
    // 0x2239e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2239e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2239e8:
    // 0x2239e8: 0xc0895e4  jal         func_225790
label_2239ec:
    if (ctx->pc == 0x2239ECu) {
        ctx->pc = 0x2239ECu;
            // 0x2239ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2239F0u;
        goto label_2239f0;
    }
    ctx->pc = 0x2239E8u;
    SET_GPR_U32(ctx, 31, 0x2239F0u);
    ctx->pc = 0x2239ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2239E8u;
            // 0x2239ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225790u;
    if (runtime->hasFunction(0x225790u)) {
        auto targetFn = runtime->lookupFunction(0x225790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239F0u; }
        if (ctx->pc != 0x2239F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225790_0x225790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2239F0u; }
        if (ctx->pc != 0x2239F0u) { return; }
    }
    ctx->pc = 0x2239F0u;
label_2239f0:
    // 0x2239f0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2239f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2239f4:
    // 0x2239f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2239f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2239f8:
    // 0x2239f8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2239f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_2239fc:
    // 0x2239fc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2239fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_223a00:
    // 0x223a00: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x223a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_223a04:
    // 0x223a04: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x223a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
label_223a08:
    // 0x223a08: 0x2484eab0  addiu       $a0, $a0, -0x1550
    ctx->pc = 0x223a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961840));
label_223a0c:
    // 0x223a0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x223a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_223a10:
    // 0x223a10: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x223a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_223a14:
    // 0x223a14: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x223a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
label_223a18:
    // 0x223a18: 0x1000004a  b           . + 4 + (0x4A << 2)
label_223a1c:
    if (ctx->pc == 0x223A1Cu) {
        ctx->pc = 0x223A20u;
        goto label_223a20;
    }
    ctx->pc = 0x223A18u;
    {
        const bool branch_taken_0x223a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a18) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x223A20u;
label_223a20:
    // 0x223a20: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
label_223a24:
    if (ctx->pc == 0x223A24u) {
        ctx->pc = 0x223A28u;
        goto label_223a28;
    }
    ctx->pc = 0x223A20u;
    {
        const bool branch_taken_0x223a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a20) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x223A28u;
label_223a28:
    // 0x223a28: 0xc089bb8  jal         func_226EE0
label_223a2c:
    if (ctx->pc == 0x223A2Cu) {
        ctx->pc = 0x223A2Cu;
            // 0x223a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223A30u;
        goto label_223a30;
    }
    ctx->pc = 0x223A28u;
    SET_GPR_U32(ctx, 31, 0x223A30u);
    ctx->pc = 0x223A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A28u;
            // 0x223a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226EE0u;
    if (runtime->hasFunction(0x226EE0u)) {
        auto targetFn = runtime->lookupFunction(0x226EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A30u; }
        if (ctx->pc != 0x223A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226EE0_0x226ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223A30u; }
        if (ctx->pc != 0x223A30u) { return; }
    }
    ctx->pc = 0x223A30u;
label_223a30:
    // 0x223a30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223a34:
    // 0x223a34: 0x10000043  b           . + 4 + (0x43 << 2)
label_223a38:
    if (ctx->pc == 0x223A38u) {
        ctx->pc = 0x223A3Cu;
        goto label_223a3c;
    }
    ctx->pc = 0x223A34u;
    {
        const bool branch_taken_0x223a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a34) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x223A3Cu;
label_223a3c:
    // 0x223a3c: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x223a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_223a40:
    // 0x223a40: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x223a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223a44:
    // 0x223a44: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x223a44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_223a48:
    // 0x223a48: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_223a4c:
    if (ctx->pc == 0x223A4Cu) {
        ctx->pc = 0x223A4Cu;
            // 0x223a4c: 0xc6430000  lwc1        $f3, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x223A50u;
        goto label_223a50;
    }
    ctx->pc = 0x223A48u;
    {
        const bool branch_taken_0x223a48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A48u;
            // 0x223a4c: 0xc6430000  lwc1        $f3, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a48) {
            ctx->pc = 0x223A58u;
            goto label_223a58;
        }
    }
    ctx->pc = 0x223A50u;
label_223a50:
    // 0x223a50: 0x10000002  b           . + 4 + (0x2 << 2)
label_223a54:
    if (ctx->pc == 0x223A54u) {
        ctx->pc = 0x223A54u;
            // 0x223a54: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x223A58u;
        goto label_223a58;
    }
    ctx->pc = 0x223A50u;
    {
        const bool branch_taken_0x223a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A50u;
            // 0x223a54: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a50) {
            ctx->pc = 0x223A5Cu;
            goto label_223a5c;
        }
    }
    ctx->pc = 0x223A58u;
label_223a58:
    // 0x223a58: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x223a58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_223a5c:
    // 0x223a5c: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x223a5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_223a60:
    // 0x223a60: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_223a64:
    if (ctx->pc == 0x223A64u) {
        ctx->pc = 0x223A68u;
        goto label_223a68;
    }
    ctx->pc = 0x223A60u;
    {
        const bool branch_taken_0x223a60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x223a60) {
            ctx->pc = 0x223A6Cu;
            goto label_223a6c;
        }
    }
    ctx->pc = 0x223A68u;
label_223a68:
    // 0x223a68: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x223a68u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_223a6c:
    // 0x223a6c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x223a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_223a70:
    // 0x223a70: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_223a74:
    if (ctx->pc == 0x223A74u) {
        ctx->pc = 0x223A74u;
            // 0x223a74: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x223A78u;
        goto label_223a78;
    }
    ctx->pc = 0x223A70u;
    {
        const bool branch_taken_0x223a70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223a70) {
            ctx->pc = 0x223A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223A70u;
            // 0x223a74: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x223A84u;
            goto label_223a84;
        }
    }
    ctx->pc = 0x223A78u;
label_223a78:
    // 0x223a78: 0x10000002  b           . + 4 + (0x2 << 2)
label_223a7c:
    if (ctx->pc == 0x223A7Cu) {
        ctx->pc = 0x223A80u;
        goto label_223a80;
    }
    ctx->pc = 0x223A78u;
    {
        const bool branch_taken_0x223a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a78) {
            ctx->pc = 0x223A84u;
            goto label_223a84;
        }
    }
    ctx->pc = 0x223A80u;
label_223a80:
    // 0x223a80: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x223a80u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_223a84:
    // 0x223a84: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x223a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_223a88:
    // 0x223a88: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_223a8c:
    if (ctx->pc == 0x223A8Cu) {
        ctx->pc = 0x223A8Cu;
            // 0x223a8c: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x223A90u;
        goto label_223a90;
    }
    ctx->pc = 0x223A88u;
    {
        const bool branch_taken_0x223a88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223a88) {
            ctx->pc = 0x223A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223A88u;
            // 0x223a8c: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x223A9Cu;
            goto label_223a9c;
        }
    }
    ctx->pc = 0x223A90u;
label_223a90:
    // 0x223a90: 0x10000003  b           . + 4 + (0x3 << 2)
label_223a94:
    if (ctx->pc == 0x223A94u) {
        ctx->pc = 0x223A94u;
            // 0x223a94: 0x3c033f4c  lui         $v1, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x223A98u;
        goto label_223a98;
    }
    ctx->pc = 0x223A90u;
    {
        const bool branch_taken_0x223a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A90u;
            // 0x223a94: 0x3c033f4c  lui         $v1, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a90) {
            ctx->pc = 0x223AA0u;
            goto label_223aa0;
        }
    }
    ctx->pc = 0x223A98u;
label_223a98:
    // 0x223a98: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x223a98u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
label_223a9c:
    // 0x223a9c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x223a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_223aa0:
    // 0x223aa0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x223aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_223aa4:
    // 0x223aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223aa8:
    // 0x223aa8: 0x0  nop
    ctx->pc = 0x223aa8u;
    // NOP
label_223aac:
    // 0x223aac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_223ab0:
    // 0x223ab0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x223ab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_223ab4:
    // 0x223ab4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_223ab8:
    if (ctx->pc == 0x223AB8u) {
        ctx->pc = 0x223ABCu;
        goto label_223abc;
    }
    ctx->pc = 0x223AB4u;
    {
        const bool branch_taken_0x223ab4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x223ab4) {
            ctx->pc = 0x223AECu;
            goto label_223aec;
        }
    }
    ctx->pc = 0x223ABCu;
label_223abc:
    // 0x223abc: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_223ac0:
    if (ctx->pc == 0x223AC0u) {
        ctx->pc = 0x223AC4u;
        goto label_223ac4;
    }
    ctx->pc = 0x223ABCu;
    {
        const bool branch_taken_0x223abc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223abc) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x223AC4u;
label_223ac4:
    // 0x223ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223ac8:
    // 0x223ac8: 0xc0895e4  jal         func_225790
label_223acc:
    if (ctx->pc == 0x223ACCu) {
        ctx->pc = 0x223ACCu;
            // 0x223acc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223AD0u;
        goto label_223ad0;
    }
    ctx->pc = 0x223AC8u;
    SET_GPR_U32(ctx, 31, 0x223AD0u);
    ctx->pc = 0x223ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223AC8u;
            // 0x223acc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225790u;
    if (runtime->hasFunction(0x225790u)) {
        auto targetFn = runtime->lookupFunction(0x225790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AD0u; }
        if (ctx->pc != 0x223AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225790_0x225790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AD0u; }
        if (ctx->pc != 0x223AD0u) { return; }
    }
    ctx->pc = 0x223AD0u;
label_223ad0:
    // 0x223ad0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x223ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_223ad4:
    // 0x223ad4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x223ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_223ad8:
    // 0x223ad8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x223ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_223adc:
    // 0x223adc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x223adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_223ae0:
    // 0x223ae0: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x223ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
label_223ae4:
    // 0x223ae4: 0x10000017  b           . + 4 + (0x17 << 2)
label_223ae8:
    if (ctx->pc == 0x223AE8u) {
        ctx->pc = 0x223AECu;
        goto label_223aec;
    }
    ctx->pc = 0x223AE4u;
    {
        const bool branch_taken_0x223ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223ae4) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x223AECu;
label_223aec:
    // 0x223aec: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_223af0:
    if (ctx->pc == 0x223AF0u) {
        ctx->pc = 0x223AF4u;
        goto label_223af4;
    }
    ctx->pc = 0x223AECu;
    {
        const bool branch_taken_0x223aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223aec) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x223AF4u;
label_223af4:
    // 0x223af4: 0xc08974c  jal         func_225D30
label_223af8:
    if (ctx->pc == 0x223AF8u) {
        ctx->pc = 0x223AF8u;
            // 0x223af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223AFCu;
        goto label_223afc;
    }
    ctx->pc = 0x223AF4u;
    SET_GPR_U32(ctx, 31, 0x223AFCu);
    ctx->pc = 0x223AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223AF4u;
            // 0x223af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AFCu; }
        if (ctx->pc != 0x223AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225D30_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AFCu; }
        if (ctx->pc != 0x223AFCu) { return; }
    }
    ctx->pc = 0x223AFCu;
label_223afc:
    // 0x223afc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223b00:
    // 0x223b00: 0x10000010  b           . + 4 + (0x10 << 2)
label_223b04:
    if (ctx->pc == 0x223B04u) {
        ctx->pc = 0x223B08u;
        goto label_223b08;
    }
    ctx->pc = 0x223B00u;
    {
        const bool branch_taken_0x223b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223b00) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x223B08u;
label_223b08:
    // 0x223b08: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x223b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
label_223b0c:
    // 0x223b0c: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x223b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_223b10:
    // 0x223b10: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x223b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_223b14:
    // 0x223b14: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_223b18:
    if (ctx->pc == 0x223B18u) {
        ctx->pc = 0x223B18u;
            // 0x223b18: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x223B1Cu;
        goto label_223b1c;
    }
    ctx->pc = 0x223B14u;
    {
        const bool branch_taken_0x223b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223B14u;
            // 0x223b18: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b14) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x223B1Cu;
label_223b1c:
    // 0x223b1c: 0xc089994  jal         func_226650
label_223b20:
    if (ctx->pc == 0x223B20u) {
        ctx->pc = 0x223B20u;
            // 0x223b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223B24u;
        goto label_223b24;
    }
    ctx->pc = 0x223B1Cu;
    SET_GPR_U32(ctx, 31, 0x223B24u);
    ctx->pc = 0x223B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B1Cu;
            // 0x223b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226650u;
    if (runtime->hasFunction(0x226650u)) {
        auto targetFn = runtime->lookupFunction(0x226650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B24u; }
        if (ctx->pc != 0x223B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226650_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B24u; }
        if (ctx->pc != 0x223B24u) { return; }
    }
    ctx->pc = 0x223B24u;
label_223b24:
    // 0x223b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223b28:
    // 0x223b28: 0x10000006  b           . + 4 + (0x6 << 2)
label_223b2c:
    if (ctx->pc == 0x223B2Cu) {
        ctx->pc = 0x223B30u;
        goto label_223b30;
    }
    ctx->pc = 0x223B28u;
    {
        const bool branch_taken_0x223b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223b28) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x223B30u;
label_223b30:
    // 0x223b30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_223b34:
    if (ctx->pc == 0x223B34u) {
        ctx->pc = 0x223B38u;
        goto label_223b38;
    }
    ctx->pc = 0x223B30u;
    {
        const bool branch_taken_0x223b30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223b30) {
            ctx->pc = 0x223B44u;
            goto label_223b44;
        }
    }
    ctx->pc = 0x223B38u;
label_223b38:
    // 0x223b38: 0xc0898f8  jal         func_2263E0
label_223b3c:
    if (ctx->pc == 0x223B3Cu) {
        ctx->pc = 0x223B3Cu;
            // 0x223b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223B40u;
        goto label_223b40;
    }
    ctx->pc = 0x223B38u;
    SET_GPR_U32(ctx, 31, 0x223B40u);
    ctx->pc = 0x223B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B38u;
            // 0x223b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2263E0u;
    if (runtime->hasFunction(0x2263E0u)) {
        auto targetFn = runtime->lookupFunction(0x2263E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B40u; }
        if (ctx->pc != 0x223B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002263E0_0x2263e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B40u; }
        if (ctx->pc != 0x223B40u) { return; }
    }
    ctx->pc = 0x223B40u;
label_223b40:
    // 0x223b40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223b44:
    // 0x223b44: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x223b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_223b48:
    // 0x223b48: 0x52630011  beql        $s3, $v1, . + 4 + (0x11 << 2)
label_223b4c:
    if (ctx->pc == 0x223B4Cu) {
        ctx->pc = 0x223B4Cu;
            // 0x223b4c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x223B50u;
        goto label_223b50;
    }
    ctx->pc = 0x223B48u;
    {
        const bool branch_taken_0x223b48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x223b48) {
            ctx->pc = 0x223B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223B48u;
            // 0x223b4c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223B90u;
            goto label_223b90;
        }
    }
    ctx->pc = 0x223B50u;
label_223b50:
    // 0x223b50: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x223b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_223b54:
    // 0x223b54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_223b58:
    // 0x223b58: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x223b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_223b5c:
    // 0x223b5c: 0x320f809  jalr        $t9
label_223b60:
    if (ctx->pc == 0x223B60u) {
        ctx->pc = 0x223B60u;
            // 0x223b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223B64u;
        goto label_223b64;
    }
    ctx->pc = 0x223B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x223B64u);
        ctx->pc = 0x223B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223B5Cu;
            // 0x223b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223B64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223B64u; }
            if (ctx->pc != 0x223B64u) { return; }
        }
        }
    }
    ctx->pc = 0x223B64u;
label_223b64:
    // 0x223b64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x223b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_223b68:
    // 0x223b68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223b6c:
    // 0x223b6c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x223b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_223b70:
    // 0x223b70: 0x320f809  jalr        $t9
label_223b74:
    if (ctx->pc == 0x223B74u) {
        ctx->pc = 0x223B74u;
            // 0x223b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223B78u;
        goto label_223b78;
    }
    ctx->pc = 0x223B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x223B78u);
        ctx->pc = 0x223B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223B70u;
            // 0x223b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223B78u; }
            if (ctx->pc != 0x223B78u) { return; }
        }
        }
    }
    ctx->pc = 0x223B78u;
label_223b78:
    // 0x223b78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x223b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_223b7c:
    // 0x223b7c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x223b7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_223b80:
    // 0x223b80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x223b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_223b84:
    // 0x223b84: 0x320f809  jalr        $t9
label_223b88:
    if (ctx->pc == 0x223B88u) {
        ctx->pc = 0x223B88u;
            // 0x223b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223B8Cu;
        goto label_223b8c;
    }
    ctx->pc = 0x223B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x223B8Cu);
        ctx->pc = 0x223B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223B84u;
            // 0x223b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223B8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223B8Cu; }
            if (ctx->pc != 0x223B8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x223B8Cu;
label_223b8c:
    // 0x223b8c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x223b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_223b90:
    // 0x223b90: 0xa60300c6  sh          $v1, 0xC6($s0)
    ctx->pc = 0x223b90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 198), (uint16_t)GPR_U32(ctx, 3));
label_223b94:
    // 0x223b94: 0xe61500b4  swc1        $f21, 0xB4($s0)
    ctx->pc = 0x223b94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_223b98:
    // 0x223b98: 0xe61400b8  swc1        $f20, 0xB8($s0)
    ctx->pc = 0x223b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_223b9c:
    // 0x223b9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x223b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_223ba0:
    // 0x223ba0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x223ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_223ba4:
    // 0x223ba4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x223ba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_223ba8:
    // 0x223ba8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x223ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_223bac:
    // 0x223bac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x223bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_223bb0:
    // 0x223bb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x223bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_223bb4:
    // 0x223bb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x223bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_223bb8:
    // 0x223bb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x223bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223bbc:
    // 0x223bbc: 0x3e00008  jr          $ra
label_223bc0:
    if (ctx->pc == 0x223BC0u) {
        ctx->pc = 0x223BC0u;
            // 0x223bc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x223BC4u;
        goto label_223bc4;
    }
    ctx->pc = 0x223BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223BBCu;
            // 0x223bc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223BC4u;
label_223bc4:
    // 0x223bc4: 0x0  nop
    ctx->pc = 0x223bc4u;
    // NOP
label_223bc8:
    // 0x223bc8: 0x0  nop
    ctx->pc = 0x223bc8u;
    // NOP
label_223bcc:
    // 0x223bcc: 0x0  nop
    ctx->pc = 0x223bccu;
    // NOP
}
