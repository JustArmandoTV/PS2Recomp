#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502C30
// Address: 0x502c30 - 0x502d90
void sub_00502C30_0x502c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502C30_0x502c30");
#endif

    switch (ctx->pc) {
        case 0x502c30u: goto label_502c30;
        case 0x502c34u: goto label_502c34;
        case 0x502c38u: goto label_502c38;
        case 0x502c3cu: goto label_502c3c;
        case 0x502c40u: goto label_502c40;
        case 0x502c44u: goto label_502c44;
        case 0x502c48u: goto label_502c48;
        case 0x502c4cu: goto label_502c4c;
        case 0x502c50u: goto label_502c50;
        case 0x502c54u: goto label_502c54;
        case 0x502c58u: goto label_502c58;
        case 0x502c5cu: goto label_502c5c;
        case 0x502c60u: goto label_502c60;
        case 0x502c64u: goto label_502c64;
        case 0x502c68u: goto label_502c68;
        case 0x502c6cu: goto label_502c6c;
        case 0x502c70u: goto label_502c70;
        case 0x502c74u: goto label_502c74;
        case 0x502c78u: goto label_502c78;
        case 0x502c7cu: goto label_502c7c;
        case 0x502c80u: goto label_502c80;
        case 0x502c84u: goto label_502c84;
        case 0x502c88u: goto label_502c88;
        case 0x502c8cu: goto label_502c8c;
        case 0x502c90u: goto label_502c90;
        case 0x502c94u: goto label_502c94;
        case 0x502c98u: goto label_502c98;
        case 0x502c9cu: goto label_502c9c;
        case 0x502ca0u: goto label_502ca0;
        case 0x502ca4u: goto label_502ca4;
        case 0x502ca8u: goto label_502ca8;
        case 0x502cacu: goto label_502cac;
        case 0x502cb0u: goto label_502cb0;
        case 0x502cb4u: goto label_502cb4;
        case 0x502cb8u: goto label_502cb8;
        case 0x502cbcu: goto label_502cbc;
        case 0x502cc0u: goto label_502cc0;
        case 0x502cc4u: goto label_502cc4;
        case 0x502cc8u: goto label_502cc8;
        case 0x502cccu: goto label_502ccc;
        case 0x502cd0u: goto label_502cd0;
        case 0x502cd4u: goto label_502cd4;
        case 0x502cd8u: goto label_502cd8;
        case 0x502cdcu: goto label_502cdc;
        case 0x502ce0u: goto label_502ce0;
        case 0x502ce4u: goto label_502ce4;
        case 0x502ce8u: goto label_502ce8;
        case 0x502cecu: goto label_502cec;
        case 0x502cf0u: goto label_502cf0;
        case 0x502cf4u: goto label_502cf4;
        case 0x502cf8u: goto label_502cf8;
        case 0x502cfcu: goto label_502cfc;
        case 0x502d00u: goto label_502d00;
        case 0x502d04u: goto label_502d04;
        case 0x502d08u: goto label_502d08;
        case 0x502d0cu: goto label_502d0c;
        case 0x502d10u: goto label_502d10;
        case 0x502d14u: goto label_502d14;
        case 0x502d18u: goto label_502d18;
        case 0x502d1cu: goto label_502d1c;
        case 0x502d20u: goto label_502d20;
        case 0x502d24u: goto label_502d24;
        case 0x502d28u: goto label_502d28;
        case 0x502d2cu: goto label_502d2c;
        case 0x502d30u: goto label_502d30;
        case 0x502d34u: goto label_502d34;
        case 0x502d38u: goto label_502d38;
        case 0x502d3cu: goto label_502d3c;
        case 0x502d40u: goto label_502d40;
        case 0x502d44u: goto label_502d44;
        case 0x502d48u: goto label_502d48;
        case 0x502d4cu: goto label_502d4c;
        case 0x502d50u: goto label_502d50;
        case 0x502d54u: goto label_502d54;
        case 0x502d58u: goto label_502d58;
        case 0x502d5cu: goto label_502d5c;
        case 0x502d60u: goto label_502d60;
        case 0x502d64u: goto label_502d64;
        case 0x502d68u: goto label_502d68;
        case 0x502d6cu: goto label_502d6c;
        case 0x502d70u: goto label_502d70;
        case 0x502d74u: goto label_502d74;
        case 0x502d78u: goto label_502d78;
        case 0x502d7cu: goto label_502d7c;
        case 0x502d80u: goto label_502d80;
        case 0x502d84u: goto label_502d84;
        case 0x502d88u: goto label_502d88;
        case 0x502d8cu: goto label_502d8c;
        default: break;
    }

    ctx->pc = 0x502c30u;

label_502c30:
    // 0x502c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x502c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_502c34:
    // 0x502c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x502c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_502c38:
    // 0x502c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x502c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_502c3c:
    // 0x502c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x502c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_502c40:
    // 0x502c40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x502c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_502c44:
    // 0x502c44: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_502c48:
    if (ctx->pc == 0x502C48u) {
        ctx->pc = 0x502C48u;
            // 0x502c48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502C4Cu;
        goto label_502c4c;
    }
    ctx->pc = 0x502C44u;
    {
        const bool branch_taken_0x502c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x502C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502C44u;
            // 0x502c48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502c44) {
            ctx->pc = 0x502D78u;
            goto label_502d78;
        }
    }
    ctx->pc = 0x502C4Cu;
label_502c4c:
    // 0x502c4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_502c50:
    // 0x502c50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x502c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_502c54:
    // 0x502c54: 0x246349f0  addiu       $v1, $v1, 0x49F0
    ctx->pc = 0x502c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18928));
label_502c58:
    // 0x502c58: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x502c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
label_502c5c:
    // 0x502c5c: 0x24424a28  addiu       $v0, $v0, 0x4A28
    ctx->pc = 0x502c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18984));
label_502c60:
    // 0x502c60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x502c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_502c64:
    // 0x502c64: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x502c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_502c68:
    // 0x502c68: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x502c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_502c6c:
    // 0x502c6c: 0xc0407c0  jal         func_101F00
label_502c70:
    if (ctx->pc == 0x502C70u) {
        ctx->pc = 0x502C70u;
            // 0x502c70: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
        ctx->pc = 0x502C74u;
        goto label_502c74;
    }
    ctx->pc = 0x502C6Cu;
    SET_GPR_U32(ctx, 31, 0x502C74u);
    ctx->pc = 0x502C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502C6Cu;
            // 0x502c70: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502C74u; }
        if (ctx->pc != 0x502C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502C74u; }
        if (ctx->pc != 0x502C74u) { return; }
    }
    ctx->pc = 0x502C74u;
label_502c74:
    // 0x502c74: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x502c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_502c78:
    // 0x502c78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_502c7c:
    if (ctx->pc == 0x502C7Cu) {
        ctx->pc = 0x502C7Cu;
            // 0x502c7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x502C80u;
        goto label_502c80;
    }
    ctx->pc = 0x502C78u;
    {
        const bool branch_taken_0x502c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x502c78) {
            ctx->pc = 0x502C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502C78u;
            // 0x502c7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502C8Cu;
            goto label_502c8c;
        }
    }
    ctx->pc = 0x502C80u;
label_502c80:
    // 0x502c80: 0xc07507c  jal         func_1D41F0
label_502c84:
    if (ctx->pc == 0x502C84u) {
        ctx->pc = 0x502C84u;
            // 0x502c84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x502C88u;
        goto label_502c88;
    }
    ctx->pc = 0x502C80u;
    SET_GPR_U32(ctx, 31, 0x502C88u);
    ctx->pc = 0x502C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502C80u;
            // 0x502c84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502C88u; }
        if (ctx->pc != 0x502C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502C88u; }
        if (ctx->pc != 0x502C88u) { return; }
    }
    ctx->pc = 0x502C88u;
label_502c88:
    // 0x502c88: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x502c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_502c8c:
    // 0x502c8c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_502c90:
    if (ctx->pc == 0x502C90u) {
        ctx->pc = 0x502C90u;
            // 0x502c90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x502C94u;
        goto label_502c94;
    }
    ctx->pc = 0x502C8Cu;
    {
        const bool branch_taken_0x502c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x502c8c) {
            ctx->pc = 0x502C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502C8Cu;
            // 0x502c90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502CBCu;
            goto label_502cbc;
        }
    }
    ctx->pc = 0x502C94u;
label_502c94:
    // 0x502c94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_502c98:
    if (ctx->pc == 0x502C98u) {
        ctx->pc = 0x502C9Cu;
        goto label_502c9c;
    }
    ctx->pc = 0x502C94u;
    {
        const bool branch_taken_0x502c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x502c94) {
            ctx->pc = 0x502CB8u;
            goto label_502cb8;
        }
    }
    ctx->pc = 0x502C9Cu;
label_502c9c:
    // 0x502c9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_502ca0:
    if (ctx->pc == 0x502CA0u) {
        ctx->pc = 0x502CA4u;
        goto label_502ca4;
    }
    ctx->pc = 0x502C9Cu;
    {
        const bool branch_taken_0x502c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x502c9c) {
            ctx->pc = 0x502CB8u;
            goto label_502cb8;
        }
    }
    ctx->pc = 0x502CA4u;
label_502ca4:
    // 0x502ca4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x502ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_502ca8:
    // 0x502ca8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_502cac:
    if (ctx->pc == 0x502CACu) {
        ctx->pc = 0x502CB0u;
        goto label_502cb0;
    }
    ctx->pc = 0x502CA8u;
    {
        const bool branch_taken_0x502ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x502ca8) {
            ctx->pc = 0x502CB8u;
            goto label_502cb8;
        }
    }
    ctx->pc = 0x502CB0u;
label_502cb0:
    // 0x502cb0: 0xc0400a8  jal         func_1002A0
label_502cb4:
    if (ctx->pc == 0x502CB4u) {
        ctx->pc = 0x502CB8u;
        goto label_502cb8;
    }
    ctx->pc = 0x502CB0u;
    SET_GPR_U32(ctx, 31, 0x502CB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502CB8u; }
        if (ctx->pc != 0x502CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502CB8u; }
        if (ctx->pc != 0x502CB8u) { return; }
    }
    ctx->pc = 0x502CB8u;
label_502cb8:
    // 0x502cb8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x502cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_502cbc:
    // 0x502cbc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_502cc0:
    if (ctx->pc == 0x502CC0u) {
        ctx->pc = 0x502CC0u;
            // 0x502cc0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x502CC4u;
        goto label_502cc4;
    }
    ctx->pc = 0x502CBCu;
    {
        const bool branch_taken_0x502cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x502cbc) {
            ctx->pc = 0x502CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502CBCu;
            // 0x502cc0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502CECu;
            goto label_502cec;
        }
    }
    ctx->pc = 0x502CC4u;
label_502cc4:
    // 0x502cc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_502cc8:
    if (ctx->pc == 0x502CC8u) {
        ctx->pc = 0x502CCCu;
        goto label_502ccc;
    }
    ctx->pc = 0x502CC4u;
    {
        const bool branch_taken_0x502cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x502cc4) {
            ctx->pc = 0x502CE8u;
            goto label_502ce8;
        }
    }
    ctx->pc = 0x502CCCu;
label_502ccc:
    // 0x502ccc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_502cd0:
    if (ctx->pc == 0x502CD0u) {
        ctx->pc = 0x502CD4u;
        goto label_502cd4;
    }
    ctx->pc = 0x502CCCu;
    {
        const bool branch_taken_0x502ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x502ccc) {
            ctx->pc = 0x502CE8u;
            goto label_502ce8;
        }
    }
    ctx->pc = 0x502CD4u;
label_502cd4:
    // 0x502cd4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x502cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_502cd8:
    // 0x502cd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_502cdc:
    if (ctx->pc == 0x502CDCu) {
        ctx->pc = 0x502CE0u;
        goto label_502ce0;
    }
    ctx->pc = 0x502CD8u;
    {
        const bool branch_taken_0x502cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x502cd8) {
            ctx->pc = 0x502CE8u;
            goto label_502ce8;
        }
    }
    ctx->pc = 0x502CE0u;
label_502ce0:
    // 0x502ce0: 0xc0400a8  jal         func_1002A0
label_502ce4:
    if (ctx->pc == 0x502CE4u) {
        ctx->pc = 0x502CE8u;
        goto label_502ce8;
    }
    ctx->pc = 0x502CE0u;
    SET_GPR_U32(ctx, 31, 0x502CE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502CE8u; }
        if (ctx->pc != 0x502CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502CE8u; }
        if (ctx->pc != 0x502CE8u) { return; }
    }
    ctx->pc = 0x502CE8u;
label_502ce8:
    // 0x502ce8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x502ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_502cec:
    // 0x502cec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_502cf0:
    if (ctx->pc == 0x502CF0u) {
        ctx->pc = 0x502CF4u;
        goto label_502cf4;
    }
    ctx->pc = 0x502CECu;
    {
        const bool branch_taken_0x502cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x502cec) {
            ctx->pc = 0x502D08u;
            goto label_502d08;
        }
    }
    ctx->pc = 0x502CF4u;
label_502cf4:
    // 0x502cf4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x502cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_502cf8:
    // 0x502cf8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x502cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_502cfc:
    // 0x502cfc: 0x246349d8  addiu       $v1, $v1, 0x49D8
    ctx->pc = 0x502cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18904));
label_502d00:
    // 0x502d00: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x502d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_502d04:
    // 0x502d04: 0xac40aae8  sw          $zero, -0x5518($v0)
    ctx->pc = 0x502d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945512), GPR_U32(ctx, 0));
label_502d08:
    // 0x502d08: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_502d0c:
    if (ctx->pc == 0x502D0Cu) {
        ctx->pc = 0x502D0Cu;
            // 0x502d0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x502D10u;
        goto label_502d10;
    }
    ctx->pc = 0x502D08u;
    {
        const bool branch_taken_0x502d08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x502d08) {
            ctx->pc = 0x502D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502D08u;
            // 0x502d0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502D64u;
            goto label_502d64;
        }
    }
    ctx->pc = 0x502D10u;
label_502d10:
    // 0x502d10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x502d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_502d14:
    // 0x502d14: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x502d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_502d18:
    // 0x502d18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x502d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_502d1c:
    // 0x502d1c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x502d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_502d20:
    // 0x502d20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_502d24:
    if (ctx->pc == 0x502D24u) {
        ctx->pc = 0x502D24u;
            // 0x502d24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x502D28u;
        goto label_502d28;
    }
    ctx->pc = 0x502D20u;
    {
        const bool branch_taken_0x502d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x502d20) {
            ctx->pc = 0x502D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502D20u;
            // 0x502d24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502D3Cu;
            goto label_502d3c;
        }
    }
    ctx->pc = 0x502D28u;
label_502d28:
    // 0x502d28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x502d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_502d2c:
    // 0x502d2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x502d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_502d30:
    // 0x502d30: 0x320f809  jalr        $t9
label_502d34:
    if (ctx->pc == 0x502D34u) {
        ctx->pc = 0x502D34u;
            // 0x502d34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x502D38u;
        goto label_502d38;
    }
    ctx->pc = 0x502D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x502D38u);
        ctx->pc = 0x502D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502D30u;
            // 0x502d34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x502D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x502D38u; }
            if (ctx->pc != 0x502D38u) { return; }
        }
        }
    }
    ctx->pc = 0x502D38u;
label_502d38:
    // 0x502d38: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x502d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_502d3c:
    // 0x502d3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_502d40:
    if (ctx->pc == 0x502D40u) {
        ctx->pc = 0x502D40u;
            // 0x502d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502D44u;
        goto label_502d44;
    }
    ctx->pc = 0x502D3Cu;
    {
        const bool branch_taken_0x502d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x502d3c) {
            ctx->pc = 0x502D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502D3Cu;
            // 0x502d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502D58u;
            goto label_502d58;
        }
    }
    ctx->pc = 0x502D44u;
label_502d44:
    // 0x502d44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x502d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_502d48:
    // 0x502d48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x502d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_502d4c:
    // 0x502d4c: 0x320f809  jalr        $t9
label_502d50:
    if (ctx->pc == 0x502D50u) {
        ctx->pc = 0x502D50u;
            // 0x502d50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x502D54u;
        goto label_502d54;
    }
    ctx->pc = 0x502D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x502D54u);
        ctx->pc = 0x502D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502D4Cu;
            // 0x502d50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x502D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x502D54u; }
            if (ctx->pc != 0x502D54u) { return; }
        }
        }
    }
    ctx->pc = 0x502D54u;
label_502d54:
    // 0x502d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x502d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_502d58:
    // 0x502d58: 0xc075bf8  jal         func_1D6FE0
label_502d5c:
    if (ctx->pc == 0x502D5Cu) {
        ctx->pc = 0x502D5Cu;
            // 0x502d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502D60u;
        goto label_502d60;
    }
    ctx->pc = 0x502D58u;
    SET_GPR_U32(ctx, 31, 0x502D60u);
    ctx->pc = 0x502D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502D58u;
            // 0x502d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502D60u; }
        if (ctx->pc != 0x502D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502D60u; }
        if (ctx->pc != 0x502D60u) { return; }
    }
    ctx->pc = 0x502D60u;
label_502d60:
    // 0x502d60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x502d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_502d64:
    // 0x502d64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x502d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_502d68:
    // 0x502d68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_502d6c:
    if (ctx->pc == 0x502D6Cu) {
        ctx->pc = 0x502D6Cu;
            // 0x502d6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502D70u;
        goto label_502d70;
    }
    ctx->pc = 0x502D68u;
    {
        const bool branch_taken_0x502d68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x502d68) {
            ctx->pc = 0x502D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x502D68u;
            // 0x502d6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x502D7Cu;
            goto label_502d7c;
        }
    }
    ctx->pc = 0x502D70u;
label_502d70:
    // 0x502d70: 0xc0400a8  jal         func_1002A0
label_502d74:
    if (ctx->pc == 0x502D74u) {
        ctx->pc = 0x502D74u;
            // 0x502d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x502D78u;
        goto label_502d78;
    }
    ctx->pc = 0x502D70u;
    SET_GPR_U32(ctx, 31, 0x502D78u);
    ctx->pc = 0x502D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x502D70u;
            // 0x502d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502D78u; }
        if (ctx->pc != 0x502D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x502D78u; }
        if (ctx->pc != 0x502D78u) { return; }
    }
    ctx->pc = 0x502D78u;
label_502d78:
    // 0x502d78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x502d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_502d7c:
    // 0x502d7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x502d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_502d80:
    // 0x502d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x502d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_502d84:
    // 0x502d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x502d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_502d88:
    // 0x502d88: 0x3e00008  jr          $ra
label_502d8c:
    if (ctx->pc == 0x502D8Cu) {
        ctx->pc = 0x502D8Cu;
            // 0x502d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x502D90u;
        goto label_fallthrough_0x502d88;
    }
    ctx->pc = 0x502D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502D88u;
            // 0x502d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x502d88:
    ctx->pc = 0x502D90u;
}
