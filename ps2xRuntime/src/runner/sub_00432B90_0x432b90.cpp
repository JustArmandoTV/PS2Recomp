#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00432B90
// Address: 0x432b90 - 0x432df0
void sub_00432B90_0x432b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432B90_0x432b90");
#endif

    switch (ctx->pc) {
        case 0x432b90u: goto label_432b90;
        case 0x432b94u: goto label_432b94;
        case 0x432b98u: goto label_432b98;
        case 0x432b9cu: goto label_432b9c;
        case 0x432ba0u: goto label_432ba0;
        case 0x432ba4u: goto label_432ba4;
        case 0x432ba8u: goto label_432ba8;
        case 0x432bacu: goto label_432bac;
        case 0x432bb0u: goto label_432bb0;
        case 0x432bb4u: goto label_432bb4;
        case 0x432bb8u: goto label_432bb8;
        case 0x432bbcu: goto label_432bbc;
        case 0x432bc0u: goto label_432bc0;
        case 0x432bc4u: goto label_432bc4;
        case 0x432bc8u: goto label_432bc8;
        case 0x432bccu: goto label_432bcc;
        case 0x432bd0u: goto label_432bd0;
        case 0x432bd4u: goto label_432bd4;
        case 0x432bd8u: goto label_432bd8;
        case 0x432bdcu: goto label_432bdc;
        case 0x432be0u: goto label_432be0;
        case 0x432be4u: goto label_432be4;
        case 0x432be8u: goto label_432be8;
        case 0x432becu: goto label_432bec;
        case 0x432bf0u: goto label_432bf0;
        case 0x432bf4u: goto label_432bf4;
        case 0x432bf8u: goto label_432bf8;
        case 0x432bfcu: goto label_432bfc;
        case 0x432c00u: goto label_432c00;
        case 0x432c04u: goto label_432c04;
        case 0x432c08u: goto label_432c08;
        case 0x432c0cu: goto label_432c0c;
        case 0x432c10u: goto label_432c10;
        case 0x432c14u: goto label_432c14;
        case 0x432c18u: goto label_432c18;
        case 0x432c1cu: goto label_432c1c;
        case 0x432c20u: goto label_432c20;
        case 0x432c24u: goto label_432c24;
        case 0x432c28u: goto label_432c28;
        case 0x432c2cu: goto label_432c2c;
        case 0x432c30u: goto label_432c30;
        case 0x432c34u: goto label_432c34;
        case 0x432c38u: goto label_432c38;
        case 0x432c3cu: goto label_432c3c;
        case 0x432c40u: goto label_432c40;
        case 0x432c44u: goto label_432c44;
        case 0x432c48u: goto label_432c48;
        case 0x432c4cu: goto label_432c4c;
        case 0x432c50u: goto label_432c50;
        case 0x432c54u: goto label_432c54;
        case 0x432c58u: goto label_432c58;
        case 0x432c5cu: goto label_432c5c;
        case 0x432c60u: goto label_432c60;
        case 0x432c64u: goto label_432c64;
        case 0x432c68u: goto label_432c68;
        case 0x432c6cu: goto label_432c6c;
        case 0x432c70u: goto label_432c70;
        case 0x432c74u: goto label_432c74;
        case 0x432c78u: goto label_432c78;
        case 0x432c7cu: goto label_432c7c;
        case 0x432c80u: goto label_432c80;
        case 0x432c84u: goto label_432c84;
        case 0x432c88u: goto label_432c88;
        case 0x432c8cu: goto label_432c8c;
        case 0x432c90u: goto label_432c90;
        case 0x432c94u: goto label_432c94;
        case 0x432c98u: goto label_432c98;
        case 0x432c9cu: goto label_432c9c;
        case 0x432ca0u: goto label_432ca0;
        case 0x432ca4u: goto label_432ca4;
        case 0x432ca8u: goto label_432ca8;
        case 0x432cacu: goto label_432cac;
        case 0x432cb0u: goto label_432cb0;
        case 0x432cb4u: goto label_432cb4;
        case 0x432cb8u: goto label_432cb8;
        case 0x432cbcu: goto label_432cbc;
        case 0x432cc0u: goto label_432cc0;
        case 0x432cc4u: goto label_432cc4;
        case 0x432cc8u: goto label_432cc8;
        case 0x432cccu: goto label_432ccc;
        case 0x432cd0u: goto label_432cd0;
        case 0x432cd4u: goto label_432cd4;
        case 0x432cd8u: goto label_432cd8;
        case 0x432cdcu: goto label_432cdc;
        case 0x432ce0u: goto label_432ce0;
        case 0x432ce4u: goto label_432ce4;
        case 0x432ce8u: goto label_432ce8;
        case 0x432cecu: goto label_432cec;
        case 0x432cf0u: goto label_432cf0;
        case 0x432cf4u: goto label_432cf4;
        case 0x432cf8u: goto label_432cf8;
        case 0x432cfcu: goto label_432cfc;
        case 0x432d00u: goto label_432d00;
        case 0x432d04u: goto label_432d04;
        case 0x432d08u: goto label_432d08;
        case 0x432d0cu: goto label_432d0c;
        case 0x432d10u: goto label_432d10;
        case 0x432d14u: goto label_432d14;
        case 0x432d18u: goto label_432d18;
        case 0x432d1cu: goto label_432d1c;
        case 0x432d20u: goto label_432d20;
        case 0x432d24u: goto label_432d24;
        case 0x432d28u: goto label_432d28;
        case 0x432d2cu: goto label_432d2c;
        case 0x432d30u: goto label_432d30;
        case 0x432d34u: goto label_432d34;
        case 0x432d38u: goto label_432d38;
        case 0x432d3cu: goto label_432d3c;
        case 0x432d40u: goto label_432d40;
        case 0x432d44u: goto label_432d44;
        case 0x432d48u: goto label_432d48;
        case 0x432d4cu: goto label_432d4c;
        case 0x432d50u: goto label_432d50;
        case 0x432d54u: goto label_432d54;
        case 0x432d58u: goto label_432d58;
        case 0x432d5cu: goto label_432d5c;
        case 0x432d60u: goto label_432d60;
        case 0x432d64u: goto label_432d64;
        case 0x432d68u: goto label_432d68;
        case 0x432d6cu: goto label_432d6c;
        case 0x432d70u: goto label_432d70;
        case 0x432d74u: goto label_432d74;
        case 0x432d78u: goto label_432d78;
        case 0x432d7cu: goto label_432d7c;
        case 0x432d80u: goto label_432d80;
        case 0x432d84u: goto label_432d84;
        case 0x432d88u: goto label_432d88;
        case 0x432d8cu: goto label_432d8c;
        case 0x432d90u: goto label_432d90;
        case 0x432d94u: goto label_432d94;
        case 0x432d98u: goto label_432d98;
        case 0x432d9cu: goto label_432d9c;
        case 0x432da0u: goto label_432da0;
        case 0x432da4u: goto label_432da4;
        case 0x432da8u: goto label_432da8;
        case 0x432dacu: goto label_432dac;
        case 0x432db0u: goto label_432db0;
        case 0x432db4u: goto label_432db4;
        case 0x432db8u: goto label_432db8;
        case 0x432dbcu: goto label_432dbc;
        case 0x432dc0u: goto label_432dc0;
        case 0x432dc4u: goto label_432dc4;
        case 0x432dc8u: goto label_432dc8;
        case 0x432dccu: goto label_432dcc;
        case 0x432dd0u: goto label_432dd0;
        case 0x432dd4u: goto label_432dd4;
        case 0x432dd8u: goto label_432dd8;
        case 0x432ddcu: goto label_432ddc;
        case 0x432de0u: goto label_432de0;
        case 0x432de4u: goto label_432de4;
        case 0x432de8u: goto label_432de8;
        case 0x432decu: goto label_432dec;
        default: break;
    }

    ctx->pc = 0x432b90u;

label_432b90:
    // 0x432b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x432b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_432b94:
    // 0x432b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x432b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_432b98:
    // 0x432b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x432b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_432b9c:
    // 0x432b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x432b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_432ba0:
    // 0x432ba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x432ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_432ba4:
    // 0x432ba4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_432ba8:
    if (ctx->pc == 0x432BA8u) {
        ctx->pc = 0x432BA8u;
            // 0x432ba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432BACu;
        goto label_432bac;
    }
    ctx->pc = 0x432BA4u;
    {
        const bool branch_taken_0x432ba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x432BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432BA4u;
            // 0x432ba8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ba4) {
            ctx->pc = 0x432CD8u;
            goto label_432cd8;
        }
    }
    ctx->pc = 0x432BACu;
label_432bac:
    // 0x432bac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x432bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_432bb0:
    // 0x432bb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x432bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_432bb4:
    // 0x432bb4: 0x2463cab0  addiu       $v1, $v1, -0x3550
    ctx->pc = 0x432bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953648));
label_432bb8:
    // 0x432bb8: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x432bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_432bbc:
    // 0x432bbc: 0x2442cae8  addiu       $v0, $v0, -0x3518
    ctx->pc = 0x432bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953704));
label_432bc0:
    // 0x432bc0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x432bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_432bc4:
    // 0x432bc4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x432bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_432bc8:
    // 0x432bc8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x432bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_432bcc:
    // 0x432bcc: 0xc0407c0  jal         func_101F00
label_432bd0:
    if (ctx->pc == 0x432BD0u) {
        ctx->pc = 0x432BD0u;
            // 0x432bd0: 0x24a52cf0  addiu       $a1, $a1, 0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11504));
        ctx->pc = 0x432BD4u;
        goto label_432bd4;
    }
    ctx->pc = 0x432BCCu;
    SET_GPR_U32(ctx, 31, 0x432BD4u);
    ctx->pc = 0x432BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432BCCu;
            // 0x432bd0: 0x24a52cf0  addiu       $a1, $a1, 0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432BD4u; }
        if (ctx->pc != 0x432BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432BD4u; }
        if (ctx->pc != 0x432BD4u) { return; }
    }
    ctx->pc = 0x432BD4u;
label_432bd4:
    // 0x432bd4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x432bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_432bd8:
    // 0x432bd8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_432bdc:
    if (ctx->pc == 0x432BDCu) {
        ctx->pc = 0x432BDCu;
            // 0x432bdc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x432BE0u;
        goto label_432be0;
    }
    ctx->pc = 0x432BD8u;
    {
        const bool branch_taken_0x432bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432bd8) {
            ctx->pc = 0x432BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432BD8u;
            // 0x432bdc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432BECu;
            goto label_432bec;
        }
    }
    ctx->pc = 0x432BE0u;
label_432be0:
    // 0x432be0: 0xc07507c  jal         func_1D41F0
label_432be4:
    if (ctx->pc == 0x432BE4u) {
        ctx->pc = 0x432BE4u;
            // 0x432be4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x432BE8u;
        goto label_432be8;
    }
    ctx->pc = 0x432BE0u;
    SET_GPR_U32(ctx, 31, 0x432BE8u);
    ctx->pc = 0x432BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432BE0u;
            // 0x432be4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432BE8u; }
        if (ctx->pc != 0x432BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432BE8u; }
        if (ctx->pc != 0x432BE8u) { return; }
    }
    ctx->pc = 0x432BE8u;
label_432be8:
    // 0x432be8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x432be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_432bec:
    // 0x432bec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_432bf0:
    if (ctx->pc == 0x432BF0u) {
        ctx->pc = 0x432BF0u;
            // 0x432bf0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x432BF4u;
        goto label_432bf4;
    }
    ctx->pc = 0x432BECu;
    {
        const bool branch_taken_0x432bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432bec) {
            ctx->pc = 0x432BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432BECu;
            // 0x432bf0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432C1Cu;
            goto label_432c1c;
        }
    }
    ctx->pc = 0x432BF4u;
label_432bf4:
    // 0x432bf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_432bf8:
    if (ctx->pc == 0x432BF8u) {
        ctx->pc = 0x432BFCu;
        goto label_432bfc;
    }
    ctx->pc = 0x432BF4u;
    {
        const bool branch_taken_0x432bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432bf4) {
            ctx->pc = 0x432C18u;
            goto label_432c18;
        }
    }
    ctx->pc = 0x432BFCu;
label_432bfc:
    // 0x432bfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_432c00:
    if (ctx->pc == 0x432C00u) {
        ctx->pc = 0x432C04u;
        goto label_432c04;
    }
    ctx->pc = 0x432BFCu;
    {
        const bool branch_taken_0x432bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432bfc) {
            ctx->pc = 0x432C18u;
            goto label_432c18;
        }
    }
    ctx->pc = 0x432C04u;
label_432c04:
    // 0x432c04: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x432c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_432c08:
    // 0x432c08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_432c0c:
    if (ctx->pc == 0x432C0Cu) {
        ctx->pc = 0x432C10u;
        goto label_432c10;
    }
    ctx->pc = 0x432C08u;
    {
        const bool branch_taken_0x432c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c08) {
            ctx->pc = 0x432C18u;
            goto label_432c18;
        }
    }
    ctx->pc = 0x432C10u;
label_432c10:
    // 0x432c10: 0xc0400a8  jal         func_1002A0
label_432c14:
    if (ctx->pc == 0x432C14u) {
        ctx->pc = 0x432C18u;
        goto label_432c18;
    }
    ctx->pc = 0x432C10u;
    SET_GPR_U32(ctx, 31, 0x432C18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432C18u; }
        if (ctx->pc != 0x432C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432C18u; }
        if (ctx->pc != 0x432C18u) { return; }
    }
    ctx->pc = 0x432C18u;
label_432c18:
    // 0x432c18: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x432c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_432c1c:
    // 0x432c1c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_432c20:
    if (ctx->pc == 0x432C20u) {
        ctx->pc = 0x432C20u;
            // 0x432c20: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x432C24u;
        goto label_432c24;
    }
    ctx->pc = 0x432C1Cu;
    {
        const bool branch_taken_0x432c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c1c) {
            ctx->pc = 0x432C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432C1Cu;
            // 0x432c20: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432C4Cu;
            goto label_432c4c;
        }
    }
    ctx->pc = 0x432C24u;
label_432c24:
    // 0x432c24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_432c28:
    if (ctx->pc == 0x432C28u) {
        ctx->pc = 0x432C2Cu;
        goto label_432c2c;
    }
    ctx->pc = 0x432C24u;
    {
        const bool branch_taken_0x432c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c24) {
            ctx->pc = 0x432C48u;
            goto label_432c48;
        }
    }
    ctx->pc = 0x432C2Cu;
label_432c2c:
    // 0x432c2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_432c30:
    if (ctx->pc == 0x432C30u) {
        ctx->pc = 0x432C34u;
        goto label_432c34;
    }
    ctx->pc = 0x432C2Cu;
    {
        const bool branch_taken_0x432c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c2c) {
            ctx->pc = 0x432C48u;
            goto label_432c48;
        }
    }
    ctx->pc = 0x432C34u;
label_432c34:
    // 0x432c34: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x432c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_432c38:
    // 0x432c38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_432c3c:
    if (ctx->pc == 0x432C3Cu) {
        ctx->pc = 0x432C40u;
        goto label_432c40;
    }
    ctx->pc = 0x432C38u;
    {
        const bool branch_taken_0x432c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c38) {
            ctx->pc = 0x432C48u;
            goto label_432c48;
        }
    }
    ctx->pc = 0x432C40u;
label_432c40:
    // 0x432c40: 0xc0400a8  jal         func_1002A0
label_432c44:
    if (ctx->pc == 0x432C44u) {
        ctx->pc = 0x432C48u;
        goto label_432c48;
    }
    ctx->pc = 0x432C40u;
    SET_GPR_U32(ctx, 31, 0x432C48u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432C48u; }
        if (ctx->pc != 0x432C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432C48u; }
        if (ctx->pc != 0x432C48u) { return; }
    }
    ctx->pc = 0x432C48u;
label_432c48:
    // 0x432c48: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x432c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_432c4c:
    // 0x432c4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_432c50:
    if (ctx->pc == 0x432C50u) {
        ctx->pc = 0x432C54u;
        goto label_432c54;
    }
    ctx->pc = 0x432C4Cu;
    {
        const bool branch_taken_0x432c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c4c) {
            ctx->pc = 0x432C68u;
            goto label_432c68;
        }
    }
    ctx->pc = 0x432C54u;
label_432c54:
    // 0x432c54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x432c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_432c58:
    // 0x432c58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x432c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_432c5c:
    // 0x432c5c: 0x2463caa0  addiu       $v1, $v1, -0x3560
    ctx->pc = 0x432c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953632));
label_432c60:
    // 0x432c60: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x432c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_432c64:
    // 0x432c64: 0xac406ed0  sw          $zero, 0x6ED0($v0)
    ctx->pc = 0x432c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28368), GPR_U32(ctx, 0));
label_432c68:
    // 0x432c68: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_432c6c:
    if (ctx->pc == 0x432C6Cu) {
        ctx->pc = 0x432C6Cu;
            // 0x432c6c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x432C70u;
        goto label_432c70;
    }
    ctx->pc = 0x432C68u;
    {
        const bool branch_taken_0x432c68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c68) {
            ctx->pc = 0x432C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432C68u;
            // 0x432c6c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432CC4u;
            goto label_432cc4;
        }
    }
    ctx->pc = 0x432C70u;
label_432c70:
    // 0x432c70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x432c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_432c74:
    // 0x432c74: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x432c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_432c78:
    // 0x432c78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x432c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_432c7c:
    // 0x432c7c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x432c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_432c80:
    // 0x432c80: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_432c84:
    if (ctx->pc == 0x432C84u) {
        ctx->pc = 0x432C84u;
            // 0x432c84: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x432C88u;
        goto label_432c88;
    }
    ctx->pc = 0x432C80u;
    {
        const bool branch_taken_0x432c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c80) {
            ctx->pc = 0x432C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432C80u;
            // 0x432c84: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432C9Cu;
            goto label_432c9c;
        }
    }
    ctx->pc = 0x432C88u;
label_432c88:
    // 0x432c88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x432c88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_432c8c:
    // 0x432c8c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x432c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_432c90:
    // 0x432c90: 0x320f809  jalr        $t9
label_432c94:
    if (ctx->pc == 0x432C94u) {
        ctx->pc = 0x432C94u;
            // 0x432c94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x432C98u;
        goto label_432c98;
    }
    ctx->pc = 0x432C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x432C98u);
        ctx->pc = 0x432C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432C90u;
            // 0x432c94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x432C98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x432C98u; }
            if (ctx->pc != 0x432C98u) { return; }
        }
        }
    }
    ctx->pc = 0x432C98u;
label_432c98:
    // 0x432c98: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x432c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_432c9c:
    // 0x432c9c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_432ca0:
    if (ctx->pc == 0x432CA0u) {
        ctx->pc = 0x432CA0u;
            // 0x432ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432CA4u;
        goto label_432ca4;
    }
    ctx->pc = 0x432C9Cu;
    {
        const bool branch_taken_0x432c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x432c9c) {
            ctx->pc = 0x432CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432C9Cu;
            // 0x432ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432CB8u;
            goto label_432cb8;
        }
    }
    ctx->pc = 0x432CA4u;
label_432ca4:
    // 0x432ca4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x432ca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_432ca8:
    // 0x432ca8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x432ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_432cac:
    // 0x432cac: 0x320f809  jalr        $t9
label_432cb0:
    if (ctx->pc == 0x432CB0u) {
        ctx->pc = 0x432CB0u;
            // 0x432cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x432CB4u;
        goto label_432cb4;
    }
    ctx->pc = 0x432CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x432CB4u);
        ctx->pc = 0x432CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432CACu;
            // 0x432cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x432CB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x432CB4u; }
            if (ctx->pc != 0x432CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x432CB4u;
label_432cb4:
    // 0x432cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x432cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_432cb8:
    // 0x432cb8: 0xc075bf8  jal         func_1D6FE0
label_432cbc:
    if (ctx->pc == 0x432CBCu) {
        ctx->pc = 0x432CBCu;
            // 0x432cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432CC0u;
        goto label_432cc0;
    }
    ctx->pc = 0x432CB8u;
    SET_GPR_U32(ctx, 31, 0x432CC0u);
    ctx->pc = 0x432CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432CB8u;
            // 0x432cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432CC0u; }
        if (ctx->pc != 0x432CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432CC0u; }
        if (ctx->pc != 0x432CC0u) { return; }
    }
    ctx->pc = 0x432CC0u;
label_432cc0:
    // 0x432cc0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x432cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_432cc4:
    // 0x432cc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x432cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_432cc8:
    // 0x432cc8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_432ccc:
    if (ctx->pc == 0x432CCCu) {
        ctx->pc = 0x432CCCu;
            // 0x432ccc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432CD0u;
        goto label_432cd0;
    }
    ctx->pc = 0x432CC8u;
    {
        const bool branch_taken_0x432cc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x432cc8) {
            ctx->pc = 0x432CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432CC8u;
            // 0x432ccc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432CDCu;
            goto label_432cdc;
        }
    }
    ctx->pc = 0x432CD0u;
label_432cd0:
    // 0x432cd0: 0xc0400a8  jal         func_1002A0
label_432cd4:
    if (ctx->pc == 0x432CD4u) {
        ctx->pc = 0x432CD4u;
            // 0x432cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432CD8u;
        goto label_432cd8;
    }
    ctx->pc = 0x432CD0u;
    SET_GPR_U32(ctx, 31, 0x432CD8u);
    ctx->pc = 0x432CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432CD0u;
            // 0x432cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432CD8u; }
        if (ctx->pc != 0x432CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432CD8u; }
        if (ctx->pc != 0x432CD8u) { return; }
    }
    ctx->pc = 0x432CD8u;
label_432cd8:
    // 0x432cd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x432cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_432cdc:
    // 0x432cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x432cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_432ce0:
    // 0x432ce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x432ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_432ce4:
    // 0x432ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_432ce8:
    // 0x432ce8: 0x3e00008  jr          $ra
label_432cec:
    if (ctx->pc == 0x432CECu) {
        ctx->pc = 0x432CECu;
            // 0x432cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x432CF0u;
        goto label_432cf0;
    }
    ctx->pc = 0x432CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432CE8u;
            // 0x432cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432CF0u;
label_432cf0:
    // 0x432cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x432cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_432cf4:
    // 0x432cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x432cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_432cf8:
    // 0x432cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x432cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_432cfc:
    // 0x432cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x432cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_432d00:
    // 0x432d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x432d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_432d04:
    // 0x432d04: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_432d08:
    if (ctx->pc == 0x432D08u) {
        ctx->pc = 0x432D08u;
            // 0x432d08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432D0Cu;
        goto label_432d0c;
    }
    ctx->pc = 0x432D04u;
    {
        const bool branch_taken_0x432d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x432D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432D04u;
            // 0x432d08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432d04) {
            ctx->pc = 0x432DCCu;
            goto label_432dcc;
        }
    }
    ctx->pc = 0x432D0Cu;
label_432d0c:
    // 0x432d0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x432d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_432d10:
    // 0x432d10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x432d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_432d14:
    // 0x432d14: 0x2463ca00  addiu       $v1, $v1, -0x3600
    ctx->pc = 0x432d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953472));
label_432d18:
    // 0x432d18: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x432d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
label_432d1c:
    // 0x432d1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x432d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_432d20:
    // 0x432d20: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x432d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_432d24:
    // 0x432d24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x432d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_432d28:
    // 0x432d28: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x432d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_432d2c:
    // 0x432d2c: 0x320f809  jalr        $t9
label_432d30:
    if (ctx->pc == 0x432D30u) {
        ctx->pc = 0x432D34u;
        goto label_432d34;
    }
    ctx->pc = 0x432D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x432D34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x432D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x432D34u; }
            if (ctx->pc != 0x432D34u) { return; }
        }
        }
    }
    ctx->pc = 0x432D34u;
label_432d34:
    // 0x432d34: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_432d38:
    if (ctx->pc == 0x432D38u) {
        ctx->pc = 0x432D38u;
            // 0x432d38: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x432D3Cu;
        goto label_432d3c;
    }
    ctx->pc = 0x432D34u;
    {
        const bool branch_taken_0x432d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x432d34) {
            ctx->pc = 0x432D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432D34u;
            // 0x432d38: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432DB8u;
            goto label_432db8;
        }
    }
    ctx->pc = 0x432D3Cu;
label_432d3c:
    // 0x432d3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x432d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_432d40:
    // 0x432d40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x432d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_432d44:
    // 0x432d44: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x432d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_432d48:
    // 0x432d48: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x432d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_432d4c:
    // 0x432d4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x432d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_432d50:
    // 0x432d50: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x432d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_432d54:
    // 0x432d54: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x432d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_432d58:
    // 0x432d58: 0xc0aecc4  jal         func_2BB310
label_432d5c:
    if (ctx->pc == 0x432D5Cu) {
        ctx->pc = 0x432D5Cu;
            // 0x432d5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x432D60u;
        goto label_432d60;
    }
    ctx->pc = 0x432D58u;
    SET_GPR_U32(ctx, 31, 0x432D60u);
    ctx->pc = 0x432D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432D58u;
            // 0x432d5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432D60u; }
        if (ctx->pc != 0x432D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432D60u; }
        if (ctx->pc != 0x432D60u) { return; }
    }
    ctx->pc = 0x432D60u;
label_432d60:
    // 0x432d60: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x432d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_432d64:
    // 0x432d64: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x432d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_432d68:
    // 0x432d68: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_432d6c:
    if (ctx->pc == 0x432D6Cu) {
        ctx->pc = 0x432D6Cu;
            // 0x432d6c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x432D70u;
        goto label_432d70;
    }
    ctx->pc = 0x432D68u;
    {
        const bool branch_taken_0x432d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x432d68) {
            ctx->pc = 0x432D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432D68u;
            // 0x432d6c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432D84u;
            goto label_432d84;
        }
    }
    ctx->pc = 0x432D70u;
label_432d70:
    // 0x432d70: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x432d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_432d74:
    // 0x432d74: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x432d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_432d78:
    // 0x432d78: 0x320f809  jalr        $t9
label_432d7c:
    if (ctx->pc == 0x432D7Cu) {
        ctx->pc = 0x432D7Cu;
            // 0x432d7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x432D80u;
        goto label_432d80;
    }
    ctx->pc = 0x432D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x432D80u);
        ctx->pc = 0x432D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432D78u;
            // 0x432d7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x432D80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x432D80u; }
            if (ctx->pc != 0x432D80u) { return; }
        }
        }
    }
    ctx->pc = 0x432D80u;
label_432d80:
    // 0x432d80: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x432d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_432d84:
    // 0x432d84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x432d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_432d88:
    // 0x432d88: 0xc0aec9c  jal         func_2BB270
label_432d8c:
    if (ctx->pc == 0x432D8Cu) {
        ctx->pc = 0x432D8Cu;
            // 0x432d8c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x432D90u;
        goto label_432d90;
    }
    ctx->pc = 0x432D88u;
    SET_GPR_U32(ctx, 31, 0x432D90u);
    ctx->pc = 0x432D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432D88u;
            // 0x432d8c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432D90u; }
        if (ctx->pc != 0x432D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432D90u; }
        if (ctx->pc != 0x432D90u) { return; }
    }
    ctx->pc = 0x432D90u;
label_432d90:
    // 0x432d90: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x432d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_432d94:
    // 0x432d94: 0xc0aec88  jal         func_2BB220
label_432d98:
    if (ctx->pc == 0x432D98u) {
        ctx->pc = 0x432D98u;
            // 0x432d98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x432D9Cu;
        goto label_432d9c;
    }
    ctx->pc = 0x432D94u;
    SET_GPR_U32(ctx, 31, 0x432D9Cu);
    ctx->pc = 0x432D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432D94u;
            // 0x432d98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432D9Cu; }
        if (ctx->pc != 0x432D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432D9Cu; }
        if (ctx->pc != 0x432D9Cu) { return; }
    }
    ctx->pc = 0x432D9Cu;
label_432d9c:
    // 0x432d9c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x432d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_432da0:
    // 0x432da0: 0xc0aec0c  jal         func_2BB030
label_432da4:
    if (ctx->pc == 0x432DA4u) {
        ctx->pc = 0x432DA4u;
            // 0x432da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432DA8u;
        goto label_432da8;
    }
    ctx->pc = 0x432DA0u;
    SET_GPR_U32(ctx, 31, 0x432DA8u);
    ctx->pc = 0x432DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432DA0u;
            // 0x432da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432DA8u; }
        if (ctx->pc != 0x432DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432DA8u; }
        if (ctx->pc != 0x432DA8u) { return; }
    }
    ctx->pc = 0x432DA8u;
label_432da8:
    // 0x432da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x432da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_432dac:
    // 0x432dac: 0xc0aeaa8  jal         func_2BAAA0
label_432db0:
    if (ctx->pc == 0x432DB0u) {
        ctx->pc = 0x432DB0u;
            // 0x432db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432DB4u;
        goto label_432db4;
    }
    ctx->pc = 0x432DACu;
    SET_GPR_U32(ctx, 31, 0x432DB4u);
    ctx->pc = 0x432DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432DACu;
            // 0x432db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432DB4u; }
        if (ctx->pc != 0x432DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432DB4u; }
        if (ctx->pc != 0x432DB4u) { return; }
    }
    ctx->pc = 0x432DB4u;
label_432db4:
    // 0x432db4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x432db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_432db8:
    // 0x432db8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x432db8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_432dbc:
    // 0x432dbc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_432dc0:
    if (ctx->pc == 0x432DC0u) {
        ctx->pc = 0x432DC0u;
            // 0x432dc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432DC4u;
        goto label_432dc4;
    }
    ctx->pc = 0x432DBCu;
    {
        const bool branch_taken_0x432dbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x432dbc) {
            ctx->pc = 0x432DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x432DBCu;
            // 0x432dc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x432DD0u;
            goto label_432dd0;
        }
    }
    ctx->pc = 0x432DC4u;
label_432dc4:
    // 0x432dc4: 0xc0400a8  jal         func_1002A0
label_432dc8:
    if (ctx->pc == 0x432DC8u) {
        ctx->pc = 0x432DC8u;
            // 0x432dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x432DCCu;
        goto label_432dcc;
    }
    ctx->pc = 0x432DC4u;
    SET_GPR_U32(ctx, 31, 0x432DCCu);
    ctx->pc = 0x432DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432DC4u;
            // 0x432dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432DCCu; }
        if (ctx->pc != 0x432DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432DCCu; }
        if (ctx->pc != 0x432DCCu) { return; }
    }
    ctx->pc = 0x432DCCu;
label_432dcc:
    // 0x432dcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x432dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_432dd0:
    // 0x432dd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x432dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_432dd4:
    // 0x432dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x432dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_432dd8:
    // 0x432dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_432ddc:
    // 0x432ddc: 0x3e00008  jr          $ra
label_432de0:
    if (ctx->pc == 0x432DE0u) {
        ctx->pc = 0x432DE0u;
            // 0x432de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x432DE4u;
        goto label_432de4;
    }
    ctx->pc = 0x432DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432DDCu;
            // 0x432de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432DE4u;
label_432de4:
    // 0x432de4: 0x0  nop
    ctx->pc = 0x432de4u;
    // NOP
label_432de8:
    // 0x432de8: 0x0  nop
    ctx->pc = 0x432de8u;
    // NOP
label_432dec:
    // 0x432dec: 0x0  nop
    ctx->pc = 0x432decu;
    // NOP
}
