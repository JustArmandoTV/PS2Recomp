#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004949C0
// Address: 0x4949c0 - 0x494bf0
void sub_004949C0_0x4949c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004949C0_0x4949c0");
#endif

    switch (ctx->pc) {
        case 0x4949c0u: goto label_4949c0;
        case 0x4949c4u: goto label_4949c4;
        case 0x4949c8u: goto label_4949c8;
        case 0x4949ccu: goto label_4949cc;
        case 0x4949d0u: goto label_4949d0;
        case 0x4949d4u: goto label_4949d4;
        case 0x4949d8u: goto label_4949d8;
        case 0x4949dcu: goto label_4949dc;
        case 0x4949e0u: goto label_4949e0;
        case 0x4949e4u: goto label_4949e4;
        case 0x4949e8u: goto label_4949e8;
        case 0x4949ecu: goto label_4949ec;
        case 0x4949f0u: goto label_4949f0;
        case 0x4949f4u: goto label_4949f4;
        case 0x4949f8u: goto label_4949f8;
        case 0x4949fcu: goto label_4949fc;
        case 0x494a00u: goto label_494a00;
        case 0x494a04u: goto label_494a04;
        case 0x494a08u: goto label_494a08;
        case 0x494a0cu: goto label_494a0c;
        case 0x494a10u: goto label_494a10;
        case 0x494a14u: goto label_494a14;
        case 0x494a18u: goto label_494a18;
        case 0x494a1cu: goto label_494a1c;
        case 0x494a20u: goto label_494a20;
        case 0x494a24u: goto label_494a24;
        case 0x494a28u: goto label_494a28;
        case 0x494a2cu: goto label_494a2c;
        case 0x494a30u: goto label_494a30;
        case 0x494a34u: goto label_494a34;
        case 0x494a38u: goto label_494a38;
        case 0x494a3cu: goto label_494a3c;
        case 0x494a40u: goto label_494a40;
        case 0x494a44u: goto label_494a44;
        case 0x494a48u: goto label_494a48;
        case 0x494a4cu: goto label_494a4c;
        case 0x494a50u: goto label_494a50;
        case 0x494a54u: goto label_494a54;
        case 0x494a58u: goto label_494a58;
        case 0x494a5cu: goto label_494a5c;
        case 0x494a60u: goto label_494a60;
        case 0x494a64u: goto label_494a64;
        case 0x494a68u: goto label_494a68;
        case 0x494a6cu: goto label_494a6c;
        case 0x494a70u: goto label_494a70;
        case 0x494a74u: goto label_494a74;
        case 0x494a78u: goto label_494a78;
        case 0x494a7cu: goto label_494a7c;
        case 0x494a80u: goto label_494a80;
        case 0x494a84u: goto label_494a84;
        case 0x494a88u: goto label_494a88;
        case 0x494a8cu: goto label_494a8c;
        case 0x494a90u: goto label_494a90;
        case 0x494a94u: goto label_494a94;
        case 0x494a98u: goto label_494a98;
        case 0x494a9cu: goto label_494a9c;
        case 0x494aa0u: goto label_494aa0;
        case 0x494aa4u: goto label_494aa4;
        case 0x494aa8u: goto label_494aa8;
        case 0x494aacu: goto label_494aac;
        case 0x494ab0u: goto label_494ab0;
        case 0x494ab4u: goto label_494ab4;
        case 0x494ab8u: goto label_494ab8;
        case 0x494abcu: goto label_494abc;
        case 0x494ac0u: goto label_494ac0;
        case 0x494ac4u: goto label_494ac4;
        case 0x494ac8u: goto label_494ac8;
        case 0x494accu: goto label_494acc;
        case 0x494ad0u: goto label_494ad0;
        case 0x494ad4u: goto label_494ad4;
        case 0x494ad8u: goto label_494ad8;
        case 0x494adcu: goto label_494adc;
        case 0x494ae0u: goto label_494ae0;
        case 0x494ae4u: goto label_494ae4;
        case 0x494ae8u: goto label_494ae8;
        case 0x494aecu: goto label_494aec;
        case 0x494af0u: goto label_494af0;
        case 0x494af4u: goto label_494af4;
        case 0x494af8u: goto label_494af8;
        case 0x494afcu: goto label_494afc;
        case 0x494b00u: goto label_494b00;
        case 0x494b04u: goto label_494b04;
        case 0x494b08u: goto label_494b08;
        case 0x494b0cu: goto label_494b0c;
        case 0x494b10u: goto label_494b10;
        case 0x494b14u: goto label_494b14;
        case 0x494b18u: goto label_494b18;
        case 0x494b1cu: goto label_494b1c;
        case 0x494b20u: goto label_494b20;
        case 0x494b24u: goto label_494b24;
        case 0x494b28u: goto label_494b28;
        case 0x494b2cu: goto label_494b2c;
        case 0x494b30u: goto label_494b30;
        case 0x494b34u: goto label_494b34;
        case 0x494b38u: goto label_494b38;
        case 0x494b3cu: goto label_494b3c;
        case 0x494b40u: goto label_494b40;
        case 0x494b44u: goto label_494b44;
        case 0x494b48u: goto label_494b48;
        case 0x494b4cu: goto label_494b4c;
        case 0x494b50u: goto label_494b50;
        case 0x494b54u: goto label_494b54;
        case 0x494b58u: goto label_494b58;
        case 0x494b5cu: goto label_494b5c;
        case 0x494b60u: goto label_494b60;
        case 0x494b64u: goto label_494b64;
        case 0x494b68u: goto label_494b68;
        case 0x494b6cu: goto label_494b6c;
        case 0x494b70u: goto label_494b70;
        case 0x494b74u: goto label_494b74;
        case 0x494b78u: goto label_494b78;
        case 0x494b7cu: goto label_494b7c;
        case 0x494b80u: goto label_494b80;
        case 0x494b84u: goto label_494b84;
        case 0x494b88u: goto label_494b88;
        case 0x494b8cu: goto label_494b8c;
        case 0x494b90u: goto label_494b90;
        case 0x494b94u: goto label_494b94;
        case 0x494b98u: goto label_494b98;
        case 0x494b9cu: goto label_494b9c;
        case 0x494ba0u: goto label_494ba0;
        case 0x494ba4u: goto label_494ba4;
        case 0x494ba8u: goto label_494ba8;
        case 0x494bacu: goto label_494bac;
        case 0x494bb0u: goto label_494bb0;
        case 0x494bb4u: goto label_494bb4;
        case 0x494bb8u: goto label_494bb8;
        case 0x494bbcu: goto label_494bbc;
        case 0x494bc0u: goto label_494bc0;
        case 0x494bc4u: goto label_494bc4;
        case 0x494bc8u: goto label_494bc8;
        case 0x494bccu: goto label_494bcc;
        case 0x494bd0u: goto label_494bd0;
        case 0x494bd4u: goto label_494bd4;
        case 0x494bd8u: goto label_494bd8;
        case 0x494bdcu: goto label_494bdc;
        case 0x494be0u: goto label_494be0;
        case 0x494be4u: goto label_494be4;
        case 0x494be8u: goto label_494be8;
        case 0x494becu: goto label_494bec;
        default: break;
    }

    ctx->pc = 0x4949c0u;

label_4949c0:
    // 0x4949c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4949c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4949c4:
    // 0x4949c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4949c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4949c8:
    // 0x4949c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4949c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4949cc:
    // 0x4949cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4949ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4949d0:
    // 0x4949d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4949d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4949d4:
    // 0x4949d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4949d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4949d8:
    // 0x4949d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4949d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4949dc:
    // 0x4949dc: 0x12400079  beqz        $s2, . + 4 + (0x79 << 2)
label_4949e0:
    if (ctx->pc == 0x4949E0u) {
        ctx->pc = 0x4949E0u;
            // 0x4949e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4949E4u;
        goto label_4949e4;
    }
    ctx->pc = 0x4949DCu;
    {
        const bool branch_taken_0x4949dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4949E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4949DCu;
            // 0x4949e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4949dc) {
            ctx->pc = 0x494BC4u;
            goto label_494bc4;
        }
    }
    ctx->pc = 0x4949E4u;
label_4949e4:
    // 0x4949e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4949e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4949e8:
    // 0x4949e8: 0x2442fa70  addiu       $v0, $v0, -0x590
    ctx->pc = 0x4949e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965872));
label_4949ec:
    // 0x4949ec: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4949ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4949f0:
    // 0x4949f0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x4949f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4949f4:
    // 0x4949f4: 0x8e50002c  lw          $s0, 0x2C($s2)
    ctx->pc = 0x4949f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_4949f8:
    // 0x4949f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4949f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4949fc:
    // 0x4949fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4949fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_494a00:
    // 0x494a00: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x494a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_494a04:
    // 0x494a04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x494a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_494a08:
    // 0x494a08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x494a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_494a0c:
    // 0x494a0c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_494a10:
    if (ctx->pc == 0x494A10u) {
        ctx->pc = 0x494A14u;
        goto label_494a14;
    }
    ctx->pc = 0x494A0Cu;
    {
        const bool branch_taken_0x494a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a0c) {
            ctx->pc = 0x494AC8u;
            goto label_494ac8;
        }
    }
    ctx->pc = 0x494A14u;
label_494a14:
    // 0x494a14: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x494a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_494a18:
    // 0x494a18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x494a18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_494a1c:
    // 0x494a1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x494a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494a20:
    // 0x494a20: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x494a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_494a24:
    // 0x494a24: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_494a28:
    if (ctx->pc == 0x494A28u) {
        ctx->pc = 0x494A2Cu;
        goto label_494a2c;
    }
    ctx->pc = 0x494A24u;
    {
        const bool branch_taken_0x494a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a24) {
            ctx->pc = 0x494A48u;
            goto label_494a48;
        }
    }
    ctx->pc = 0x494A2Cu;
label_494a2c:
    // 0x494a2c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_494a30:
    if (ctx->pc == 0x494A30u) {
        ctx->pc = 0x494A34u;
        goto label_494a34;
    }
    ctx->pc = 0x494A2Cu;
    {
        const bool branch_taken_0x494a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a2c) {
            ctx->pc = 0x494A48u;
            goto label_494a48;
        }
    }
    ctx->pc = 0x494A34u;
label_494a34:
    // 0x494a34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x494a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_494a38:
    // 0x494a38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x494a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_494a3c:
    // 0x494a3c: 0x320f809  jalr        $t9
label_494a40:
    if (ctx->pc == 0x494A40u) {
        ctx->pc = 0x494A40u;
            // 0x494a40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x494A44u;
        goto label_494a44;
    }
    ctx->pc = 0x494A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x494A44u);
        ctx->pc = 0x494A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494A3Cu;
            // 0x494a40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x494A44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x494A44u; }
            if (ctx->pc != 0x494A44u) { return; }
        }
        }
    }
    ctx->pc = 0x494A44u;
label_494a44:
    // 0x494a44: 0x0  nop
    ctx->pc = 0x494a44u;
    // NOP
label_494a48:
    // 0x494a48: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x494a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_494a4c:
    // 0x494a4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x494a4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_494a50:
    // 0x494a50: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x494a50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494a54:
    // 0x494a54: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_494a58:
    if (ctx->pc == 0x494A58u) {
        ctx->pc = 0x494A5Cu;
        goto label_494a5c;
    }
    ctx->pc = 0x494A54u;
    {
        const bool branch_taken_0x494a54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a54) {
            ctx->pc = 0x494A98u;
            goto label_494a98;
        }
    }
    ctx->pc = 0x494A5Cu;
label_494a5c:
    // 0x494a5c: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x494a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_494a60:
    // 0x494a60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_494a64:
    if (ctx->pc == 0x494A64u) {
        ctx->pc = 0x494A68u;
        goto label_494a68;
    }
    ctx->pc = 0x494A60u;
    {
        const bool branch_taken_0x494a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a60) {
            ctx->pc = 0x494A90u;
            goto label_494a90;
        }
    }
    ctx->pc = 0x494A68u;
label_494a68:
    // 0x494a68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_494a6c:
    if (ctx->pc == 0x494A6Cu) {
        ctx->pc = 0x494A70u;
        goto label_494a70;
    }
    ctx->pc = 0x494A68u;
    {
        const bool branch_taken_0x494a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a68) {
            ctx->pc = 0x494A90u;
            goto label_494a90;
        }
    }
    ctx->pc = 0x494A70u;
label_494a70:
    // 0x494a70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_494a74:
    if (ctx->pc == 0x494A74u) {
        ctx->pc = 0x494A78u;
        goto label_494a78;
    }
    ctx->pc = 0x494A70u;
    {
        const bool branch_taken_0x494a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a70) {
            ctx->pc = 0x494A90u;
            goto label_494a90;
        }
    }
    ctx->pc = 0x494A78u;
label_494a78:
    // 0x494a78: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x494a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_494a7c:
    // 0x494a7c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_494a80:
    if (ctx->pc == 0x494A80u) {
        ctx->pc = 0x494A84u;
        goto label_494a84;
    }
    ctx->pc = 0x494A7Cu;
    {
        const bool branch_taken_0x494a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a7c) {
            ctx->pc = 0x494A90u;
            goto label_494a90;
        }
    }
    ctx->pc = 0x494A84u;
label_494a84:
    // 0x494a84: 0xc0400a8  jal         func_1002A0
label_494a88:
    if (ctx->pc == 0x494A88u) {
        ctx->pc = 0x494A8Cu;
        goto label_494a8c;
    }
    ctx->pc = 0x494A84u;
    SET_GPR_U32(ctx, 31, 0x494A8Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494A8Cu; }
        if (ctx->pc != 0x494A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494A8Cu; }
        if (ctx->pc != 0x494A8Cu) { return; }
    }
    ctx->pc = 0x494A8Cu;
label_494a8c:
    // 0x494a8c: 0x0  nop
    ctx->pc = 0x494a8cu;
    // NOP
label_494a90:
    // 0x494a90: 0xc0400a8  jal         func_1002A0
label_494a94:
    if (ctx->pc == 0x494A94u) {
        ctx->pc = 0x494A94u;
            // 0x494a94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494A98u;
        goto label_494a98;
    }
    ctx->pc = 0x494A90u;
    SET_GPR_U32(ctx, 31, 0x494A98u);
    ctx->pc = 0x494A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494A90u;
            // 0x494a94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494A98u; }
        if (ctx->pc != 0x494A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494A98u; }
        if (ctx->pc != 0x494A98u) { return; }
    }
    ctx->pc = 0x494A98u;
label_494a98:
    // 0x494a98: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x494a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_494a9c:
    // 0x494a9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x494a9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_494aa0:
    // 0x494aa0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x494aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_494aa4:
    // 0x494aa4: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x494aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_494aa8:
    // 0x494aa8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x494aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_494aac:
    // 0x494aac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x494aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_494ab0:
    // 0x494ab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_494ab4:
    // 0x494ab4: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x494ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_494ab8:
    // 0x494ab8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x494ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_494abc:
    // 0x494abc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x494abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_494ac0:
    // 0x494ac0: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
label_494ac4:
    if (ctx->pc == 0x494AC4u) {
        ctx->pc = 0x494AC4u;
            // 0x494ac4: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x494AC8u;
        goto label_494ac8;
    }
    ctx->pc = 0x494AC0u;
    {
        const bool branch_taken_0x494ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494ac0) {
            ctx->pc = 0x494AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494AC0u;
            // 0x494ac4: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_494a18;
        }
    }
    ctx->pc = 0x494AC8u;
label_494ac8:
    // 0x494ac8: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x494ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_494acc:
    // 0x494acc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_494ad0:
    if (ctx->pc == 0x494AD0u) {
        ctx->pc = 0x494AD0u;
            // 0x494ad0: 0x8e4400bc  lw          $a0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->pc = 0x494AD4u;
        goto label_494ad4;
    }
    ctx->pc = 0x494ACCu;
    {
        const bool branch_taken_0x494acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494acc) {
            ctx->pc = 0x494AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494ACCu;
            // 0x494ad0: 0x8e4400bc  lw          $a0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494AE0u;
            goto label_494ae0;
        }
    }
    ctx->pc = 0x494AD4u;
label_494ad4:
    // 0x494ad4: 0xc04008c  jal         func_100230
label_494ad8:
    if (ctx->pc == 0x494AD8u) {
        ctx->pc = 0x494ADCu;
        goto label_494adc;
    }
    ctx->pc = 0x494AD4u;
    SET_GPR_U32(ctx, 31, 0x494ADCu);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494ADCu; }
        if (ctx->pc != 0x494ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494ADCu; }
        if (ctx->pc != 0x494ADCu) { return; }
    }
    ctx->pc = 0x494ADCu;
label_494adc:
    // 0x494adc: 0x8e4400bc  lw          $a0, 0xBC($s2)
    ctx->pc = 0x494adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_494ae0:
    // 0x494ae0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_494ae4:
    if (ctx->pc == 0x494AE4u) {
        ctx->pc = 0x494AE4u;
            // 0x494ae4: 0x264200ac  addiu       $v0, $s2, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
        ctx->pc = 0x494AE8u;
        goto label_494ae8;
    }
    ctx->pc = 0x494AE0u;
    {
        const bool branch_taken_0x494ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494ae0) {
            ctx->pc = 0x494AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494AE0u;
            // 0x494ae4: 0x264200ac  addiu       $v0, $s2, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494AF4u;
            goto label_494af4;
        }
    }
    ctx->pc = 0x494AE8u;
label_494ae8:
    // 0x494ae8: 0xc04008c  jal         func_100230
label_494aec:
    if (ctx->pc == 0x494AECu) {
        ctx->pc = 0x494AF0u;
        goto label_494af0;
    }
    ctx->pc = 0x494AE8u;
    SET_GPR_U32(ctx, 31, 0x494AF0u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494AF0u; }
        if (ctx->pc != 0x494AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494AF0u; }
        if (ctx->pc != 0x494AF0u) { return; }
    }
    ctx->pc = 0x494AF0u;
label_494af0:
    // 0x494af0: 0x264200ac  addiu       $v0, $s2, 0xAC
    ctx->pc = 0x494af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
label_494af4:
    // 0x494af4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_494af8:
    if (ctx->pc == 0x494AF8u) {
        ctx->pc = 0x494AF8u;
            // 0x494af8: 0x26440048  addiu       $a0, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->pc = 0x494AFCu;
        goto label_494afc;
    }
    ctx->pc = 0x494AF4u;
    {
        const bool branch_taken_0x494af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494af4) {
            ctx->pc = 0x494AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494AF4u;
            // 0x494af8: 0x26440048  addiu       $a0, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494B24u;
            goto label_494b24;
        }
    }
    ctx->pc = 0x494AFCu;
label_494afc:
    // 0x494afc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_494b00:
    if (ctx->pc == 0x494B00u) {
        ctx->pc = 0x494B04u;
        goto label_494b04;
    }
    ctx->pc = 0x494AFCu;
    {
        const bool branch_taken_0x494afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494afc) {
            ctx->pc = 0x494B20u;
            goto label_494b20;
        }
    }
    ctx->pc = 0x494B04u;
label_494b04:
    // 0x494b04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_494b08:
    if (ctx->pc == 0x494B08u) {
        ctx->pc = 0x494B0Cu;
        goto label_494b0c;
    }
    ctx->pc = 0x494B04u;
    {
        const bool branch_taken_0x494b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b04) {
            ctx->pc = 0x494B20u;
            goto label_494b20;
        }
    }
    ctx->pc = 0x494B0Cu;
label_494b0c:
    // 0x494b0c: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x494b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_494b10:
    // 0x494b10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_494b14:
    if (ctx->pc == 0x494B14u) {
        ctx->pc = 0x494B18u;
        goto label_494b18;
    }
    ctx->pc = 0x494B10u;
    {
        const bool branch_taken_0x494b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b10) {
            ctx->pc = 0x494B20u;
            goto label_494b20;
        }
    }
    ctx->pc = 0x494B18u;
label_494b18:
    // 0x494b18: 0xc0400a8  jal         func_1002A0
label_494b1c:
    if (ctx->pc == 0x494B1Cu) {
        ctx->pc = 0x494B20u;
        goto label_494b20;
    }
    ctx->pc = 0x494B18u;
    SET_GPR_U32(ctx, 31, 0x494B20u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494B20u; }
        if (ctx->pc != 0x494B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494B20u; }
        if (ctx->pc != 0x494B20u) { return; }
    }
    ctx->pc = 0x494B20u;
label_494b20:
    // 0x494b20: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x494b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_494b24:
    // 0x494b24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_494b28:
    if (ctx->pc == 0x494B28u) {
        ctx->pc = 0x494B28u;
            // 0x494b28: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x494B2Cu;
        goto label_494b2c;
    }
    ctx->pc = 0x494B24u;
    {
        const bool branch_taken_0x494b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b24) {
            ctx->pc = 0x494B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494B24u;
            // 0x494b28: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494B40u;
            goto label_494b40;
        }
    }
    ctx->pc = 0x494B2Cu;
label_494b2c:
    // 0x494b2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_494b30:
    if (ctx->pc == 0x494B30u) {
        ctx->pc = 0x494B34u;
        goto label_494b34;
    }
    ctx->pc = 0x494B2Cu;
    {
        const bool branch_taken_0x494b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b2c) {
            ctx->pc = 0x494B3Cu;
            goto label_494b3c;
        }
    }
    ctx->pc = 0x494B34u;
label_494b34:
    // 0x494b34: 0xc125f28  jal         func_497CA0
label_494b38:
    if (ctx->pc == 0x494B38u) {
        ctx->pc = 0x494B38u;
            // 0x494b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494B3Cu;
        goto label_494b3c;
    }
    ctx->pc = 0x494B34u;
    SET_GPR_U32(ctx, 31, 0x494B3Cu);
    ctx->pc = 0x494B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494B34u;
            // 0x494b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497CA0u;
    if (runtime->hasFunction(0x497CA0u)) {
        auto targetFn = runtime->lookupFunction(0x497CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494B3Cu; }
        if (ctx->pc != 0x494B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497CA0_0x497ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494B3Cu; }
        if (ctx->pc != 0x494B3Cu) { return; }
    }
    ctx->pc = 0x494B3Cu;
label_494b3c:
    // 0x494b3c: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x494b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_494b40:
    // 0x494b40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_494b44:
    if (ctx->pc == 0x494B44u) {
        ctx->pc = 0x494B44u;
            // 0x494b44: 0x26420024  addiu       $v0, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->pc = 0x494B48u;
        goto label_494b48;
    }
    ctx->pc = 0x494B40u;
    {
        const bool branch_taken_0x494b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b40) {
            ctx->pc = 0x494B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494B40u;
            // 0x494b44: 0x26420024  addiu       $v0, $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494B5Cu;
            goto label_494b5c;
        }
    }
    ctx->pc = 0x494B48u;
label_494b48:
    // 0x494b48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_494b4c:
    if (ctx->pc == 0x494B4Cu) {
        ctx->pc = 0x494B50u;
        goto label_494b50;
    }
    ctx->pc = 0x494B48u;
    {
        const bool branch_taken_0x494b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b48) {
            ctx->pc = 0x494B58u;
            goto label_494b58;
        }
    }
    ctx->pc = 0x494B50u;
label_494b50:
    // 0x494b50: 0xc125f0c  jal         func_497C30
label_494b54:
    if (ctx->pc == 0x494B54u) {
        ctx->pc = 0x494B54u;
            // 0x494b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494B58u;
        goto label_494b58;
    }
    ctx->pc = 0x494B50u;
    SET_GPR_U32(ctx, 31, 0x494B58u);
    ctx->pc = 0x494B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494B50u;
            // 0x494b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x497C30u;
    if (runtime->hasFunction(0x497C30u)) {
        auto targetFn = runtime->lookupFunction(0x497C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494B58u; }
        if (ctx->pc != 0x494B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497C30_0x497c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494B58u; }
        if (ctx->pc != 0x494B58u) { return; }
    }
    ctx->pc = 0x494B58u;
label_494b58:
    // 0x494b58: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x494b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_494b5c:
    // 0x494b5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_494b60:
    if (ctx->pc == 0x494B60u) {
        ctx->pc = 0x494B64u;
        goto label_494b64;
    }
    ctx->pc = 0x494B5Cu;
    {
        const bool branch_taken_0x494b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b5c) {
            ctx->pc = 0x494B88u;
            goto label_494b88;
        }
    }
    ctx->pc = 0x494B64u;
label_494b64:
    // 0x494b64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_494b68:
    if (ctx->pc == 0x494B68u) {
        ctx->pc = 0x494B6Cu;
        goto label_494b6c;
    }
    ctx->pc = 0x494B64u;
    {
        const bool branch_taken_0x494b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b64) {
            ctx->pc = 0x494B88u;
            goto label_494b88;
        }
    }
    ctx->pc = 0x494B6Cu;
label_494b6c:
    // 0x494b6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_494b70:
    if (ctx->pc == 0x494B70u) {
        ctx->pc = 0x494B74u;
        goto label_494b74;
    }
    ctx->pc = 0x494B6Cu;
    {
        const bool branch_taken_0x494b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b6c) {
            ctx->pc = 0x494B88u;
            goto label_494b88;
        }
    }
    ctx->pc = 0x494B74u;
label_494b74:
    // 0x494b74: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x494b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_494b78:
    // 0x494b78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_494b7c:
    if (ctx->pc == 0x494B7Cu) {
        ctx->pc = 0x494B80u;
        goto label_494b80;
    }
    ctx->pc = 0x494B78u;
    {
        const bool branch_taken_0x494b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b78) {
            ctx->pc = 0x494B88u;
            goto label_494b88;
        }
    }
    ctx->pc = 0x494B80u;
label_494b80:
    // 0x494b80: 0xc0400a8  jal         func_1002A0
label_494b84:
    if (ctx->pc == 0x494B84u) {
        ctx->pc = 0x494B88u;
        goto label_494b88;
    }
    ctx->pc = 0x494B80u;
    SET_GPR_U32(ctx, 31, 0x494B88u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494B88u; }
        if (ctx->pc != 0x494B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494B88u; }
        if (ctx->pc != 0x494B88u) { return; }
    }
    ctx->pc = 0x494B88u;
label_494b88:
    // 0x494b88: 0x52400009  beql        $s2, $zero, . + 4 + (0x9 << 2)
label_494b8c:
    if (ctx->pc == 0x494B8Cu) {
        ctx->pc = 0x494B8Cu;
            // 0x494b8c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x494B90u;
        goto label_494b90;
    }
    ctx->pc = 0x494B88u;
    {
        const bool branch_taken_0x494b88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b88) {
            ctx->pc = 0x494B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494B88u;
            // 0x494b8c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494BB0u;
            goto label_494bb0;
        }
    }
    ctx->pc = 0x494B90u;
label_494b90:
    // 0x494b90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x494b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_494b94:
    // 0x494b94: 0x2442f970  addiu       $v0, $v0, -0x690
    ctx->pc = 0x494b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965616));
label_494b98:
    // 0x494b98: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_494b9c:
    if (ctx->pc == 0x494B9Cu) {
        ctx->pc = 0x494B9Cu;
            // 0x494b9c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x494BA0u;
        goto label_494ba0;
    }
    ctx->pc = 0x494B98u;
    {
        const bool branch_taken_0x494b98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x494B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494B98u;
            // 0x494b9c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494b98) {
            ctx->pc = 0x494BACu;
            goto label_494bac;
        }
    }
    ctx->pc = 0x494BA0u;
label_494ba0:
    // 0x494ba0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x494ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_494ba4:
    // 0x494ba4: 0x2442f9c0  addiu       $v0, $v0, -0x640
    ctx->pc = 0x494ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965696));
label_494ba8:
    // 0x494ba8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x494ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_494bac:
    // 0x494bac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x494bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_494bb0:
    // 0x494bb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x494bb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_494bb4:
    // 0x494bb4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_494bb8:
    if (ctx->pc == 0x494BB8u) {
        ctx->pc = 0x494BB8u;
            // 0x494bb8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494BBCu;
        goto label_494bbc;
    }
    ctx->pc = 0x494BB4u;
    {
        const bool branch_taken_0x494bb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x494bb4) {
            ctx->pc = 0x494BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x494BB4u;
            // 0x494bb8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x494BC8u;
            goto label_494bc8;
        }
    }
    ctx->pc = 0x494BBCu;
label_494bbc:
    // 0x494bbc: 0xc0400a8  jal         func_1002A0
label_494bc0:
    if (ctx->pc == 0x494BC0u) {
        ctx->pc = 0x494BC0u;
            // 0x494bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x494BC4u;
        goto label_494bc4;
    }
    ctx->pc = 0x494BBCu;
    SET_GPR_U32(ctx, 31, 0x494BC4u);
    ctx->pc = 0x494BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x494BBCu;
            // 0x494bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494BC4u; }
        if (ctx->pc != 0x494BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x494BC4u; }
        if (ctx->pc != 0x494BC4u) { return; }
    }
    ctx->pc = 0x494BC4u;
label_494bc4:
    // 0x494bc4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x494bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_494bc8:
    // 0x494bc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x494bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_494bcc:
    // 0x494bcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x494bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_494bd0:
    // 0x494bd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x494bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_494bd4:
    // 0x494bd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x494bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_494bd8:
    // 0x494bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x494bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_494bdc:
    // 0x494bdc: 0x3e00008  jr          $ra
label_494be0:
    if (ctx->pc == 0x494BE0u) {
        ctx->pc = 0x494BE0u;
            // 0x494be0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x494BE4u;
        goto label_494be4;
    }
    ctx->pc = 0x494BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x494BDCu;
            // 0x494be0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x494BE4u;
label_494be4:
    // 0x494be4: 0x0  nop
    ctx->pc = 0x494be4u;
    // NOP
label_494be8:
    // 0x494be8: 0x0  nop
    ctx->pc = 0x494be8u;
    // NOP
label_494bec:
    // 0x494bec: 0x0  nop
    ctx->pc = 0x494becu;
    // NOP
}
