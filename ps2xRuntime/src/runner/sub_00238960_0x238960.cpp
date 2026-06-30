#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238960
// Address: 0x238960 - 0x238ac0
void sub_00238960_0x238960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238960_0x238960");
#endif

    switch (ctx->pc) {
        case 0x238960u: goto label_238960;
        case 0x238964u: goto label_238964;
        case 0x238968u: goto label_238968;
        case 0x23896cu: goto label_23896c;
        case 0x238970u: goto label_238970;
        case 0x238974u: goto label_238974;
        case 0x238978u: goto label_238978;
        case 0x23897cu: goto label_23897c;
        case 0x238980u: goto label_238980;
        case 0x238984u: goto label_238984;
        case 0x238988u: goto label_238988;
        case 0x23898cu: goto label_23898c;
        case 0x238990u: goto label_238990;
        case 0x238994u: goto label_238994;
        case 0x238998u: goto label_238998;
        case 0x23899cu: goto label_23899c;
        case 0x2389a0u: goto label_2389a0;
        case 0x2389a4u: goto label_2389a4;
        case 0x2389a8u: goto label_2389a8;
        case 0x2389acu: goto label_2389ac;
        case 0x2389b0u: goto label_2389b0;
        case 0x2389b4u: goto label_2389b4;
        case 0x2389b8u: goto label_2389b8;
        case 0x2389bcu: goto label_2389bc;
        case 0x2389c0u: goto label_2389c0;
        case 0x2389c4u: goto label_2389c4;
        case 0x2389c8u: goto label_2389c8;
        case 0x2389ccu: goto label_2389cc;
        case 0x2389d0u: goto label_2389d0;
        case 0x2389d4u: goto label_2389d4;
        case 0x2389d8u: goto label_2389d8;
        case 0x2389dcu: goto label_2389dc;
        case 0x2389e0u: goto label_2389e0;
        case 0x2389e4u: goto label_2389e4;
        case 0x2389e8u: goto label_2389e8;
        case 0x2389ecu: goto label_2389ec;
        case 0x2389f0u: goto label_2389f0;
        case 0x2389f4u: goto label_2389f4;
        case 0x2389f8u: goto label_2389f8;
        case 0x2389fcu: goto label_2389fc;
        case 0x238a00u: goto label_238a00;
        case 0x238a04u: goto label_238a04;
        case 0x238a08u: goto label_238a08;
        case 0x238a0cu: goto label_238a0c;
        case 0x238a10u: goto label_238a10;
        case 0x238a14u: goto label_238a14;
        case 0x238a18u: goto label_238a18;
        case 0x238a1cu: goto label_238a1c;
        case 0x238a20u: goto label_238a20;
        case 0x238a24u: goto label_238a24;
        case 0x238a28u: goto label_238a28;
        case 0x238a2cu: goto label_238a2c;
        case 0x238a30u: goto label_238a30;
        case 0x238a34u: goto label_238a34;
        case 0x238a38u: goto label_238a38;
        case 0x238a3cu: goto label_238a3c;
        case 0x238a40u: goto label_238a40;
        case 0x238a44u: goto label_238a44;
        case 0x238a48u: goto label_238a48;
        case 0x238a4cu: goto label_238a4c;
        case 0x238a50u: goto label_238a50;
        case 0x238a54u: goto label_238a54;
        case 0x238a58u: goto label_238a58;
        case 0x238a5cu: goto label_238a5c;
        case 0x238a60u: goto label_238a60;
        case 0x238a64u: goto label_238a64;
        case 0x238a68u: goto label_238a68;
        case 0x238a6cu: goto label_238a6c;
        case 0x238a70u: goto label_238a70;
        case 0x238a74u: goto label_238a74;
        case 0x238a78u: goto label_238a78;
        case 0x238a7cu: goto label_238a7c;
        case 0x238a80u: goto label_238a80;
        case 0x238a84u: goto label_238a84;
        case 0x238a88u: goto label_238a88;
        case 0x238a8cu: goto label_238a8c;
        case 0x238a90u: goto label_238a90;
        case 0x238a94u: goto label_238a94;
        case 0x238a98u: goto label_238a98;
        case 0x238a9cu: goto label_238a9c;
        case 0x238aa0u: goto label_238aa0;
        case 0x238aa4u: goto label_238aa4;
        case 0x238aa8u: goto label_238aa8;
        case 0x238aacu: goto label_238aac;
        case 0x238ab0u: goto label_238ab0;
        case 0x238ab4u: goto label_238ab4;
        case 0x238ab8u: goto label_238ab8;
        case 0x238abcu: goto label_238abc;
        default: break;
    }

    ctx->pc = 0x238960u;

label_238960:
    // 0x238960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x238960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_238964:
    // 0x238964: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x238964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_238968:
    // 0x238968: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x238968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23896c:
    // 0x23896c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23896cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_238970:
    // 0x238970: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x238970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238974:
    // 0x238974: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x238974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_238978:
    // 0x238978: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x238978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23897c:
    // 0x23897c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23897cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_238980:
    // 0x238980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_238984:
    // 0x238984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_238988:
    // 0x238988: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x238988u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_23898c:
    // 0x23898c: 0x80a20010  lb          $v0, 0x10($a1)
    ctx->pc = 0x23898cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_238990:
    // 0x238990: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x238990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_238994:
    // 0x238994: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x238994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_238998:
    // 0x238998: 0x922200a8  lbu         $v0, 0xA8($s1)
    ctx->pc = 0x238998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 168)));
label_23899c:
    // 0x23899c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x23899cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2389a0:
    // 0x2389a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2389a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2389a4:
    // 0x2389a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2389a8:
    if (ctx->pc == 0x2389A8u) {
        ctx->pc = 0x2389A8u;
            // 0x2389a8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2389ACu;
        goto label_2389ac;
    }
    ctx->pc = 0x2389A4u;
    {
        const bool branch_taken_0x2389a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2389A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389A4u;
            // 0x2389a8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389a4) {
            ctx->pc = 0x2389E0u;
            goto label_2389e0;
        }
    }
    ctx->pc = 0x2389ACu;
label_2389ac:
    // 0x2389ac: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x2389acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
label_2389b0:
    // 0x2389b0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2389b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2389b4:
    // 0x2389b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2389b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2389b8:
    // 0x2389b8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2389bc:
    if (ctx->pc == 0x2389BCu) {
        ctx->pc = 0x2389BCu;
            // 0x2389bc: 0x8e320094  lw          $s2, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->pc = 0x2389C0u;
        goto label_2389c0;
    }
    ctx->pc = 0x2389B8u;
    {
        const bool branch_taken_0x2389b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2389b8) {
            ctx->pc = 0x2389BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2389B8u;
            // 0x2389bc: 0x8e320094  lw          $s2, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2389E4u;
            goto label_2389e4;
        }
    }
    ctx->pc = 0x2389C0u;
label_2389c0:
    // 0x2389c0: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x2389c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2389c4:
    // 0x2389c4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x2389c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2389c8:
    // 0x2389c8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2389cc:
    if (ctx->pc == 0x2389CCu) {
        ctx->pc = 0x2389D0u;
        goto label_2389d0;
    }
    ctx->pc = 0x2389C8u;
    {
        const bool branch_taken_0x2389c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2389c8) {
            ctx->pc = 0x2389E0u;
            goto label_2389e0;
        }
    }
    ctx->pc = 0x2389D0u;
label_2389d0:
    // 0x2389d0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2389d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2389d4:
    // 0x2389d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2389d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2389d8:
    // 0x2389d8: 0xc090168  jal         func_2405A0
label_2389dc:
    if (ctx->pc == 0x2389DCu) {
        ctx->pc = 0x2389DCu;
            // 0x2389dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2389E0u;
        goto label_2389e0;
    }
    ctx->pc = 0x2389D8u;
    SET_GPR_U32(ctx, 31, 0x2389E0u);
    ctx->pc = 0x2389DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2389D8u;
            // 0x2389dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2405A0u;
    if (runtime->hasFunction(0x2405A0u)) {
        auto targetFn = runtime->lookupFunction(0x2405A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389E0u; }
        if (ctx->pc != 0x2389E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002405A0_0x2405a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389E0u; }
        if (ctx->pc != 0x2389E0u) { return; }
    }
    ctx->pc = 0x2389E0u;
label_2389e0:
    // 0x2389e0: 0x8e320094  lw          $s2, 0x94($s1)
    ctx->pc = 0x2389e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2389e4:
    // 0x2389e4: 0x96420020  lhu         $v0, 0x20($s2)
    ctx->pc = 0x2389e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
label_2389e8:
    // 0x2389e8: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x2389e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
label_2389ec:
    // 0x2389ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2389ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2389f0:
    // 0x2389f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2389f4:
    if (ctx->pc == 0x2389F4u) {
        ctx->pc = 0x2389F4u;
            // 0x2389f4: 0x8e030094  lw          $v1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x2389F8u;
        goto label_2389f8;
    }
    ctx->pc = 0x2389F0u;
    {
        const bool branch_taken_0x2389f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2389F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389F0u;
            // 0x2389f4: 0x8e030094  lw          $v1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389f0) {
            ctx->pc = 0x238A00u;
            goto label_238a00;
        }
    }
    ctx->pc = 0x2389F8u;
label_2389f8:
    // 0x2389f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2389fc:
    if (ctx->pc == 0x2389FCu) {
        ctx->pc = 0x2389FCu;
            // 0x2389fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238A00u;
        goto label_238a00;
    }
    ctx->pc = 0x2389F8u;
    {
        const bool branch_taken_0x2389f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2389F8u;
            // 0x2389fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389f8) {
            ctx->pc = 0x238A1Cu;
            goto label_238a1c;
        }
    }
    ctx->pc = 0x238A00u;
label_238a00:
    // 0x238a00: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x238a00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_238a04:
    // 0x238a04: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x238a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
label_238a08:
    // 0x238a08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x238a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_238a0c:
    // 0x238a0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_238a10:
    if (ctx->pc == 0x238A10u) {
        ctx->pc = 0x238A14u;
        goto label_238a14;
    }
    ctx->pc = 0x238A0Cu;
    {
        const bool branch_taken_0x238a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238a0c) {
            ctx->pc = 0x238A18u;
            goto label_238a18;
        }
    }
    ctx->pc = 0x238A14u;
label_238a14:
    // 0x238a14: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x238a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_238a18:
    // 0x238a18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x238a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_238a1c:
    // 0x238a1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x238a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_238a20:
    // 0x238a20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x238a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238a24:
    // 0x238a24: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x238a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_238a28:
    // 0x238a28: 0xc092230  jal         func_2488C0
label_238a2c:
    if (ctx->pc == 0x238A2Cu) {
        ctx->pc = 0x238A2Cu;
            // 0x238a2c: 0x27a80078  addiu       $t0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x238A30u;
        goto label_238a30;
    }
    ctx->pc = 0x238A28u;
    SET_GPR_U32(ctx, 31, 0x238A30u);
    ctx->pc = 0x238A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238A28u;
            // 0x238a2c: 0x27a80078  addiu       $t0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2488C0u;
    if (runtime->hasFunction(0x2488C0u)) {
        auto targetFn = runtime->lookupFunction(0x2488C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A30u; }
        if (ctx->pc != 0x238A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002488C0_0x2488c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A30u; }
        if (ctx->pc != 0x238A30u) { return; }
    }
    ctx->pc = 0x238A30u;
label_238a30:
    // 0x238a30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x238a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_238a34:
    // 0x238a34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_238a38:
    if (ctx->pc == 0x238A38u) {
        ctx->pc = 0x238A38u;
            // 0x238a38: 0x82230058  lb          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x238A3Cu;
        goto label_238a3c;
    }
    ctx->pc = 0x238A34u;
    {
        const bool branch_taken_0x238a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238a34) {
            ctx->pc = 0x238A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238A34u;
            // 0x238a38: 0x82230058  lb          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238A4Cu;
            goto label_238a4c;
        }
    }
    ctx->pc = 0x238A3Cu;
label_238a3c:
    // 0x238a3c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x238a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_238a40:
    // 0x238a40: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x238a40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_238a44:
    // 0x238a44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x238a44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238a48:
    // 0x238a48: 0x82230058  lb          $v1, 0x58($s1)
    ctx->pc = 0x238a48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_238a4c:
    // 0x238a4c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x238a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_238a50:
    // 0x238a50: 0x82020058  lb          $v0, 0x58($s0)
    ctx->pc = 0x238a50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_238a54:
    // 0x238a54: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x238a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_238a58:
    // 0x238a58: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x238a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_238a5c:
    // 0x238a5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x238a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_238a60:
    // 0x238a60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x238a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_238a64:
    // 0x238a64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x238a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_238a68:
    // 0x238a68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_238a6c:
    // 0x238a6c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x238a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_238a70:
    // 0x238a70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x238a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_238a74:
    // 0x238a74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x238a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_238a78:
    // 0x238a78: 0x320f809  jalr        $t9
label_238a7c:
    if (ctx->pc == 0x238A7Cu) {
        ctx->pc = 0x238A7Cu;
            // 0x238a7c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238A80u;
        goto label_238a80;
    }
    ctx->pc = 0x238A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x238A80u);
        ctx->pc = 0x238A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238A78u;
            // 0x238a7c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238A80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238A80u; }
            if (ctx->pc != 0x238A80u) { return; }
        }
        }
    }
    ctx->pc = 0x238A80u;
label_238a80:
    // 0x238a80: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_238a84:
    // 0x238a84: 0x2644005c  addiu       $a0, $s2, 0x5C
    ctx->pc = 0x238a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
label_238a88:
    // 0x238a88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x238a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_238a8c:
    // 0x238a8c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x238a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_238a90:
    // 0x238a90: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x238a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238a94:
    // 0x238a94: 0xc092274  jal         func_2489D0
label_238a98:
    if (ctx->pc == 0x238A98u) {
        ctx->pc = 0x238A98u;
            // 0x238a98: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238A9Cu;
        goto label_238a9c;
    }
    ctx->pc = 0x238A94u;
    SET_GPR_U32(ctx, 31, 0x238A9Cu);
    ctx->pc = 0x238A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238A94u;
            // 0x238a98: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2489D0u;
    if (runtime->hasFunction(0x2489D0u)) {
        auto targetFn = runtime->lookupFunction(0x2489D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A9Cu; }
        if (ctx->pc != 0x238A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002489D0_0x2489d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238A9Cu; }
        if (ctx->pc != 0x238A9Cu) { return; }
    }
    ctx->pc = 0x238A9Cu;
label_238a9c:
    // 0x238a9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x238a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_238aa0:
    // 0x238aa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x238aa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_238aa4:
    // 0x238aa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x238aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_238aa8:
    // 0x238aa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x238aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_238aac:
    // 0x238aac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x238aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238ab0:
    // 0x238ab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_238ab4:
    // 0x238ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_238ab8:
    // 0x238ab8: 0x3e00008  jr          $ra
label_238abc:
    if (ctx->pc == 0x238ABCu) {
        ctx->pc = 0x238ABCu;
            // 0x238abc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x238AC0u;
        goto label_fallthrough_0x238ab8;
    }
    ctx->pc = 0x238AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238AB8u;
            // 0x238abc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x238ab8:
    ctx->pc = 0x238AC0u;
}
