#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002419A0
// Address: 0x2419a0 - 0x241b60
void sub_002419A0_0x2419a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002419A0_0x2419a0");
#endif

    switch (ctx->pc) {
        case 0x2419a0u: goto label_2419a0;
        case 0x2419a4u: goto label_2419a4;
        case 0x2419a8u: goto label_2419a8;
        case 0x2419acu: goto label_2419ac;
        case 0x2419b0u: goto label_2419b0;
        case 0x2419b4u: goto label_2419b4;
        case 0x2419b8u: goto label_2419b8;
        case 0x2419bcu: goto label_2419bc;
        case 0x2419c0u: goto label_2419c0;
        case 0x2419c4u: goto label_2419c4;
        case 0x2419c8u: goto label_2419c8;
        case 0x2419ccu: goto label_2419cc;
        case 0x2419d0u: goto label_2419d0;
        case 0x2419d4u: goto label_2419d4;
        case 0x2419d8u: goto label_2419d8;
        case 0x2419dcu: goto label_2419dc;
        case 0x2419e0u: goto label_2419e0;
        case 0x2419e4u: goto label_2419e4;
        case 0x2419e8u: goto label_2419e8;
        case 0x2419ecu: goto label_2419ec;
        case 0x2419f0u: goto label_2419f0;
        case 0x2419f4u: goto label_2419f4;
        case 0x2419f8u: goto label_2419f8;
        case 0x2419fcu: goto label_2419fc;
        case 0x241a00u: goto label_241a00;
        case 0x241a04u: goto label_241a04;
        case 0x241a08u: goto label_241a08;
        case 0x241a0cu: goto label_241a0c;
        case 0x241a10u: goto label_241a10;
        case 0x241a14u: goto label_241a14;
        case 0x241a18u: goto label_241a18;
        case 0x241a1cu: goto label_241a1c;
        case 0x241a20u: goto label_241a20;
        case 0x241a24u: goto label_241a24;
        case 0x241a28u: goto label_241a28;
        case 0x241a2cu: goto label_241a2c;
        case 0x241a30u: goto label_241a30;
        case 0x241a34u: goto label_241a34;
        case 0x241a38u: goto label_241a38;
        case 0x241a3cu: goto label_241a3c;
        case 0x241a40u: goto label_241a40;
        case 0x241a44u: goto label_241a44;
        case 0x241a48u: goto label_241a48;
        case 0x241a4cu: goto label_241a4c;
        case 0x241a50u: goto label_241a50;
        case 0x241a54u: goto label_241a54;
        case 0x241a58u: goto label_241a58;
        case 0x241a5cu: goto label_241a5c;
        case 0x241a60u: goto label_241a60;
        case 0x241a64u: goto label_241a64;
        case 0x241a68u: goto label_241a68;
        case 0x241a6cu: goto label_241a6c;
        case 0x241a70u: goto label_241a70;
        case 0x241a74u: goto label_241a74;
        case 0x241a78u: goto label_241a78;
        case 0x241a7cu: goto label_241a7c;
        case 0x241a80u: goto label_241a80;
        case 0x241a84u: goto label_241a84;
        case 0x241a88u: goto label_241a88;
        case 0x241a8cu: goto label_241a8c;
        case 0x241a90u: goto label_241a90;
        case 0x241a94u: goto label_241a94;
        case 0x241a98u: goto label_241a98;
        case 0x241a9cu: goto label_241a9c;
        case 0x241aa0u: goto label_241aa0;
        case 0x241aa4u: goto label_241aa4;
        case 0x241aa8u: goto label_241aa8;
        case 0x241aacu: goto label_241aac;
        case 0x241ab0u: goto label_241ab0;
        case 0x241ab4u: goto label_241ab4;
        case 0x241ab8u: goto label_241ab8;
        case 0x241abcu: goto label_241abc;
        case 0x241ac0u: goto label_241ac0;
        case 0x241ac4u: goto label_241ac4;
        case 0x241ac8u: goto label_241ac8;
        case 0x241accu: goto label_241acc;
        case 0x241ad0u: goto label_241ad0;
        case 0x241ad4u: goto label_241ad4;
        case 0x241ad8u: goto label_241ad8;
        case 0x241adcu: goto label_241adc;
        case 0x241ae0u: goto label_241ae0;
        case 0x241ae4u: goto label_241ae4;
        case 0x241ae8u: goto label_241ae8;
        case 0x241aecu: goto label_241aec;
        case 0x241af0u: goto label_241af0;
        case 0x241af4u: goto label_241af4;
        case 0x241af8u: goto label_241af8;
        case 0x241afcu: goto label_241afc;
        case 0x241b00u: goto label_241b00;
        case 0x241b04u: goto label_241b04;
        case 0x241b08u: goto label_241b08;
        case 0x241b0cu: goto label_241b0c;
        case 0x241b10u: goto label_241b10;
        case 0x241b14u: goto label_241b14;
        case 0x241b18u: goto label_241b18;
        case 0x241b1cu: goto label_241b1c;
        case 0x241b20u: goto label_241b20;
        case 0x241b24u: goto label_241b24;
        case 0x241b28u: goto label_241b28;
        case 0x241b2cu: goto label_241b2c;
        case 0x241b30u: goto label_241b30;
        case 0x241b34u: goto label_241b34;
        case 0x241b38u: goto label_241b38;
        case 0x241b3cu: goto label_241b3c;
        case 0x241b40u: goto label_241b40;
        case 0x241b44u: goto label_241b44;
        case 0x241b48u: goto label_241b48;
        case 0x241b4cu: goto label_241b4c;
        case 0x241b50u: goto label_241b50;
        case 0x241b54u: goto label_241b54;
        case 0x241b58u: goto label_241b58;
        case 0x241b5cu: goto label_241b5c;
        default: break;
    }

    ctx->pc = 0x2419a0u;

label_2419a0:
    // 0x2419a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2419a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2419a4:
    // 0x2419a4: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x2419a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2419a8:
    // 0x2419a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2419a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2419ac:
    // 0x2419ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2419acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2419b0:
    // 0x2419b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2419b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2419b4:
    // 0x2419b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2419b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2419b8:
    // 0x2419b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2419b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2419bc:
    // 0x2419bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2419bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2419c0:
    // 0x2419c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2419c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2419c4:
    // 0x2419c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2419c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2419c8:
    // 0x2419c8: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x2419c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_2419cc:
    // 0x2419cc: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x2419ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2419d0:
    // 0x2419d0: 0xc089bc8  jal         func_226F20
label_2419d4:
    if (ctx->pc == 0x2419D4u) {
        ctx->pc = 0x2419D4u;
            // 0x2419d4: 0x266401a0  addiu       $a0, $s3, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
        ctx->pc = 0x2419D8u;
        goto label_2419d8;
    }
    ctx->pc = 0x2419D0u;
    SET_GPR_U32(ctx, 31, 0x2419D8u);
    ctx->pc = 0x2419D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2419D0u;
            // 0x2419d4: 0x266401a0  addiu       $a0, $s3, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226F20u;
    if (runtime->hasFunction(0x226F20u)) {
        auto targetFn = runtime->lookupFunction(0x226F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2419D8u; }
        if (ctx->pc != 0x2419D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226F20_0x226f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2419D8u; }
        if (ctx->pc != 0x2419D8u) { return; }
    }
    ctx->pc = 0x2419D8u;
label_2419d8:
    // 0x2419d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2419d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2419dc:
    // 0x2419dc: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_2419e0:
    if (ctx->pc == 0x2419E0u) {
        ctx->pc = 0x2419E0u;
            // 0x2419e0: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->pc = 0x2419E4u;
        goto label_2419e4;
    }
    ctx->pc = 0x2419DCu;
    {
        const bool branch_taken_0x2419dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2419dc) {
            ctx->pc = 0x2419E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2419DCu;
            // 0x2419e0: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241A00u;
            goto label_241a00;
        }
    }
    ctx->pc = 0x2419E4u;
label_2419e4:
    // 0x2419e4: 0x92450028  lbu         $a1, 0x28($s2)
    ctx->pc = 0x2419e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_2419e8:
    // 0x2419e8: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x2419e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_2419ec:
    // 0x2419ec: 0x64040004  daddiu      $a0, $zero, 0x4
    ctx->pc = 0x2419ecu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_2419f0:
    // 0x2419f0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2419f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2419f4:
    // 0x2419f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2419f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2419f8:
    // 0x2419f8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2419fc:
    if (ctx->pc == 0x2419FCu) {
        ctx->pc = 0x2419FCu;
            // 0x2419fc: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x241A00u;
        goto label_241a00;
    }
    ctx->pc = 0x2419F8u;
    {
        const bool branch_taken_0x2419f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2419F8u;
            // 0x2419fc: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419f8) {
            ctx->pc = 0x241B34u;
            goto label_241b34;
        }
    }
    ctx->pc = 0x241A00u;
label_241a00:
    // 0x241a00: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x241a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_241a04:
    // 0x241a04: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x241a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_241a08:
    // 0x241a08: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x241a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_241a0c:
    // 0x241a0c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_241a10:
    if (ctx->pc == 0x241A10u) {
        ctx->pc = 0x241A10u;
            // 0x241a10: 0x8e650038  lw          $a1, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->pc = 0x241A14u;
        goto label_241a14;
    }
    ctx->pc = 0x241A0Cu;
    {
        const bool branch_taken_0x241a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241a0c) {
            ctx->pc = 0x241A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241A0Cu;
            // 0x241a10: 0x8e650038  lw          $a1, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241A24u;
            goto label_241a24;
        }
    }
    ctx->pc = 0x241A14u;
label_241a14:
    // 0x241a14: 0x26640034  addiu       $a0, $s3, 0x34
    ctx->pc = 0x241a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
label_241a18:
    // 0x241a18: 0xc0a728c  jal         func_29CA30
label_241a1c:
    if (ctx->pc == 0x241A1Cu) {
        ctx->pc = 0x241A1Cu;
            // 0x241a1c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x241A20u;
        goto label_241a20;
    }
    ctx->pc = 0x241A18u;
    SET_GPR_U32(ctx, 31, 0x241A20u);
    ctx->pc = 0x241A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241A18u;
            // 0x241a1c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241A20u; }
        if (ctx->pc != 0x241A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241A20u; }
        if (ctx->pc != 0x241A20u) { return; }
    }
    ctx->pc = 0x241A20u;
label_241a20:
    // 0x241a20: 0x8e650038  lw          $a1, 0x38($s3)
    ctx->pc = 0x241a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_241a24:
    // 0x241a24: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x241a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_241a28:
    // 0x241a28: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x241a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_241a2c:
    // 0x241a2c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x241a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_241a30:
    // 0x241a30: 0xae640038  sw          $a0, 0x38($s3)
    ctx->pc = 0x241a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 4));
label_241a34:
    // 0x241a34: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x241a34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_241a38:
    // 0x241a38: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x241a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_241a3c:
    // 0x241a3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x241a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_241a40:
    // 0x241a40: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x241a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
label_241a44:
    // 0x241a44: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x241a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_241a48:
    // 0x241a48: 0x96440020  lhu         $a0, 0x20($s2)
    ctx->pc = 0x241a48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
label_241a4c:
    // 0x241a4c: 0x8e660028  lw          $a2, 0x28($s3)
    ctx->pc = 0x241a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_241a50:
    // 0x241a50: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x241a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_241a54:
    // 0x241a54: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x241a54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_241a58:
    // 0x241a58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x241a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_241a5c:
    // 0x241a5c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x241a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_241a60:
    // 0x241a60: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x241a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_241a64:
    // 0x241a64: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x241a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_241a68:
    // 0x241a68: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x241a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_241a6c:
    // 0x241a6c: 0x96460020  lhu         $a2, 0x20($s2)
    ctx->pc = 0x241a6cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
label_241a70:
    // 0x241a70: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x241a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_241a74:
    // 0x241a74: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x241a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_241a78:
    // 0x241a78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x241a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_241a7c:
    // 0x241a7c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x241a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_241a80:
    // 0x241a80: 0xa4860020  sh          $a2, 0x20($a0)
    ctx->pc = 0x241a80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 6));
label_241a84:
    // 0x241a84: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x241a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_241a88:
    // 0x241a88: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x241a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_241a8c:
    // 0x241a8c: 0xae64002c  sw          $a0, 0x2C($s3)
    ctx->pc = 0x241a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 4));
label_241a90:
    // 0x241a90: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x241a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_241a94:
    // 0x241a94: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x241a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_241a98:
    // 0x241a98: 0xa6440020  sh          $a0, 0x20($s2)
    ctx->pc = 0x241a98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 4));
label_241a9c:
    // 0x241a9c: 0x92440028  lbu         $a0, 0x28($s2)
    ctx->pc = 0x241a9cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_241aa0:
    // 0x241aa0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x241aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_241aa4:
    // 0x241aa4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x241aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_241aa8:
    // 0x241aa8: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x241aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_241aac:
    // 0x241aac: 0xc66001a0  lwc1        $f0, 0x1A0($s3)
    ctx->pc = 0x241aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241ab0:
    // 0x241ab0: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x241ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
label_241ab4:
    // 0x241ab4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x241ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_241ab8:
    // 0x241ab8: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_241abc:
    if (ctx->pc == 0x241ABCu) {
        ctx->pc = 0x241ABCu;
            // 0x241abc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241AC0u;
        goto label_241ac0;
    }
    ctx->pc = 0x241AB8u;
    {
        const bool branch_taken_0x241ab8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x241ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241AB8u;
            // 0x241abc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ab8) {
            ctx->pc = 0x241B20u;
            goto label_241b20;
        }
    }
    ctx->pc = 0x241AC0u;
label_241ac0:
    // 0x241ac0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x241ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241ac4:
    // 0x241ac4: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x241ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_241ac8:
    // 0x241ac8: 0xc64c0048  lwc1        $f12, 0x48($s2)
    ctx->pc = 0x241ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_241acc:
    // 0x241acc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x241accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_241ad0:
    // 0x241ad0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x241ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_241ad4:
    // 0x241ad4: 0xc0a4170  jal         func_2905C0
label_241ad8:
    if (ctx->pc == 0x241AD8u) {
        ctx->pc = 0x241AD8u;
            // 0x241ad8: 0x268400b0  addiu       $a0, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->pc = 0x241ADCu;
        goto label_241adc;
    }
    ctx->pc = 0x241AD4u;
    SET_GPR_U32(ctx, 31, 0x241ADCu);
    ctx->pc = 0x241AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241AD4u;
            // 0x241ad8: 0x268400b0  addiu       $a0, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2905C0u;
    if (runtime->hasFunction(0x2905C0u)) {
        auto targetFn = runtime->lookupFunction(0x2905C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241ADCu; }
        if (ctx->pc != 0x241ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002905C0_0x2905c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241ADCu; }
        if (ctx->pc != 0x241ADCu) { return; }
    }
    ctx->pc = 0x241ADCu;
label_241adc:
    // 0x241adc: 0x8e9900a0  lw          $t9, 0xA0($s4)
    ctx->pc = 0x241adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_241ae0:
    // 0x241ae0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x241ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_241ae4:
    // 0x241ae4: 0x268400a0  addiu       $a0, $s4, 0xA0
    ctx->pc = 0x241ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_241ae8:
    // 0x241ae8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x241ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_241aec:
    // 0x241aec: 0x320f809  jalr        $t9
label_241af0:
    if (ctx->pc == 0x241AF0u) {
        ctx->pc = 0x241AF0u;
            // 0x241af0: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->pc = 0x241AF4u;
        goto label_241af4;
    }
    ctx->pc = 0x241AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241AF4u);
        ctx->pc = 0x241AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241AECu;
            // 0x241af0: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x241AF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x241AF4u; }
            if (ctx->pc != 0x241AF4u) { return; }
        }
        }
    }
    ctx->pc = 0x241AF4u;
label_241af4:
    // 0x241af4: 0x8e9900a0  lw          $t9, 0xA0($s4)
    ctx->pc = 0x241af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_241af8:
    // 0x241af8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x241af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_241afc:
    // 0x241afc: 0x268400a0  addiu       $a0, $s4, 0xA0
    ctx->pc = 0x241afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_241b00:
    // 0x241b00: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x241b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_241b04:
    // 0x241b04: 0x320f809  jalr        $t9
label_241b08:
    if (ctx->pc == 0x241B08u) {
        ctx->pc = 0x241B08u;
            // 0x241b08: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->pc = 0x241B0Cu;
        goto label_241b0c;
    }
    ctx->pc = 0x241B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x241B0Cu);
        ctx->pc = 0x241B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241B04u;
            // 0x241b08: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x241B0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x241B0Cu; }
            if (ctx->pc != 0x241B0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x241B0Cu;
label_241b0c:
    // 0x241b0c: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x241b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_241b10:
    // 0x241b10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x241b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_241b14:
    // 0x241b14: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x241b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_241b18:
    // 0x241b18: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_241b1c:
    if (ctx->pc == 0x241B1Cu) {
        ctx->pc = 0x241B1Cu;
            // 0x241b1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x241B20u;
        goto label_241b20;
    }
    ctx->pc = 0x241B18u;
    {
        const bool branch_taken_0x241b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241B18u;
            // 0x241b1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b18) {
            ctx->pc = 0x241AC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241ac4;
        }
    }
    ctx->pc = 0x241B20u;
label_241b20:
    // 0x241b20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x241b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_241b24:
    // 0x241b24: 0xc08e824  jal         func_23A090
label_241b28:
    if (ctx->pc == 0x241B28u) {
        ctx->pc = 0x241B28u;
            // 0x241b28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241B2Cu;
        goto label_241b2c;
    }
    ctx->pc = 0x241B24u;
    SET_GPR_U32(ctx, 31, 0x241B2Cu);
    ctx->pc = 0x241B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241B24u;
            // 0x241b28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A090u;
    if (runtime->hasFunction(0x23A090u)) {
        auto targetFn = runtime->lookupFunction(0x23A090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B2Cu; }
        if (ctx->pc != 0x241B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A090_0x23a090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B2Cu; }
        if (ctx->pc != 0x241B2Cu) { return; }
    }
    ctx->pc = 0x241B2Cu;
label_241b2c:
    // 0x241b2c: 0xc08cc88  jal         func_233220
label_241b30:
    if (ctx->pc == 0x241B30u) {
        ctx->pc = 0x241B30u;
            // 0x241b30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241B34u;
        goto label_241b34;
    }
    ctx->pc = 0x241B2Cu;
    SET_GPR_U32(ctx, 31, 0x241B34u);
    ctx->pc = 0x241B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241B2Cu;
            // 0x241b30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233220u;
    if (runtime->hasFunction(0x233220u)) {
        auto targetFn = runtime->lookupFunction(0x233220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B34u; }
        if (ctx->pc != 0x241B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233220_0x233220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B34u; }
        if (ctx->pc != 0x241B34u) { return; }
    }
    ctx->pc = 0x241B34u;
label_241b34:
    // 0x241b34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x241b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_241b38:
    // 0x241b38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x241b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_241b3c:
    // 0x241b3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x241b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_241b40:
    // 0x241b40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x241b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_241b44:
    // 0x241b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_241b48:
    // 0x241b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_241b4c:
    // 0x241b4c: 0x3e00008  jr          $ra
label_241b50:
    if (ctx->pc == 0x241B50u) {
        ctx->pc = 0x241B50u;
            // 0x241b50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x241B54u;
        goto label_241b54;
    }
    ctx->pc = 0x241B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241B4Cu;
            // 0x241b50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241B54u;
label_241b54:
    // 0x241b54: 0x0  nop
    ctx->pc = 0x241b54u;
    // NOP
label_241b58:
    // 0x241b58: 0x0  nop
    ctx->pc = 0x241b58u;
    // NOP
label_241b5c:
    // 0x241b5c: 0x0  nop
    ctx->pc = 0x241b5cu;
    // NOP
}
