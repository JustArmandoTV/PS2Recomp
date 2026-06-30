#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00555B70
// Address: 0x555b70 - 0x555d40
void sub_00555B70_0x555b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00555B70_0x555b70");
#endif

    switch (ctx->pc) {
        case 0x555b70u: goto label_555b70;
        case 0x555b74u: goto label_555b74;
        case 0x555b78u: goto label_555b78;
        case 0x555b7cu: goto label_555b7c;
        case 0x555b80u: goto label_555b80;
        case 0x555b84u: goto label_555b84;
        case 0x555b88u: goto label_555b88;
        case 0x555b8cu: goto label_555b8c;
        case 0x555b90u: goto label_555b90;
        case 0x555b94u: goto label_555b94;
        case 0x555b98u: goto label_555b98;
        case 0x555b9cu: goto label_555b9c;
        case 0x555ba0u: goto label_555ba0;
        case 0x555ba4u: goto label_555ba4;
        case 0x555ba8u: goto label_555ba8;
        case 0x555bacu: goto label_555bac;
        case 0x555bb0u: goto label_555bb0;
        case 0x555bb4u: goto label_555bb4;
        case 0x555bb8u: goto label_555bb8;
        case 0x555bbcu: goto label_555bbc;
        case 0x555bc0u: goto label_555bc0;
        case 0x555bc4u: goto label_555bc4;
        case 0x555bc8u: goto label_555bc8;
        case 0x555bccu: goto label_555bcc;
        case 0x555bd0u: goto label_555bd0;
        case 0x555bd4u: goto label_555bd4;
        case 0x555bd8u: goto label_555bd8;
        case 0x555bdcu: goto label_555bdc;
        case 0x555be0u: goto label_555be0;
        case 0x555be4u: goto label_555be4;
        case 0x555be8u: goto label_555be8;
        case 0x555becu: goto label_555bec;
        case 0x555bf0u: goto label_555bf0;
        case 0x555bf4u: goto label_555bf4;
        case 0x555bf8u: goto label_555bf8;
        case 0x555bfcu: goto label_555bfc;
        case 0x555c00u: goto label_555c00;
        case 0x555c04u: goto label_555c04;
        case 0x555c08u: goto label_555c08;
        case 0x555c0cu: goto label_555c0c;
        case 0x555c10u: goto label_555c10;
        case 0x555c14u: goto label_555c14;
        case 0x555c18u: goto label_555c18;
        case 0x555c1cu: goto label_555c1c;
        case 0x555c20u: goto label_555c20;
        case 0x555c24u: goto label_555c24;
        case 0x555c28u: goto label_555c28;
        case 0x555c2cu: goto label_555c2c;
        case 0x555c30u: goto label_555c30;
        case 0x555c34u: goto label_555c34;
        case 0x555c38u: goto label_555c38;
        case 0x555c3cu: goto label_555c3c;
        case 0x555c40u: goto label_555c40;
        case 0x555c44u: goto label_555c44;
        case 0x555c48u: goto label_555c48;
        case 0x555c4cu: goto label_555c4c;
        case 0x555c50u: goto label_555c50;
        case 0x555c54u: goto label_555c54;
        case 0x555c58u: goto label_555c58;
        case 0x555c5cu: goto label_555c5c;
        case 0x555c60u: goto label_555c60;
        case 0x555c64u: goto label_555c64;
        case 0x555c68u: goto label_555c68;
        case 0x555c6cu: goto label_555c6c;
        case 0x555c70u: goto label_555c70;
        case 0x555c74u: goto label_555c74;
        case 0x555c78u: goto label_555c78;
        case 0x555c7cu: goto label_555c7c;
        case 0x555c80u: goto label_555c80;
        case 0x555c84u: goto label_555c84;
        case 0x555c88u: goto label_555c88;
        case 0x555c8cu: goto label_555c8c;
        case 0x555c90u: goto label_555c90;
        case 0x555c94u: goto label_555c94;
        case 0x555c98u: goto label_555c98;
        case 0x555c9cu: goto label_555c9c;
        case 0x555ca0u: goto label_555ca0;
        case 0x555ca4u: goto label_555ca4;
        case 0x555ca8u: goto label_555ca8;
        case 0x555cacu: goto label_555cac;
        case 0x555cb0u: goto label_555cb0;
        case 0x555cb4u: goto label_555cb4;
        case 0x555cb8u: goto label_555cb8;
        case 0x555cbcu: goto label_555cbc;
        case 0x555cc0u: goto label_555cc0;
        case 0x555cc4u: goto label_555cc4;
        case 0x555cc8u: goto label_555cc8;
        case 0x555cccu: goto label_555ccc;
        case 0x555cd0u: goto label_555cd0;
        case 0x555cd4u: goto label_555cd4;
        case 0x555cd8u: goto label_555cd8;
        case 0x555cdcu: goto label_555cdc;
        case 0x555ce0u: goto label_555ce0;
        case 0x555ce4u: goto label_555ce4;
        case 0x555ce8u: goto label_555ce8;
        case 0x555cecu: goto label_555cec;
        case 0x555cf0u: goto label_555cf0;
        case 0x555cf4u: goto label_555cf4;
        case 0x555cf8u: goto label_555cf8;
        case 0x555cfcu: goto label_555cfc;
        case 0x555d00u: goto label_555d00;
        case 0x555d04u: goto label_555d04;
        case 0x555d08u: goto label_555d08;
        case 0x555d0cu: goto label_555d0c;
        case 0x555d10u: goto label_555d10;
        case 0x555d14u: goto label_555d14;
        case 0x555d18u: goto label_555d18;
        case 0x555d1cu: goto label_555d1c;
        case 0x555d20u: goto label_555d20;
        case 0x555d24u: goto label_555d24;
        case 0x555d28u: goto label_555d28;
        case 0x555d2cu: goto label_555d2c;
        case 0x555d30u: goto label_555d30;
        case 0x555d34u: goto label_555d34;
        case 0x555d38u: goto label_555d38;
        case 0x555d3cu: goto label_555d3c;
        default: break;
    }

    ctx->pc = 0x555b70u;

label_555b70:
    // 0x555b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x555b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_555b74:
    // 0x555b74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x555b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_555b78:
    // 0x555b78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x555b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_555b7c:
    // 0x555b7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x555b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_555b80:
    // 0x555b80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x555b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_555b84:
    // 0x555b84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x555b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_555b88:
    // 0x555b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x555b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_555b8c:
    // 0x555b8c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x555b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_555b90:
    // 0x555b90: 0xc0c9a58  jal         func_326960
label_555b94:
    if (ctx->pc == 0x555B94u) {
        ctx->pc = 0x555B94u;
            // 0x555b94: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x555B98u;
        goto label_555b98;
    }
    ctx->pc = 0x555B90u;
    SET_GPR_U32(ctx, 31, 0x555B98u);
    ctx->pc = 0x555B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555B90u;
            // 0x555b94: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555B98u; }
        if (ctx->pc != 0x555B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555B98u; }
        if (ctx->pc != 0x555B98u) { return; }
    }
    ctx->pc = 0x555B98u;
label_555b98:
    // 0x555b98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x555b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_555b9c:
    // 0x555b9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x555b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_555ba0:
    // 0x555ba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x555ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_555ba4:
    // 0x555ba4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x555ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_555ba8:
    // 0x555ba8: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x555ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_555bac:
    // 0x555bac: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x555bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_555bb0:
    // 0x555bb0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x555bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_555bb4:
    // 0x555bb4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x555bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_555bb8:
    // 0x555bb8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x555bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_555bbc:
    // 0x555bbc: 0x94840046  lhu         $a0, 0x46($a0)
    ctx->pc = 0x555bbcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_555bc0:
    // 0x555bc0: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_555bc4:
    if (ctx->pc == 0x555BC4u) {
        ctx->pc = 0x555BC4u;
            // 0x555bc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555BC8u;
        goto label_555bc8;
    }
    ctx->pc = 0x555BC0u;
    {
        const bool branch_taken_0x555bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x555BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555BC0u;
            // 0x555bc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555bc0) {
            ctx->pc = 0x555C14u;
            goto label_555c14;
        }
    }
    ctx->pc = 0x555BC8u;
label_555bc8:
    // 0x555bc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x555bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_555bcc:
    // 0x555bcc: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x555bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_555bd0:
    // 0x555bd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x555bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_555bd4:
    // 0x555bd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x555bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_555bd8:
    // 0x555bd8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x555bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_555bdc:
    // 0x555bdc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x555bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_555be0:
    // 0x555be0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x555be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_555be4:
    // 0x555be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x555be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_555be8:
    // 0x555be8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x555be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_555bec:
    // 0x555bec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x555becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_555bf0:
    // 0x555bf0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x555bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_555bf4:
    // 0x555bf4: 0x320f809  jalr        $t9
label_555bf8:
    if (ctx->pc == 0x555BF8u) {
        ctx->pc = 0x555BF8u;
            // 0x555bf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555BFCu;
        goto label_555bfc;
    }
    ctx->pc = 0x555BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x555BFCu);
        ctx->pc = 0x555BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555BF4u;
            // 0x555bf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x555BFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x555BFCu; }
            if (ctx->pc != 0x555BFCu) { return; }
        }
        }
    }
    ctx->pc = 0x555BFCu;
label_555bfc:
    // 0x555bfc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x555bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_555c00:
    // 0x555c00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x555c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_555c04:
    // 0x555c04: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x555c04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_555c08:
    // 0x555c08: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_555c0c:
    if (ctx->pc == 0x555C0Cu) {
        ctx->pc = 0x555C0Cu;
            // 0x555c0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x555C10u;
        goto label_555c10;
    }
    ctx->pc = 0x555C08u;
    {
        const bool branch_taken_0x555c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x555C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555C08u;
            // 0x555c0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555c08) {
            ctx->pc = 0x555BD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_555bd0;
        }
    }
    ctx->pc = 0x555C10u;
label_555c10:
    // 0x555c10: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x555c10u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_555c14:
    // 0x555c14: 0x50c00043  beql        $a2, $zero, . + 4 + (0x43 << 2)
label_555c18:
    if (ctx->pc == 0x555C18u) {
        ctx->pc = 0x555C18u;
            // 0x555c18: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x555C1Cu;
        goto label_555c1c;
    }
    ctx->pc = 0x555C14u;
    {
        const bool branch_taken_0x555c14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x555c14) {
            ctx->pc = 0x555C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555C14u;
            // 0x555c18: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555D24u;
            goto label_555d24;
        }
    }
    ctx->pc = 0x555C1Cu;
label_555c1c:
    // 0x555c1c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x555c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_555c20:
    // 0x555c20: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x555c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_555c24:
    // 0x555c24: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
label_555c28:
    if (ctx->pc == 0x555C28u) {
        ctx->pc = 0x555C2Cu;
        goto label_555c2c;
    }
    ctx->pc = 0x555C24u;
    {
        const bool branch_taken_0x555c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x555c24) {
            ctx->pc = 0x555CF0u;
            goto label_555cf0;
        }
    }
    ctx->pc = 0x555C2Cu;
label_555c2c:
    // 0x555c2c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_555c30:
    if (ctx->pc == 0x555C30u) {
        ctx->pc = 0x555C30u;
            // 0x555c30: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x555C34u;
        goto label_555c34;
    }
    ctx->pc = 0x555C2Cu;
    {
        const bool branch_taken_0x555c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x555c2c) {
            ctx->pc = 0x555C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555C2Cu;
            // 0x555c30: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555C40u;
            goto label_555c40;
        }
    }
    ctx->pc = 0x555C34u;
label_555c34:
    // 0x555c34: 0x1000003a  b           . + 4 + (0x3A << 2)
label_555c38:
    if (ctx->pc == 0x555C38u) {
        ctx->pc = 0x555C3Cu;
        goto label_555c3c;
    }
    ctx->pc = 0x555C34u;
    {
        const bool branch_taken_0x555c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555c34) {
            ctx->pc = 0x555D20u;
            goto label_555d20;
        }
    }
    ctx->pc = 0x555C3Cu;
label_555c3c:
    // 0x555c3c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x555c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_555c40:
    // 0x555c40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x555c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_555c44:
    // 0x555c44: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
label_555c48:
    if (ctx->pc == 0x555C48u) {
        ctx->pc = 0x555C48u;
            // 0x555c48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555C4Cu;
        goto label_555c4c;
    }
    ctx->pc = 0x555C44u;
    {
        const bool branch_taken_0x555c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x555c44) {
            ctx->pc = 0x555C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555C44u;
            // 0x555c48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555C90u;
            goto label_555c90;
        }
    }
    ctx->pc = 0x555C4Cu;
label_555c4c:
    // 0x555c4c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x555c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_555c50:
    // 0x555c50: 0x1070000f  beq         $v1, $s0, . + 4 + (0xF << 2)
label_555c54:
    if (ctx->pc == 0x555C54u) {
        ctx->pc = 0x555C58u;
        goto label_555c58;
    }
    ctx->pc = 0x555C50u;
    {
        const bool branch_taken_0x555c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x555c50) {
            ctx->pc = 0x555C90u;
            goto label_555c90;
        }
    }
    ctx->pc = 0x555C58u;
label_555c58:
    // 0x555c58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x555c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_555c5c:
    // 0x555c5c: 0x1070000c  beq         $v1, $s0, . + 4 + (0xC << 2)
label_555c60:
    if (ctx->pc == 0x555C60u) {
        ctx->pc = 0x555C64u;
        goto label_555c64;
    }
    ctx->pc = 0x555C5Cu;
    {
        const bool branch_taken_0x555c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x555c5c) {
            ctx->pc = 0x555C90u;
            goto label_555c90;
        }
    }
    ctx->pc = 0x555C64u;
label_555c64:
    // 0x555c64: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_555c68:
    if (ctx->pc == 0x555C68u) {
        ctx->pc = 0x555C68u;
            // 0x555c68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555C6Cu;
        goto label_555c6c;
    }
    ctx->pc = 0x555C64u;
    {
        const bool branch_taken_0x555c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x555c64) {
            ctx->pc = 0x555C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555C64u;
            // 0x555c68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555C90u;
            goto label_555c90;
        }
    }
    ctx->pc = 0x555C6Cu;
label_555c6c:
    // 0x555c6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_555c70:
    if (ctx->pc == 0x555C70u) {
        ctx->pc = 0x555C70u;
            // 0x555c70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x555C74u;
        goto label_555c74;
    }
    ctx->pc = 0x555C6Cu;
    {
        const bool branch_taken_0x555c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x555C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555C6Cu;
            // 0x555c70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x555c6c) {
            ctx->pc = 0x555C90u;
            goto label_555c90;
        }
    }
    ctx->pc = 0x555C74u;
label_555c74:
    // 0x555c74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x555c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_555c78:
    // 0x555c78: 0x10000005  b           . + 4 + (0x5 << 2)
label_555c7c:
    if (ctx->pc == 0x555C7Cu) {
        ctx->pc = 0x555C80u;
        goto label_555c80;
    }
    ctx->pc = 0x555C78u;
    {
        const bool branch_taken_0x555c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555c78) {
            ctx->pc = 0x555C90u;
            goto label_555c90;
        }
    }
    ctx->pc = 0x555C80u;
label_555c80:
    // 0x555c80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x555c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_555c84:
    // 0x555c84: 0x10000002  b           . + 4 + (0x2 << 2)
label_555c88:
    if (ctx->pc == 0x555C88u) {
        ctx->pc = 0x555C8Cu;
        goto label_555c8c;
    }
    ctx->pc = 0x555C84u;
    {
        const bool branch_taken_0x555c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555c84) {
            ctx->pc = 0x555C90u;
            goto label_555c90;
        }
    }
    ctx->pc = 0x555C8Cu;
label_555c8c:
    // 0x555c8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x555c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_555c90:
    // 0x555c90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x555c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_555c94:
    // 0x555c94: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x555c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_555c98:
    // 0x555c98: 0xc05cc84  jal         func_173210
label_555c9c:
    if (ctx->pc == 0x555C9Cu) {
        ctx->pc = 0x555C9Cu;
            // 0x555c9c: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->pc = 0x555CA0u;
        goto label_555ca0;
    }
    ctx->pc = 0x555C98u;
    SET_GPR_U32(ctx, 31, 0x555CA0u);
    ctx->pc = 0x555C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555C98u;
            // 0x555c9c: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555CA0u; }
        if (ctx->pc != 0x555CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555CA0u; }
        if (ctx->pc != 0x555CA0u) { return; }
    }
    ctx->pc = 0x555CA0u;
label_555ca0:
    // 0x555ca0: 0xae700088  sw          $s0, 0x88($s3)
    ctx->pc = 0x555ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 16));
label_555ca4:
    // 0x555ca4: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x555ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_555ca8:
    // 0x555ca8: 0x9262005c  lbu         $v0, 0x5C($s3)
    ctx->pc = 0x555ca8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 92)));
label_555cac:
    // 0x555cac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_555cb0:
    if (ctx->pc == 0x555CB0u) {
        ctx->pc = 0x555CB0u;
            // 0x555cb0: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x555CB4u;
        goto label_555cb4;
    }
    ctx->pc = 0x555CACu;
    {
        const bool branch_taken_0x555cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x555cac) {
            ctx->pc = 0x555CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555CACu;
            // 0x555cb0: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x555CD8u;
            goto label_555cd8;
        }
    }
    ctx->pc = 0x555CB4u;
label_555cb4:
    // 0x555cb4: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x555cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_555cb8:
    // 0x555cb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_555cbc:
    if (ctx->pc == 0x555CBCu) {
        ctx->pc = 0x555CC0u;
        goto label_555cc0;
    }
    ctx->pc = 0x555CB8u;
    {
        const bool branch_taken_0x555cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x555cb8) {
            ctx->pc = 0x555CD4u;
            goto label_555cd4;
        }
    }
    ctx->pc = 0x555CC0u;
label_555cc0:
    // 0x555cc0: 0x8c590108  lw          $t9, 0x108($v0)
    ctx->pc = 0x555cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_555cc4:
    // 0x555cc4: 0x24440108  addiu       $a0, $v0, 0x108
    ctx->pc = 0x555cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
label_555cc8:
    // 0x555cc8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x555cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_555ccc:
    // 0x555ccc: 0x320f809  jalr        $t9
label_555cd0:
    if (ctx->pc == 0x555CD0u) {
        ctx->pc = 0x555CD0u;
            // 0x555cd0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x555CD4u;
        goto label_555cd4;
    }
    ctx->pc = 0x555CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x555CD4u);
        ctx->pc = 0x555CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555CCCu;
            // 0x555cd0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x555CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x555CD4u; }
            if (ctx->pc != 0x555CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x555CD4u;
label_555cd4:
    // 0x555cd4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x555cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_555cd8:
    // 0x555cd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x555cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_555cdc:
    // 0x555cdc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x555cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_555ce0:
    // 0x555ce0: 0x320f809  jalr        $t9
label_555ce4:
    if (ctx->pc == 0x555CE4u) {
        ctx->pc = 0x555CE4u;
            // 0x555ce4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x555CE8u;
        goto label_555ce8;
    }
    ctx->pc = 0x555CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x555CE8u);
        ctx->pc = 0x555CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555CE0u;
            // 0x555ce4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x555CE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x555CE8u; }
            if (ctx->pc != 0x555CE8u) { return; }
        }
        }
    }
    ctx->pc = 0x555CE8u;
label_555ce8:
    // 0x555ce8: 0x1000000d  b           . + 4 + (0xD << 2)
label_555cec:
    if (ctx->pc == 0x555CECu) {
        ctx->pc = 0x555CF0u;
        goto label_555cf0;
    }
    ctx->pc = 0x555CE8u;
    {
        const bool branch_taken_0x555ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555ce8) {
            ctx->pc = 0x555D20u;
            goto label_555d20;
        }
    }
    ctx->pc = 0x555CF0u;
label_555cf0:
    // 0x555cf0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x555cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_555cf4:
    // 0x555cf4: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x555cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_555cf8:
    // 0x555cf8: 0xc05cc84  jal         func_173210
label_555cfc:
    if (ctx->pc == 0x555CFCu) {
        ctx->pc = 0x555CFCu;
            // 0x555cfc: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->pc = 0x555D00u;
        goto label_555d00;
    }
    ctx->pc = 0x555CF8u;
    SET_GPR_U32(ctx, 31, 0x555D00u);
    ctx->pc = 0x555CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555CF8u;
            // 0x555cfc: 0x8c440188  lw          $a0, 0x188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555D00u; }
        if (ctx->pc != 0x555D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555D00u; }
        if (ctx->pc != 0x555D00u) { return; }
    }
    ctx->pc = 0x555D00u;
label_555d00:
    // 0x555d00: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x555d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_555d04:
    // 0x555d04: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x555d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_555d08:
    // 0x555d08: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x555d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_555d0c:
    // 0x555d0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x555d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_555d10:
    // 0x555d10: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x555d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
label_555d14:
    // 0x555d14: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x555d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_555d18:
    // 0x555d18: 0xc057b7c  jal         func_15EDF0
label_555d1c:
    if (ctx->pc == 0x555D1Cu) {
        ctx->pc = 0x555D1Cu;
            // 0x555d1c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x555D20u;
        goto label_555d20;
    }
    ctx->pc = 0x555D18u;
    SET_GPR_U32(ctx, 31, 0x555D20u);
    ctx->pc = 0x555D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555D18u;
            // 0x555d1c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555D20u; }
        if (ctx->pc != 0x555D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555D20u; }
        if (ctx->pc != 0x555D20u) { return; }
    }
    ctx->pc = 0x555D20u;
label_555d20:
    // 0x555d20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x555d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_555d24:
    // 0x555d24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x555d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_555d28:
    // 0x555d28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x555d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_555d2c:
    // 0x555d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x555d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_555d30:
    // 0x555d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x555d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_555d34:
    // 0x555d34: 0x3e00008  jr          $ra
label_555d38:
    if (ctx->pc == 0x555D38u) {
        ctx->pc = 0x555D38u;
            // 0x555d38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x555D3Cu;
        goto label_555d3c;
    }
    ctx->pc = 0x555D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x555D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x555D34u;
            // 0x555d38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x555D3Cu;
label_555d3c:
    // 0x555d3c: 0x0  nop
    ctx->pc = 0x555d3cu;
    // NOP
}
