#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00462B60
// Address: 0x462b60 - 0x462d50
void sub_00462B60_0x462b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462B60_0x462b60");
#endif

    switch (ctx->pc) {
        case 0x462b60u: goto label_462b60;
        case 0x462b64u: goto label_462b64;
        case 0x462b68u: goto label_462b68;
        case 0x462b6cu: goto label_462b6c;
        case 0x462b70u: goto label_462b70;
        case 0x462b74u: goto label_462b74;
        case 0x462b78u: goto label_462b78;
        case 0x462b7cu: goto label_462b7c;
        case 0x462b80u: goto label_462b80;
        case 0x462b84u: goto label_462b84;
        case 0x462b88u: goto label_462b88;
        case 0x462b8cu: goto label_462b8c;
        case 0x462b90u: goto label_462b90;
        case 0x462b94u: goto label_462b94;
        case 0x462b98u: goto label_462b98;
        case 0x462b9cu: goto label_462b9c;
        case 0x462ba0u: goto label_462ba0;
        case 0x462ba4u: goto label_462ba4;
        case 0x462ba8u: goto label_462ba8;
        case 0x462bacu: goto label_462bac;
        case 0x462bb0u: goto label_462bb0;
        case 0x462bb4u: goto label_462bb4;
        case 0x462bb8u: goto label_462bb8;
        case 0x462bbcu: goto label_462bbc;
        case 0x462bc0u: goto label_462bc0;
        case 0x462bc4u: goto label_462bc4;
        case 0x462bc8u: goto label_462bc8;
        case 0x462bccu: goto label_462bcc;
        case 0x462bd0u: goto label_462bd0;
        case 0x462bd4u: goto label_462bd4;
        case 0x462bd8u: goto label_462bd8;
        case 0x462bdcu: goto label_462bdc;
        case 0x462be0u: goto label_462be0;
        case 0x462be4u: goto label_462be4;
        case 0x462be8u: goto label_462be8;
        case 0x462becu: goto label_462bec;
        case 0x462bf0u: goto label_462bf0;
        case 0x462bf4u: goto label_462bf4;
        case 0x462bf8u: goto label_462bf8;
        case 0x462bfcu: goto label_462bfc;
        case 0x462c00u: goto label_462c00;
        case 0x462c04u: goto label_462c04;
        case 0x462c08u: goto label_462c08;
        case 0x462c0cu: goto label_462c0c;
        case 0x462c10u: goto label_462c10;
        case 0x462c14u: goto label_462c14;
        case 0x462c18u: goto label_462c18;
        case 0x462c1cu: goto label_462c1c;
        case 0x462c20u: goto label_462c20;
        case 0x462c24u: goto label_462c24;
        case 0x462c28u: goto label_462c28;
        case 0x462c2cu: goto label_462c2c;
        case 0x462c30u: goto label_462c30;
        case 0x462c34u: goto label_462c34;
        case 0x462c38u: goto label_462c38;
        case 0x462c3cu: goto label_462c3c;
        case 0x462c40u: goto label_462c40;
        case 0x462c44u: goto label_462c44;
        case 0x462c48u: goto label_462c48;
        case 0x462c4cu: goto label_462c4c;
        case 0x462c50u: goto label_462c50;
        case 0x462c54u: goto label_462c54;
        case 0x462c58u: goto label_462c58;
        case 0x462c5cu: goto label_462c5c;
        case 0x462c60u: goto label_462c60;
        case 0x462c64u: goto label_462c64;
        case 0x462c68u: goto label_462c68;
        case 0x462c6cu: goto label_462c6c;
        case 0x462c70u: goto label_462c70;
        case 0x462c74u: goto label_462c74;
        case 0x462c78u: goto label_462c78;
        case 0x462c7cu: goto label_462c7c;
        case 0x462c80u: goto label_462c80;
        case 0x462c84u: goto label_462c84;
        case 0x462c88u: goto label_462c88;
        case 0x462c8cu: goto label_462c8c;
        case 0x462c90u: goto label_462c90;
        case 0x462c94u: goto label_462c94;
        case 0x462c98u: goto label_462c98;
        case 0x462c9cu: goto label_462c9c;
        case 0x462ca0u: goto label_462ca0;
        case 0x462ca4u: goto label_462ca4;
        case 0x462ca8u: goto label_462ca8;
        case 0x462cacu: goto label_462cac;
        case 0x462cb0u: goto label_462cb0;
        case 0x462cb4u: goto label_462cb4;
        case 0x462cb8u: goto label_462cb8;
        case 0x462cbcu: goto label_462cbc;
        case 0x462cc0u: goto label_462cc0;
        case 0x462cc4u: goto label_462cc4;
        case 0x462cc8u: goto label_462cc8;
        case 0x462cccu: goto label_462ccc;
        case 0x462cd0u: goto label_462cd0;
        case 0x462cd4u: goto label_462cd4;
        case 0x462cd8u: goto label_462cd8;
        case 0x462cdcu: goto label_462cdc;
        case 0x462ce0u: goto label_462ce0;
        case 0x462ce4u: goto label_462ce4;
        case 0x462ce8u: goto label_462ce8;
        case 0x462cecu: goto label_462cec;
        case 0x462cf0u: goto label_462cf0;
        case 0x462cf4u: goto label_462cf4;
        case 0x462cf8u: goto label_462cf8;
        case 0x462cfcu: goto label_462cfc;
        case 0x462d00u: goto label_462d00;
        case 0x462d04u: goto label_462d04;
        case 0x462d08u: goto label_462d08;
        case 0x462d0cu: goto label_462d0c;
        case 0x462d10u: goto label_462d10;
        case 0x462d14u: goto label_462d14;
        case 0x462d18u: goto label_462d18;
        case 0x462d1cu: goto label_462d1c;
        case 0x462d20u: goto label_462d20;
        case 0x462d24u: goto label_462d24;
        case 0x462d28u: goto label_462d28;
        case 0x462d2cu: goto label_462d2c;
        case 0x462d30u: goto label_462d30;
        case 0x462d34u: goto label_462d34;
        case 0x462d38u: goto label_462d38;
        case 0x462d3cu: goto label_462d3c;
        case 0x462d40u: goto label_462d40;
        case 0x462d44u: goto label_462d44;
        case 0x462d48u: goto label_462d48;
        case 0x462d4cu: goto label_462d4c;
        default: break;
    }

    ctx->pc = 0x462b60u;

label_462b60:
    // 0x462b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x462b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_462b64:
    // 0x462b64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x462b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_462b68:
    // 0x462b68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x462b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_462b6c:
    // 0x462b6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x462b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_462b70:
    // 0x462b70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x462b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_462b74:
    // 0x462b74: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x462b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_462b78:
    // 0x462b78: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x462b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_462b7c:
    // 0x462b7c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x462b7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_462b80:
    // 0x462b80: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x462b80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_462b84:
    // 0x462b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x462b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_462b88:
    // 0x462b88: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x462b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_462b8c:
    // 0x462b8c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x462b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_462b90:
    // 0x462b90: 0xc0cd08c  jal         func_334230
label_462b94:
    if (ctx->pc == 0x462B94u) {
        ctx->pc = 0x462B94u;
            // 0x462b94: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462B98u;
        goto label_462b98;
    }
    ctx->pc = 0x462B90u;
    SET_GPR_U32(ctx, 31, 0x462B98u);
    ctx->pc = 0x462B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462B90u;
            // 0x462b94: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334230u;
    if (runtime->hasFunction(0x334230u)) {
        auto targetFn = runtime->lookupFunction(0x334230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462B98u; }
        if (ctx->pc != 0x462B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334230_0x334230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462B98u; }
        if (ctx->pc != 0x462B98u) { return; }
    }
    ctx->pc = 0x462B98u;
label_462b98:
    // 0x462b98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x462b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_462b9c:
    // 0x462b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x462b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_462ba0:
    // 0x462ba0: 0x2442e570  addiu       $v0, $v0, -0x1A90
    ctx->pc = 0x462ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960496));
label_462ba4:
    // 0x462ba4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x462ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_462ba8:
    // 0x462ba8: 0xae000cbc  sw          $zero, 0xCBC($s0)
    ctx->pc = 0x462ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3260), GPR_U32(ctx, 0));
label_462bac:
    // 0x462bac: 0xae000cc0  sw          $zero, 0xCC0($s0)
    ctx->pc = 0x462bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3264), GPR_U32(ctx, 0));
label_462bb0:
    // 0x462bb0: 0xae000cc4  sw          $zero, 0xCC4($s0)
    ctx->pc = 0x462bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3268), GPR_U32(ctx, 0));
label_462bb4:
    // 0x462bb4: 0xae000cc8  sw          $zero, 0xCC8($s0)
    ctx->pc = 0x462bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3272), GPR_U32(ctx, 0));
label_462bb8:
    // 0x462bb8: 0xa2000ccc  sb          $zero, 0xCCC($s0)
    ctx->pc = 0x462bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3276), (uint8_t)GPR_U32(ctx, 0));
label_462bbc:
    // 0x462bbc: 0xa2000ccd  sb          $zero, 0xCCD($s0)
    ctx->pc = 0x462bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3277), (uint8_t)GPR_U32(ctx, 0));
label_462bc0:
    // 0x462bc0: 0xc11897c  jal         func_4625F0
label_462bc4:
    if (ctx->pc == 0x462BC4u) {
        ctx->pc = 0x462BC4u;
            // 0x462bc4: 0xa2000cce  sb          $zero, 0xCCE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3278), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x462BC8u;
        goto label_462bc8;
    }
    ctx->pc = 0x462BC0u;
    SET_GPR_U32(ctx, 31, 0x462BC8u);
    ctx->pc = 0x462BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462BC0u;
            // 0x462bc4: 0xa2000cce  sb          $zero, 0xCCE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3278), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4625F0u;
    if (runtime->hasFunction(0x4625F0u)) {
        auto targetFn = runtime->lookupFunction(0x4625F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462BC8u; }
        if (ctx->pc != 0x462BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004625F0_0x4625f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462BC8u; }
        if (ctx->pc != 0x462BC8u) { return; }
    }
    ctx->pc = 0x462BC8u;
label_462bc8:
    // 0x462bc8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x462bc8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_462bcc:
    // 0x462bcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x462bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_462bd0:
    // 0x462bd0: 0x8c4589d0  lw          $a1, -0x7630($v0)
    ctx->pc = 0x462bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_462bd4:
    // 0x462bd4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x462bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_462bd8:
    // 0x462bd8: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x462bd8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_462bdc:
    // 0x462bdc: 0x43e7c  dsll32      $a3, $a0, 25
    ctx->pc = 0x462bdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 25));
label_462be0:
    // 0x462be0: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x462be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_462be4:
    // 0x462be4: 0x73fbe  dsrl32      $a3, $a3, 30
    ctx->pc = 0x462be4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 30));
label_462be8:
    // 0x462be8: 0xa0a40078  sb          $a0, 0x78($a1)
    ctx->pc = 0x462be8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 4));
label_462bec:
    // 0x462bec: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x462becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_462bf0:
    // 0x462bf0: 0xa0a6007a  sb          $a2, 0x7A($a1)
    ctx->pc = 0x462bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 122), (uint8_t)GPR_U32(ctx, 6));
label_462bf4:
    // 0x462bf4: 0xa0a70079  sb          $a3, 0x79($a1)
    ctx->pc = 0x462bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 7));
label_462bf8:
    // 0x462bf8: 0x8e040960  lw          $a0, 0x960($s0)
    ctx->pc = 0x462bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2400)));
label_462bfc:
    // 0x462bfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x462bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_462c00:
    // 0x462c00: 0xae030960  sw          $v1, 0x960($s0)
    ctx->pc = 0x462c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2400), GPR_U32(ctx, 3));
label_462c04:
    // 0x462c04: 0x9042cff0  lbu         $v0, -0x3010($v0)
    ctx->pc = 0x462c04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954992)));
label_462c08:
    // 0x462c08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_462c0c:
    if (ctx->pc == 0x462C0Cu) {
        ctx->pc = 0x462C0Cu;
            // 0x462c0c: 0xa2000ce0  sb          $zero, 0xCE0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3296), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x462C10u;
        goto label_462c10;
    }
    ctx->pc = 0x462C08u;
    {
        const bool branch_taken_0x462c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462c08) {
            ctx->pc = 0x462C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462C08u;
            // 0x462c0c: 0xa2000ce0  sb          $zero, 0xCE0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3296), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462C18u;
            goto label_462c18;
        }
    }
    ctx->pc = 0x462C10u;
label_462c10:
    // 0x462c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x462c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462c14:
    // 0x462c14: 0xa2020ce0  sb          $v0, 0xCE0($s0)
    ctx->pc = 0x462c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3296), (uint8_t)GPR_U32(ctx, 2));
label_462c18:
    // 0x462c18: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x462c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_462c1c:
    // 0x462c1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x462c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_462c20:
    // 0x462c20: 0xa0606068  sb          $zero, 0x6068($v1)
    ctx->pc = 0x462c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24680), (uint8_t)GPR_U32(ctx, 0));
label_462c24:
    // 0x462c24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x462c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_462c28:
    // 0x462c28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x462c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_462c2c:
    // 0x462c2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x462c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_462c30:
    // 0x462c30: 0x3e00008  jr          $ra
label_462c34:
    if (ctx->pc == 0x462C34u) {
        ctx->pc = 0x462C34u;
            // 0x462c34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x462C38u;
        goto label_462c38;
    }
    ctx->pc = 0x462C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462C30u;
            // 0x462c34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462C38u;
label_462c38:
    // 0x462c38: 0x0  nop
    ctx->pc = 0x462c38u;
    // NOP
label_462c3c:
    // 0x462c3c: 0x0  nop
    ctx->pc = 0x462c3cu;
    // NOP
label_462c40:
    // 0x462c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x462c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_462c44:
    // 0x462c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x462c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_462c48:
    // 0x462c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x462c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_462c4c:
    // 0x462c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x462c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_462c50:
    // 0x462c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x462c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_462c54:
    // 0x462c54: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_462c58:
    if (ctx->pc == 0x462C58u) {
        ctx->pc = 0x462C58u;
            // 0x462c58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462C5Cu;
        goto label_462c5c;
    }
    ctx->pc = 0x462C54u;
    {
        const bool branch_taken_0x462c54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x462C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462C54u;
            // 0x462c58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462c54) {
            ctx->pc = 0x462CD8u;
            goto label_462cd8;
        }
    }
    ctx->pc = 0x462C5Cu;
label_462c5c:
    // 0x462c5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x462c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_462c60:
    // 0x462c60: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x462c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_462c64:
    // 0x462c64: 0x2442e630  addiu       $v0, $v0, -0x19D0
    ctx->pc = 0x462c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960688));
label_462c68:
    // 0x462c68: 0x2463e63c  addiu       $v1, $v1, -0x19C4
    ctx->pc = 0x462c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960700));
label_462c6c:
    // 0x462c6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x462c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_462c70:
    // 0x462c70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_462c74:
    // 0x462c74: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x462c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_462c78:
    // 0x462c78: 0xc0400a8  jal         func_1002A0
label_462c7c:
    if (ctx->pc == 0x462C7Cu) {
        ctx->pc = 0x462C7Cu;
            // 0x462c7c: 0x8c446060  lw          $a0, 0x6060($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24672)));
        ctx->pc = 0x462C80u;
        goto label_462c80;
    }
    ctx->pc = 0x462C78u;
    SET_GPR_U32(ctx, 31, 0x462C80u);
    ctx->pc = 0x462C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462C78u;
            // 0x462c7c: 0x8c446060  lw          $a0, 0x6060($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24672)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462C80u; }
        if (ctx->pc != 0x462C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462C80u; }
        if (ctx->pc != 0x462C80u) { return; }
    }
    ctx->pc = 0x462C80u;
label_462c80:
    // 0x462c80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_462c84:
    // 0x462c84: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x462c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_462c88:
    // 0x462c88: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_462c8c:
    if (ctx->pc == 0x462C8Cu) {
        ctx->pc = 0x462C8Cu;
            // 0x462c8c: 0xac406060  sw          $zero, 0x6060($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24672), GPR_U32(ctx, 0));
        ctx->pc = 0x462C90u;
        goto label_462c90;
    }
    ctx->pc = 0x462C88u;
    {
        const bool branch_taken_0x462c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x462C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462C88u;
            // 0x462c8c: 0xac406060  sw          $zero, 0x6060($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x462c88) {
            ctx->pc = 0x462CA4u;
            goto label_462ca4;
        }
    }
    ctx->pc = 0x462C90u;
label_462c90:
    // 0x462c90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x462c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_462c94:
    // 0x462c94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x462c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462c98:
    // 0x462c98: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x462c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_462c9c:
    // 0x462c9c: 0xc057a68  jal         func_15E9A0
label_462ca0:
    if (ctx->pc == 0x462CA0u) {
        ctx->pc = 0x462CA0u;
            // 0x462ca0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x462CA4u;
        goto label_462ca4;
    }
    ctx->pc = 0x462C9Cu;
    SET_GPR_U32(ctx, 31, 0x462CA4u);
    ctx->pc = 0x462CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462C9Cu;
            // 0x462ca0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462CA4u; }
        if (ctx->pc != 0x462CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462CA4u; }
        if (ctx->pc != 0x462CA4u) { return; }
    }
    ctx->pc = 0x462CA4u;
label_462ca4:
    // 0x462ca4: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_462ca8:
    if (ctx->pc == 0x462CA8u) {
        ctx->pc = 0x462CA8u;
            // 0x462ca8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x462CACu;
        goto label_462cac;
    }
    ctx->pc = 0x462CA4u;
    {
        const bool branch_taken_0x462ca4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x462ca4) {
            ctx->pc = 0x462CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462CA4u;
            // 0x462ca8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462CC4u;
            goto label_462cc4;
        }
    }
    ctx->pc = 0x462CACu;
label_462cac:
    // 0x462cac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x462cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_462cb0:
    // 0x462cb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x462cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_462cb4:
    // 0x462cb4: 0x2463e678  addiu       $v1, $v1, -0x1988
    ctx->pc = 0x462cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960760));
label_462cb8:
    // 0x462cb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x462cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_462cbc:
    // 0x462cbc: 0xac403e78  sw          $zero, 0x3E78($v0)
    ctx->pc = 0x462cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15992), GPR_U32(ctx, 0));
label_462cc0:
    // 0x462cc0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x462cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_462cc4:
    // 0x462cc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x462cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_462cc8:
    // 0x462cc8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_462ccc:
    if (ctx->pc == 0x462CCCu) {
        ctx->pc = 0x462CCCu;
            // 0x462ccc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462CD0u;
        goto label_462cd0;
    }
    ctx->pc = 0x462CC8u;
    {
        const bool branch_taken_0x462cc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x462cc8) {
            ctx->pc = 0x462CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x462CC8u;
            // 0x462ccc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x462CDCu;
            goto label_462cdc;
        }
    }
    ctx->pc = 0x462CD0u;
label_462cd0:
    // 0x462cd0: 0xc0400a8  jal         func_1002A0
label_462cd4:
    if (ctx->pc == 0x462CD4u) {
        ctx->pc = 0x462CD4u;
            // 0x462cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x462CD8u;
        goto label_462cd8;
    }
    ctx->pc = 0x462CD0u;
    SET_GPR_U32(ctx, 31, 0x462CD8u);
    ctx->pc = 0x462CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462CD0u;
            // 0x462cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462CD8u; }
        if (ctx->pc != 0x462CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x462CD8u; }
        if (ctx->pc != 0x462CD8u) { return; }
    }
    ctx->pc = 0x462CD8u;
label_462cd8:
    // 0x462cd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x462cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_462cdc:
    // 0x462cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x462cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_462ce0:
    // 0x462ce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x462ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_462ce4:
    // 0x462ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x462ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_462ce8:
    // 0x462ce8: 0x3e00008  jr          $ra
label_462cec:
    if (ctx->pc == 0x462CECu) {
        ctx->pc = 0x462CECu;
            // 0x462cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x462CF0u;
        goto label_462cf0;
    }
    ctx->pc = 0x462CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462CE8u;
            // 0x462cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462CF0u;
label_462cf0:
    // 0x462cf0: 0x80dcc34  j           func_3730D0
label_462cf4:
    if (ctx->pc == 0x462CF4u) {
        ctx->pc = 0x462CF4u;
            // 0x462cf4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x462CF8u;
        goto label_462cf8;
    }
    ctx->pc = 0x462CF0u;
    ctx->pc = 0x462CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462CF0u;
            // 0x462cf4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3730D0u;
    {
        auto targetFn = runtime->lookupFunction(0x3730D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x462CF8u;
label_462cf8:
    // 0x462cf8: 0x0  nop
    ctx->pc = 0x462cf8u;
    // NOP
label_462cfc:
    // 0x462cfc: 0x0  nop
    ctx->pc = 0x462cfcu;
    // NOP
label_462d00:
    // 0x462d00: 0x80dcc38  j           func_3730E0
label_462d04:
    if (ctx->pc == 0x462D04u) {
        ctx->pc = 0x462D04u;
            // 0x462d04: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x462D08u;
        goto label_462d08;
    }
    ctx->pc = 0x462D00u;
    ctx->pc = 0x462D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462D00u;
            // 0x462d04: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3730E0u;
    {
        auto targetFn = runtime->lookupFunction(0x3730E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x462D08u;
label_462d08:
    // 0x462d08: 0x0  nop
    ctx->pc = 0x462d08u;
    // NOP
label_462d0c:
    // 0x462d0c: 0x0  nop
    ctx->pc = 0x462d0cu;
    // NOP
label_462d10:
    // 0x462d10: 0x8118b10  j           func_462C40
label_462d14:
    if (ctx->pc == 0x462D14u) {
        ctx->pc = 0x462D14u;
            // 0x462d14: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x462D18u;
        goto label_462d18;
    }
    ctx->pc = 0x462D10u;
    ctx->pc = 0x462D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x462D10u;
            // 0x462d14: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x462C40u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_462c40;
    ctx->pc = 0x462D18u;
label_462d18:
    // 0x462d18: 0x0  nop
    ctx->pc = 0x462d18u;
    // NOP
label_462d1c:
    // 0x462d1c: 0x0  nop
    ctx->pc = 0x462d1cu;
    // NOP
label_462d20:
    // 0x462d20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x462d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_462d24:
    // 0x462d24: 0xa0820064  sb          $v0, 0x64($a0)
    ctx->pc = 0x462d24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 2));
label_462d28:
    // 0x462d28: 0xa0800065  sb          $zero, 0x65($a0)
    ctx->pc = 0x462d28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 0));
label_462d2c:
    // 0x462d2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x462d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_462d30:
    // 0x462d30: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x462d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_462d34:
    // 0x462d34: 0x3200008  jr          $t9
label_462d38:
    if (ctx->pc == 0x462D38u) {
        ctx->pc = 0x462D3Cu;
        goto label_462d3c;
    }
    ctx->pc = 0x462D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462D3Cu;
label_462d3c:
    // 0x462d3c: 0x0  nop
    ctx->pc = 0x462d3cu;
    // NOP
label_462d40:
    // 0x462d40: 0x3e00008  jr          $ra
label_462d44:
    if (ctx->pc == 0x462D44u) {
        ctx->pc = 0x462D44u;
            // 0x462d44: 0x24022b2a  addiu       $v0, $zero, 0x2B2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11050));
        ctx->pc = 0x462D48u;
        goto label_462d48;
    }
    ctx->pc = 0x462D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x462D40u;
            // 0x462d44: 0x24022b2a  addiu       $v0, $zero, 0x2B2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x462D48u;
label_462d48:
    // 0x462d48: 0x0  nop
    ctx->pc = 0x462d48u;
    // NOP
label_462d4c:
    // 0x462d4c: 0x0  nop
    ctx->pc = 0x462d4cu;
    // NOP
}
