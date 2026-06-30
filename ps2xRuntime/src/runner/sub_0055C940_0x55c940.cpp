#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055C940
// Address: 0x55c940 - 0x55cc10
void sub_0055C940_0x55c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055C940_0x55c940");
#endif

    switch (ctx->pc) {
        case 0x55c940u: goto label_55c940;
        case 0x55c944u: goto label_55c944;
        case 0x55c948u: goto label_55c948;
        case 0x55c94cu: goto label_55c94c;
        case 0x55c950u: goto label_55c950;
        case 0x55c954u: goto label_55c954;
        case 0x55c958u: goto label_55c958;
        case 0x55c95cu: goto label_55c95c;
        case 0x55c960u: goto label_55c960;
        case 0x55c964u: goto label_55c964;
        case 0x55c968u: goto label_55c968;
        case 0x55c96cu: goto label_55c96c;
        case 0x55c970u: goto label_55c970;
        case 0x55c974u: goto label_55c974;
        case 0x55c978u: goto label_55c978;
        case 0x55c97cu: goto label_55c97c;
        case 0x55c980u: goto label_55c980;
        case 0x55c984u: goto label_55c984;
        case 0x55c988u: goto label_55c988;
        case 0x55c98cu: goto label_55c98c;
        case 0x55c990u: goto label_55c990;
        case 0x55c994u: goto label_55c994;
        case 0x55c998u: goto label_55c998;
        case 0x55c99cu: goto label_55c99c;
        case 0x55c9a0u: goto label_55c9a0;
        case 0x55c9a4u: goto label_55c9a4;
        case 0x55c9a8u: goto label_55c9a8;
        case 0x55c9acu: goto label_55c9ac;
        case 0x55c9b0u: goto label_55c9b0;
        case 0x55c9b4u: goto label_55c9b4;
        case 0x55c9b8u: goto label_55c9b8;
        case 0x55c9bcu: goto label_55c9bc;
        case 0x55c9c0u: goto label_55c9c0;
        case 0x55c9c4u: goto label_55c9c4;
        case 0x55c9c8u: goto label_55c9c8;
        case 0x55c9ccu: goto label_55c9cc;
        case 0x55c9d0u: goto label_55c9d0;
        case 0x55c9d4u: goto label_55c9d4;
        case 0x55c9d8u: goto label_55c9d8;
        case 0x55c9dcu: goto label_55c9dc;
        case 0x55c9e0u: goto label_55c9e0;
        case 0x55c9e4u: goto label_55c9e4;
        case 0x55c9e8u: goto label_55c9e8;
        case 0x55c9ecu: goto label_55c9ec;
        case 0x55c9f0u: goto label_55c9f0;
        case 0x55c9f4u: goto label_55c9f4;
        case 0x55c9f8u: goto label_55c9f8;
        case 0x55c9fcu: goto label_55c9fc;
        case 0x55ca00u: goto label_55ca00;
        case 0x55ca04u: goto label_55ca04;
        case 0x55ca08u: goto label_55ca08;
        case 0x55ca0cu: goto label_55ca0c;
        case 0x55ca10u: goto label_55ca10;
        case 0x55ca14u: goto label_55ca14;
        case 0x55ca18u: goto label_55ca18;
        case 0x55ca1cu: goto label_55ca1c;
        case 0x55ca20u: goto label_55ca20;
        case 0x55ca24u: goto label_55ca24;
        case 0x55ca28u: goto label_55ca28;
        case 0x55ca2cu: goto label_55ca2c;
        case 0x55ca30u: goto label_55ca30;
        case 0x55ca34u: goto label_55ca34;
        case 0x55ca38u: goto label_55ca38;
        case 0x55ca3cu: goto label_55ca3c;
        case 0x55ca40u: goto label_55ca40;
        case 0x55ca44u: goto label_55ca44;
        case 0x55ca48u: goto label_55ca48;
        case 0x55ca4cu: goto label_55ca4c;
        case 0x55ca50u: goto label_55ca50;
        case 0x55ca54u: goto label_55ca54;
        case 0x55ca58u: goto label_55ca58;
        case 0x55ca5cu: goto label_55ca5c;
        case 0x55ca60u: goto label_55ca60;
        case 0x55ca64u: goto label_55ca64;
        case 0x55ca68u: goto label_55ca68;
        case 0x55ca6cu: goto label_55ca6c;
        case 0x55ca70u: goto label_55ca70;
        case 0x55ca74u: goto label_55ca74;
        case 0x55ca78u: goto label_55ca78;
        case 0x55ca7cu: goto label_55ca7c;
        case 0x55ca80u: goto label_55ca80;
        case 0x55ca84u: goto label_55ca84;
        case 0x55ca88u: goto label_55ca88;
        case 0x55ca8cu: goto label_55ca8c;
        case 0x55ca90u: goto label_55ca90;
        case 0x55ca94u: goto label_55ca94;
        case 0x55ca98u: goto label_55ca98;
        case 0x55ca9cu: goto label_55ca9c;
        case 0x55caa0u: goto label_55caa0;
        case 0x55caa4u: goto label_55caa4;
        case 0x55caa8u: goto label_55caa8;
        case 0x55caacu: goto label_55caac;
        case 0x55cab0u: goto label_55cab0;
        case 0x55cab4u: goto label_55cab4;
        case 0x55cab8u: goto label_55cab8;
        case 0x55cabcu: goto label_55cabc;
        case 0x55cac0u: goto label_55cac0;
        case 0x55cac4u: goto label_55cac4;
        case 0x55cac8u: goto label_55cac8;
        case 0x55caccu: goto label_55cacc;
        case 0x55cad0u: goto label_55cad0;
        case 0x55cad4u: goto label_55cad4;
        case 0x55cad8u: goto label_55cad8;
        case 0x55cadcu: goto label_55cadc;
        case 0x55cae0u: goto label_55cae0;
        case 0x55cae4u: goto label_55cae4;
        case 0x55cae8u: goto label_55cae8;
        case 0x55caecu: goto label_55caec;
        case 0x55caf0u: goto label_55caf0;
        case 0x55caf4u: goto label_55caf4;
        case 0x55caf8u: goto label_55caf8;
        case 0x55cafcu: goto label_55cafc;
        case 0x55cb00u: goto label_55cb00;
        case 0x55cb04u: goto label_55cb04;
        case 0x55cb08u: goto label_55cb08;
        case 0x55cb0cu: goto label_55cb0c;
        case 0x55cb10u: goto label_55cb10;
        case 0x55cb14u: goto label_55cb14;
        case 0x55cb18u: goto label_55cb18;
        case 0x55cb1cu: goto label_55cb1c;
        case 0x55cb20u: goto label_55cb20;
        case 0x55cb24u: goto label_55cb24;
        case 0x55cb28u: goto label_55cb28;
        case 0x55cb2cu: goto label_55cb2c;
        case 0x55cb30u: goto label_55cb30;
        case 0x55cb34u: goto label_55cb34;
        case 0x55cb38u: goto label_55cb38;
        case 0x55cb3cu: goto label_55cb3c;
        case 0x55cb40u: goto label_55cb40;
        case 0x55cb44u: goto label_55cb44;
        case 0x55cb48u: goto label_55cb48;
        case 0x55cb4cu: goto label_55cb4c;
        case 0x55cb50u: goto label_55cb50;
        case 0x55cb54u: goto label_55cb54;
        case 0x55cb58u: goto label_55cb58;
        case 0x55cb5cu: goto label_55cb5c;
        case 0x55cb60u: goto label_55cb60;
        case 0x55cb64u: goto label_55cb64;
        case 0x55cb68u: goto label_55cb68;
        case 0x55cb6cu: goto label_55cb6c;
        case 0x55cb70u: goto label_55cb70;
        case 0x55cb74u: goto label_55cb74;
        case 0x55cb78u: goto label_55cb78;
        case 0x55cb7cu: goto label_55cb7c;
        case 0x55cb80u: goto label_55cb80;
        case 0x55cb84u: goto label_55cb84;
        case 0x55cb88u: goto label_55cb88;
        case 0x55cb8cu: goto label_55cb8c;
        case 0x55cb90u: goto label_55cb90;
        case 0x55cb94u: goto label_55cb94;
        case 0x55cb98u: goto label_55cb98;
        case 0x55cb9cu: goto label_55cb9c;
        case 0x55cba0u: goto label_55cba0;
        case 0x55cba4u: goto label_55cba4;
        case 0x55cba8u: goto label_55cba8;
        case 0x55cbacu: goto label_55cbac;
        case 0x55cbb0u: goto label_55cbb0;
        case 0x55cbb4u: goto label_55cbb4;
        case 0x55cbb8u: goto label_55cbb8;
        case 0x55cbbcu: goto label_55cbbc;
        case 0x55cbc0u: goto label_55cbc0;
        case 0x55cbc4u: goto label_55cbc4;
        case 0x55cbc8u: goto label_55cbc8;
        case 0x55cbccu: goto label_55cbcc;
        case 0x55cbd0u: goto label_55cbd0;
        case 0x55cbd4u: goto label_55cbd4;
        case 0x55cbd8u: goto label_55cbd8;
        case 0x55cbdcu: goto label_55cbdc;
        case 0x55cbe0u: goto label_55cbe0;
        case 0x55cbe4u: goto label_55cbe4;
        case 0x55cbe8u: goto label_55cbe8;
        case 0x55cbecu: goto label_55cbec;
        case 0x55cbf0u: goto label_55cbf0;
        case 0x55cbf4u: goto label_55cbf4;
        case 0x55cbf8u: goto label_55cbf8;
        case 0x55cbfcu: goto label_55cbfc;
        case 0x55cc00u: goto label_55cc00;
        case 0x55cc04u: goto label_55cc04;
        case 0x55cc08u: goto label_55cc08;
        case 0x55cc0cu: goto label_55cc0c;
        default: break;
    }

    ctx->pc = 0x55c940u;

label_55c940:
    // 0x55c940: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x55c940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_55c944:
    // 0x55c944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x55c944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55c948:
    // 0x55c948: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x55c948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_55c94c:
    // 0x55c94c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x55c94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_55c950:
    // 0x55c950: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x55c950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_55c954:
    // 0x55c954: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x55c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_55c958:
    // 0x55c958: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x55c958u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55c95c:
    // 0x55c95c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x55c95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_55c960:
    // 0x55c960: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x55c960u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55c964:
    // 0x55c964: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55c964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_55c968:
    // 0x55c968: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x55c968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_55c96c:
    // 0x55c96c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55c96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_55c970:
    // 0x55c970: 0x26a50094  addiu       $a1, $s5, 0x94
    ctx->pc = 0x55c970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 148));
label_55c974:
    // 0x55c974: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55c974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_55c978:
    // 0x55c978: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55c978u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55c97c:
    // 0x55c97c: 0xc12a7a0  jal         func_4A9E80
label_55c980:
    if (ctx->pc == 0x55C980u) {
        ctx->pc = 0x55C980u;
            // 0x55c980: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x55C984u;
        goto label_55c984;
    }
    ctx->pc = 0x55C97Cu;
    SET_GPR_U32(ctx, 31, 0x55C984u);
    ctx->pc = 0x55C980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C97Cu;
            // 0x55c980: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C984u; }
        if (ctx->pc != 0x55C984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C984u; }
        if (ctx->pc != 0x55C984u) { return; }
    }
    ctx->pc = 0x55C984u;
label_55c984:
    // 0x55c984: 0x8ea600b0  lw          $a2, 0xB0($s5)
    ctx->pc = 0x55c984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_55c988:
    // 0x55c988: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x55c988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55c98c:
    // 0x55c98c: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x55c98cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_55c990:
    // 0x55c990: 0x8fb000b4  lw          $s0, 0xB4($sp)
    ctx->pc = 0x55c990u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_55c994:
    // 0x55c994: 0x8fb600bc  lw          $s6, 0xBC($sp)
    ctx->pc = 0x55c994u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_55c998:
    // 0x55c998: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x55c998u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_55c99c:
    // 0x55c99c: 0x8fb300c4  lw          $s3, 0xC4($sp)
    ctx->pc = 0x55c99cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_55c9a0:
    // 0x55c9a0: 0xc12a7a0  jal         func_4A9E80
label_55c9a4:
    if (ctx->pc == 0x55C9A4u) {
        ctx->pc = 0x55C9A4u;
            // 0x55c9a4: 0x26a50094  addiu       $a1, $s5, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 148));
        ctx->pc = 0x55C9A8u;
        goto label_55c9a8;
    }
    ctx->pc = 0x55C9A0u;
    SET_GPR_U32(ctx, 31, 0x55C9A8u);
    ctx->pc = 0x55C9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55C9A0u;
            // 0x55c9a4: 0x26a50094  addiu       $a1, $s5, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C9A8u; }
        if (ctx->pc != 0x55C9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55C9A8u; }
        if (ctx->pc != 0x55C9A8u) { return; }
    }
    ctx->pc = 0x55C9A8u;
label_55c9a8:
    // 0x55c9a8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x55c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_55c9ac:
    // 0x55c9ac: 0x12440010  beq         $s2, $a0, . + 4 + (0x10 << 2)
label_55c9b0:
    if (ctx->pc == 0x55C9B0u) {
        ctx->pc = 0x55C9B4u;
        goto label_55c9b4;
    }
    ctx->pc = 0x55C9ACu;
    {
        const bool branch_taken_0x55c9ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x55c9ac) {
            ctx->pc = 0x55C9F0u;
            goto label_55c9f0;
        }
    }
    ctx->pc = 0x55C9B4u;
label_55c9b4:
    // 0x55c9b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x55c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55c9b8:
    // 0x55c9b8: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x55c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_55c9bc:
    // 0x55c9bc: 0x50740051  beql        $v1, $s4, . + 4 + (0x51 << 2)
label_55c9c0:
    if (ctx->pc == 0x55C9C0u) {
        ctx->pc = 0x55C9C0u;
            // 0x55c9c0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x55C9C4u;
        goto label_55c9c4;
    }
    ctx->pc = 0x55C9BCu;
    {
        const bool branch_taken_0x55c9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x55c9bc) {
            ctx->pc = 0x55C9C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55C9BCu;
            // 0x55c9c0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55CB04u;
            goto label_55cb04;
        }
    }
    ctx->pc = 0x55C9C4u;
label_55c9c4:
    // 0x55c9c4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x55c9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_55c9c8:
    // 0x55c9c8: 0x16530007  bne         $s2, $s3, . + 4 + (0x7 << 2)
label_55c9cc:
    if (ctx->pc == 0x55C9CCu) {
        ctx->pc = 0x55C9D0u;
        goto label_55c9d0;
    }
    ctx->pc = 0x55C9C8u;
    {
        const bool branch_taken_0x55c9c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x55c9c8) {
            ctx->pc = 0x55C9E8u;
            goto label_55c9e8;
        }
    }
    ctx->pc = 0x55C9D0u;
label_55c9d0:
    // 0x55c9d0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x55c9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_55c9d4:
    // 0x55c9d4: 0x16360002  bne         $s1, $s6, . + 4 + (0x2 << 2)
label_55c9d8:
    if (ctx->pc == 0x55C9D8u) {
        ctx->pc = 0x55C9DCu;
        goto label_55c9dc;
    }
    ctx->pc = 0x55C9D4u;
    {
        const bool branch_taken_0x55c9d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        if (branch_taken_0x55c9d4) {
            ctx->pc = 0x55C9E0u;
            goto label_55c9e0;
        }
    }
    ctx->pc = 0x55C9DCu;
label_55c9dc:
    // 0x55c9dc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x55c9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55c9e0:
    // 0x55c9e0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x55c9e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_55c9e4:
    // 0x55c9e4: 0x26530200  addiu       $s3, $s2, 0x200
    ctx->pc = 0x55c9e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_55c9e8:
    // 0x55c9e8: 0x5644fff3  bnel        $s2, $a0, . + 4 + (-0xD << 2)
label_55c9ec:
    if (ctx->pc == 0x55C9ECu) {
        ctx->pc = 0x55C9ECu;
            // 0x55c9ec: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x55C9F0u;
        goto label_55c9f0;
    }
    ctx->pc = 0x55C9E8u;
    {
        const bool branch_taken_0x55c9e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        if (branch_taken_0x55c9e8) {
            ctx->pc = 0x55C9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55C9E8u;
            // 0x55c9ec: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55C9B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55c9b8;
        }
    }
    ctx->pc = 0x55C9F0u;
label_55c9f0:
    // 0x55c9f0: 0x8e840db0  lw          $a0, 0xDB0($s4)
    ctx->pc = 0x55c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3504)));
label_55c9f4:
    // 0x55c9f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55c9f8:
    // 0x55c9f8: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x55c9f8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_55c9fc:
    // 0x55c9fc: 0x2c810020  sltiu       $at, $a0, 0x20
    ctx->pc = 0x55c9fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_55ca00:
    // 0x55ca00: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_55ca04:
    if (ctx->pc == 0x55CA04u) {
        ctx->pc = 0x55CA04u;
            // 0x55ca04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55CA08u;
        goto label_55ca08;
    }
    ctx->pc = 0x55CA00u;
    {
        const bool branch_taken_0x55ca00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x55CA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CA00u;
            // 0x55ca04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ca00) {
            ctx->pc = 0x55CA24u;
            goto label_55ca24;
        }
    }
    ctx->pc = 0x55CA08u;
label_55ca08:
    // 0x55ca08: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x55ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_55ca0c:
    // 0x55ca0c: 0x3c038c0f  lui         $v1, 0x8C0F
    ctx->pc = 0x55ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35855 << 16));
label_55ca10:
    // 0x55ca10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x55ca10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_55ca14:
    // 0x55ca14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x55ca14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_55ca18:
    // 0x55ca18: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_55ca1c:
    if (ctx->pc == 0x55CA1Cu) {
        ctx->pc = 0x55CA20u;
        goto label_55ca20;
    }
    ctx->pc = 0x55CA18u;
    {
        const bool branch_taken_0x55ca18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ca18) {
            ctx->pc = 0x55CA24u;
            goto label_55ca24;
        }
    }
    ctx->pc = 0x55CA20u;
label_55ca20:
    // 0x55ca20: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x55ca20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_55ca24:
    // 0x55ca24: 0x54a00007  bnel        $a1, $zero, . + 4 + (0x7 << 2)
label_55ca28:
    if (ctx->pc == 0x55CA28u) {
        ctx->pc = 0x55CA28u;
            // 0x55ca28: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x55CA2Cu;
        goto label_55ca2c;
    }
    ctx->pc = 0x55CA24u;
    {
        const bool branch_taken_0x55ca24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x55ca24) {
            ctx->pc = 0x55CA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55CA24u;
            // 0x55ca28: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x55CA44u;
            goto label_55ca44;
        }
    }
    ctx->pc = 0x55CA2Cu;
label_55ca2c:
    // 0x55ca2c: 0x8e840e34  lw          $a0, 0xE34($s4)
    ctx->pc = 0x55ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_55ca30:
    // 0x55ca30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x55ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_55ca34:
    // 0x55ca34: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_55ca38:
    if (ctx->pc == 0x55CA38u) {
        ctx->pc = 0x55CA3Cu;
        goto label_55ca3c;
    }
    ctx->pc = 0x55CA34u;
    {
        const bool branch_taken_0x55ca34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55ca34) {
            ctx->pc = 0x55CA40u;
            goto label_55ca40;
        }
    }
    ctx->pc = 0x55CA3Cu;
label_55ca3c:
    // 0x55ca3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x55ca3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55ca40:
    // 0x55ca40: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x55ca40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_55ca44:
    // 0x55ca44: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
label_55ca48:
    if (ctx->pc == 0x55CA48u) {
        ctx->pc = 0x55CA4Cu;
        goto label_55ca4c;
    }
    ctx->pc = 0x55CA44u;
    {
        const bool branch_taken_0x55ca44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x55ca44) {
            ctx->pc = 0x55CB00u;
            goto label_55cb00;
        }
    }
    ctx->pc = 0x55CA4Cu;
label_55ca4c:
    // 0x55ca4c: 0x8e820a68  lw          $v0, 0xA68($s4)
    ctx->pc = 0x55ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2664)));
label_55ca50:
    // 0x55ca50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x55ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_55ca54:
    // 0x55ca54: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x55ca54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_55ca58:
    // 0x55ca58: 0x50200010  beql        $at, $zero, . + 4 + (0x10 << 2)
label_55ca5c:
    if (ctx->pc == 0x55CA5Cu) {
        ctx->pc = 0x55CA5Cu;
            // 0x55ca5c: 0x8ea200cc  lw          $v0, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->pc = 0x55CA60u;
        goto label_55ca60;
    }
    ctx->pc = 0x55CA58u;
    {
        const bool branch_taken_0x55ca58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ca58) {
            ctx->pc = 0x55CA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55CA58u;
            // 0x55ca5c: 0x8ea200cc  lw          $v0, 0xCC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55CA9Cu;
            goto label_55ca9c;
        }
    }
    ctx->pc = 0x55CA60u;
label_55ca60:
    // 0x55ca60: 0x8e820a68  lw          $v0, 0xA68($s4)
    ctx->pc = 0x55ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2664)));
label_55ca64:
    // 0x55ca64: 0x26830a50  addiu       $v1, $s4, 0xA50
    ctx->pc = 0x55ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2640));
label_55ca68:
    // 0x55ca68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x55ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_55ca6c:
    // 0x55ca6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55ca70:
    // 0x55ca70: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x55ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_55ca74:
    // 0x55ca74: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x55ca74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_55ca78:
    // 0x55ca78: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x55ca78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_55ca7c:
    // 0x55ca7c: 0x320f809  jalr        $t9
label_55ca80:
    if (ctx->pc == 0x55CA80u) {
        ctx->pc = 0x55CA84u;
        goto label_55ca84;
    }
    ctx->pc = 0x55CA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55CA84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55CA84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55CA84u; }
            if (ctx->pc != 0x55CA84u) { return; }
        }
        }
    }
    ctx->pc = 0x55CA84u;
label_55ca84:
    // 0x55ca84: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x55ca84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_55ca88:
    // 0x55ca88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55ca88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55ca8c:
    // 0x55ca8c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x55ca8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_55ca90:
    // 0x55ca90: 0x320f809  jalr        $t9
label_55ca94:
    if (ctx->pc == 0x55CA94u) {
        ctx->pc = 0x55CA94u;
            // 0x55ca94: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x55CA98u;
        goto label_55ca98;
    }
    ctx->pc = 0x55CA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55CA98u);
        ctx->pc = 0x55CA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CA90u;
            // 0x55ca94: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55CA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55CA98u; }
            if (ctx->pc != 0x55CA98u) { return; }
        }
        }
    }
    ctx->pc = 0x55CA98u;
label_55ca98:
    // 0x55ca98: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x55ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_55ca9c:
    // 0x55ca9c: 0x26a40094  addiu       $a0, $s5, 0x94
    ctx->pc = 0x55ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 148));
label_55caa0:
    // 0x55caa0: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x55caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
label_55caa4:
    // 0x55caa4: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x55caa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_55caa8:
    // 0x55caa8: 0x8ea600bc  lw          $a2, 0xBC($s5)
    ctx->pc = 0x55caa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_55caac:
    // 0x55caac: 0x239c2  srl         $a3, $v0, 7
    ctx->pc = 0x55caacu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_55cab0:
    // 0x55cab0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x55cab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_55cab4:
    // 0x55cab4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x55cab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_55cab8:
    // 0x55cab8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x55cab8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_55cabc:
    // 0x55cabc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x55cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_55cac0:
    // 0x55cac0: 0x8ea200c8  lw          $v0, 0xC8($s5)
    ctx->pc = 0x55cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_55cac4:
    // 0x55cac4: 0x3010  mfhi        $a2
    ctx->pc = 0x55cac4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_55cac8:
    // 0x55cac8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x55cac8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_55cacc:
    // 0x55cacc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x55caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_55cad0:
    // 0x55cad0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x55cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_55cad4:
    // 0x55cad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55cad8:
    // 0x55cad8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x55cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_55cadc:
    // 0x55cadc: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x55cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_55cae0:
    // 0x55cae0: 0xac540054  sw          $s4, 0x54($v0)
    ctx->pc = 0x55cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 20));
label_55cae4:
    // 0x55cae4: 0xe454005c  swc1        $f20, 0x5C($v0)
    ctx->pc = 0x55cae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
label_55cae8:
    // 0x55cae8: 0xc6800de0  lwc1        $f0, 0xDE0($s4)
    ctx->pc = 0x55cae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55caec:
    // 0x55caec: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x55caecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
label_55caf0:
    // 0x55caf0: 0xc12a70c  jal         func_4A9C30
label_55caf4:
    if (ctx->pc == 0x55CAF4u) {
        ctx->pc = 0x55CAF4u;
            // 0x55caf4: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x55CAF8u;
        goto label_55caf8;
    }
    ctx->pc = 0x55CAF0u;
    SET_GPR_U32(ctx, 31, 0x55CAF8u);
    ctx->pc = 0x55CAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CAF0u;
            // 0x55caf4: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C30u;
    if (runtime->hasFunction(0x4A9C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A9C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CAF8u; }
        if (ctx->pc != 0x55CAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9C30_0x4a9c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CAF8u; }
        if (ctx->pc != 0x55CAF8u) { return; }
    }
    ctx->pc = 0x55CAF8u;
label_55caf8:
    // 0x55caf8: 0xc0b4be4  jal         func_2D2F90
label_55cafc:
    if (ctx->pc == 0x55CAFCu) {
        ctx->pc = 0x55CAFCu;
            // 0x55cafc: 0x26a400b4  addiu       $a0, $s5, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 180));
        ctx->pc = 0x55CB00u;
        goto label_55cb00;
    }
    ctx->pc = 0x55CAF8u;
    SET_GPR_U32(ctx, 31, 0x55CB00u);
    ctx->pc = 0x55CAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CAF8u;
            // 0x55cafc: 0x26a400b4  addiu       $a0, $s5, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F90u;
    if (runtime->hasFunction(0x2D2F90u)) {
        auto targetFn = runtime->lookupFunction(0x2D2F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CB00u; }
        if (ctx->pc != 0x55CB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2F90_0x2d2f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CB00u; }
        if (ctx->pc != 0x55CB00u) { return; }
    }
    ctx->pc = 0x55CB00u;
label_55cb00:
    // 0x55cb00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x55cb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_55cb04:
    // 0x55cb04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55cb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55cb08:
    // 0x55cb08: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x55cb08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55cb0c:
    // 0x55cb0c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x55cb0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55cb10:
    // 0x55cb10: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x55cb10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55cb14:
    // 0x55cb14: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x55cb14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55cb18:
    // 0x55cb18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55cb18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55cb1c:
    // 0x55cb1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55cb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55cb20:
    // 0x55cb20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55cb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55cb24:
    // 0x55cb24: 0x3e00008  jr          $ra
label_55cb28:
    if (ctx->pc == 0x55CB28u) {
        ctx->pc = 0x55CB28u;
            // 0x55cb28: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x55CB2Cu;
        goto label_55cb2c;
    }
    ctx->pc = 0x55CB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55CB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CB24u;
            // 0x55cb28: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55CB2Cu;
label_55cb2c:
    // 0x55cb2c: 0x0  nop
    ctx->pc = 0x55cb2cu;
    // NOP
label_55cb30:
    // 0x55cb30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x55cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_55cb34:
    // 0x55cb34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x55cb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_55cb38:
    // 0x55cb38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x55cb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_55cb3c:
    // 0x55cb3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x55cb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_55cb40:
    // 0x55cb40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x55cb40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55cb44:
    // 0x55cb44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55cb48:
    // 0x55cb48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x55cb48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55cb4c:
    // 0x55cb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55cb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55cb50:
    // 0x55cb50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x55cb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55cb54:
    // 0x55cb54: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x55cb54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_55cb58:
    // 0x55cb58: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x55cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_55cb5c:
    // 0x55cb5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x55cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_55cb60:
    // 0x55cb60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x55cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_55cb64:
    // 0x55cb64: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x55cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_55cb68:
    // 0x55cb68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_55cb6c:
    if (ctx->pc == 0x55CB6Cu) {
        ctx->pc = 0x55CB70u;
        goto label_55cb70;
    }
    ctx->pc = 0x55CB68u;
    {
        const bool branch_taken_0x55cb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55cb68) {
            ctx->pc = 0x55CB88u;
            goto label_55cb88;
        }
    }
    ctx->pc = 0x55CB70u;
label_55cb70:
    // 0x55cb70: 0x8c450d60  lw          $a1, 0xD60($v0)
    ctx->pc = 0x55cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_55cb74:
    // 0x55cb74: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x55cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_55cb78:
    // 0x55cb78: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x55cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_55cb7c:
    // 0x55cb7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x55cb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_55cb80:
    // 0x55cb80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x55cb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_55cb84:
    // 0x55cb84: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x55cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_55cb88:
    // 0x55cb88: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x55cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_55cb8c:
    // 0x55cb8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55cb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55cb90:
    // 0x55cb90: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55cb90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55cb94:
    // 0x55cb94: 0x320f809  jalr        $t9
label_55cb98:
    if (ctx->pc == 0x55CB98u) {
        ctx->pc = 0x55CB9Cu;
        goto label_55cb9c;
    }
    ctx->pc = 0x55CB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55CB9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55CB9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55CB9Cu; }
            if (ctx->pc != 0x55CB9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55CB9Cu;
label_55cb9c:
    // 0x55cb9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x55cb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_55cba0:
    // 0x55cba0: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x55cba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_55cba4:
    // 0x55cba4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_55cba8:
    if (ctx->pc == 0x55CBA8u) {
        ctx->pc = 0x55CBA8u;
            // 0x55cba8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x55CBACu;
        goto label_55cbac;
    }
    ctx->pc = 0x55CBA4u;
    {
        const bool branch_taken_0x55cba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x55CBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CBA4u;
            // 0x55cba8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55cba4) {
            ctx->pc = 0x55CB58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55cb58;
        }
    }
    ctx->pc = 0x55CBACu;
label_55cbac:
    // 0x55cbac: 0xc0b64ec  jal         func_2D93B0
label_55cbb0:
    if (ctx->pc == 0x55CBB0u) {
        ctx->pc = 0x55CBB0u;
            // 0x55cbb0: 0x26640094  addiu       $a0, $s3, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
        ctx->pc = 0x55CBB4u;
        goto label_55cbb4;
    }
    ctx->pc = 0x55CBACu;
    SET_GPR_U32(ctx, 31, 0x55CBB4u);
    ctx->pc = 0x55CBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CBACu;
            // 0x55cbb0: 0x26640094  addiu       $a0, $s3, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D93B0u;
    if (runtime->hasFunction(0x2D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CBB4u; }
        if (ctx->pc != 0x55CBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D93B0_0x2d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CBB4u; }
        if (ctx->pc != 0x55CBB4u) { return; }
    }
    ctx->pc = 0x55CBB4u;
label_55cbb4:
    // 0x55cbb4: 0xc0b64ec  jal         func_2D93B0
label_55cbb8:
    if (ctx->pc == 0x55CBB8u) {
        ctx->pc = 0x55CBB8u;
            // 0x55cbb8: 0x266400b4  addiu       $a0, $s3, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
        ctx->pc = 0x55CBBCu;
        goto label_55cbbc;
    }
    ctx->pc = 0x55CBB4u;
    SET_GPR_U32(ctx, 31, 0x55CBBCu);
    ctx->pc = 0x55CBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CBB4u;
            // 0x55cbb8: 0x266400b4  addiu       $a0, $s3, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D93B0u;
    if (runtime->hasFunction(0x2D93B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D93B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CBBCu; }
        if (ctx->pc != 0x55CBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D93B0_0x2d93b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CBBCu; }
        if (ctx->pc != 0x55CBBCu) { return; }
    }
    ctx->pc = 0x55CBBCu;
label_55cbbc:
    // 0x55cbbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x55cbbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55cbc0:
    // 0x55cbc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x55cbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55cbc4:
    // 0x55cbc4: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x55cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_55cbc8:
    // 0x55cbc8: 0x266400b4  addiu       $a0, $s3, 0xB4
    ctx->pc = 0x55cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 180));
label_55cbcc:
    // 0x55cbcc: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x55cbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_55cbd0:
    // 0x55cbd0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x55cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_55cbd4:
    // 0x55cbd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x55cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_55cbd8:
    // 0x55cbd8: 0xc12a70c  jal         func_4A9C30
label_55cbdc:
    if (ctx->pc == 0x55CBDCu) {
        ctx->pc = 0x55CBDCu;
            // 0x55cbdc: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x55CBE0u;
        goto label_55cbe0;
    }
    ctx->pc = 0x55CBD8u;
    SET_GPR_U32(ctx, 31, 0x55CBE0u);
    ctx->pc = 0x55CBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55CBD8u;
            // 0x55cbdc: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C30u;
    if (runtime->hasFunction(0x4A9C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A9C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CBE0u; }
        if (ctx->pc != 0x55CBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9C30_0x4a9c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55CBE0u; }
        if (ctx->pc != 0x55CBE0u) { return; }
    }
    ctx->pc = 0x55CBE0u;
label_55cbe0:
    // 0x55cbe0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x55cbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_55cbe4:
    // 0x55cbe4: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x55cbe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_55cbe8:
    // 0x55cbe8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_55cbec:
    if (ctx->pc == 0x55CBECu) {
        ctx->pc = 0x55CBECu;
            // 0x55cbec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x55CBF0u;
        goto label_55cbf0;
    }
    ctx->pc = 0x55CBE8u;
    {
        const bool branch_taken_0x55cbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x55CBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CBE8u;
            // 0x55cbec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55cbe8) {
            ctx->pc = 0x55CBC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55cbc4;
        }
    }
    ctx->pc = 0x55CBF0u;
label_55cbf0:
    // 0x55cbf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x55cbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_55cbf4:
    // 0x55cbf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x55cbf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55cbf8:
    // 0x55cbf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55cbf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55cbfc:
    // 0x55cbfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55cbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55cc00:
    // 0x55cc00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55cc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55cc04:
    // 0x55cc04: 0x3e00008  jr          $ra
label_55cc08:
    if (ctx->pc == 0x55CC08u) {
        ctx->pc = 0x55CC08u;
            // 0x55cc08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x55CC0Cu;
        goto label_55cc0c;
    }
    ctx->pc = 0x55CC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55CC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CC04u;
            // 0x55cc08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55CC0Cu;
label_55cc0c:
    // 0x55cc0c: 0x0  nop
    ctx->pc = 0x55cc0cu;
    // NOP
}
