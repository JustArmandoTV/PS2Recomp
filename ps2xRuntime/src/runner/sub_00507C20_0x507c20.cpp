#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00507C20
// Address: 0x507c20 - 0x507da0
void sub_00507C20_0x507c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507C20_0x507c20");
#endif

    switch (ctx->pc) {
        case 0x507c20u: goto label_507c20;
        case 0x507c24u: goto label_507c24;
        case 0x507c28u: goto label_507c28;
        case 0x507c2cu: goto label_507c2c;
        case 0x507c30u: goto label_507c30;
        case 0x507c34u: goto label_507c34;
        case 0x507c38u: goto label_507c38;
        case 0x507c3cu: goto label_507c3c;
        case 0x507c40u: goto label_507c40;
        case 0x507c44u: goto label_507c44;
        case 0x507c48u: goto label_507c48;
        case 0x507c4cu: goto label_507c4c;
        case 0x507c50u: goto label_507c50;
        case 0x507c54u: goto label_507c54;
        case 0x507c58u: goto label_507c58;
        case 0x507c5cu: goto label_507c5c;
        case 0x507c60u: goto label_507c60;
        case 0x507c64u: goto label_507c64;
        case 0x507c68u: goto label_507c68;
        case 0x507c6cu: goto label_507c6c;
        case 0x507c70u: goto label_507c70;
        case 0x507c74u: goto label_507c74;
        case 0x507c78u: goto label_507c78;
        case 0x507c7cu: goto label_507c7c;
        case 0x507c80u: goto label_507c80;
        case 0x507c84u: goto label_507c84;
        case 0x507c88u: goto label_507c88;
        case 0x507c8cu: goto label_507c8c;
        case 0x507c90u: goto label_507c90;
        case 0x507c94u: goto label_507c94;
        case 0x507c98u: goto label_507c98;
        case 0x507c9cu: goto label_507c9c;
        case 0x507ca0u: goto label_507ca0;
        case 0x507ca4u: goto label_507ca4;
        case 0x507ca8u: goto label_507ca8;
        case 0x507cacu: goto label_507cac;
        case 0x507cb0u: goto label_507cb0;
        case 0x507cb4u: goto label_507cb4;
        case 0x507cb8u: goto label_507cb8;
        case 0x507cbcu: goto label_507cbc;
        case 0x507cc0u: goto label_507cc0;
        case 0x507cc4u: goto label_507cc4;
        case 0x507cc8u: goto label_507cc8;
        case 0x507cccu: goto label_507ccc;
        case 0x507cd0u: goto label_507cd0;
        case 0x507cd4u: goto label_507cd4;
        case 0x507cd8u: goto label_507cd8;
        case 0x507cdcu: goto label_507cdc;
        case 0x507ce0u: goto label_507ce0;
        case 0x507ce4u: goto label_507ce4;
        case 0x507ce8u: goto label_507ce8;
        case 0x507cecu: goto label_507cec;
        case 0x507cf0u: goto label_507cf0;
        case 0x507cf4u: goto label_507cf4;
        case 0x507cf8u: goto label_507cf8;
        case 0x507cfcu: goto label_507cfc;
        case 0x507d00u: goto label_507d00;
        case 0x507d04u: goto label_507d04;
        case 0x507d08u: goto label_507d08;
        case 0x507d0cu: goto label_507d0c;
        case 0x507d10u: goto label_507d10;
        case 0x507d14u: goto label_507d14;
        case 0x507d18u: goto label_507d18;
        case 0x507d1cu: goto label_507d1c;
        case 0x507d20u: goto label_507d20;
        case 0x507d24u: goto label_507d24;
        case 0x507d28u: goto label_507d28;
        case 0x507d2cu: goto label_507d2c;
        case 0x507d30u: goto label_507d30;
        case 0x507d34u: goto label_507d34;
        case 0x507d38u: goto label_507d38;
        case 0x507d3cu: goto label_507d3c;
        case 0x507d40u: goto label_507d40;
        case 0x507d44u: goto label_507d44;
        case 0x507d48u: goto label_507d48;
        case 0x507d4cu: goto label_507d4c;
        case 0x507d50u: goto label_507d50;
        case 0x507d54u: goto label_507d54;
        case 0x507d58u: goto label_507d58;
        case 0x507d5cu: goto label_507d5c;
        case 0x507d60u: goto label_507d60;
        case 0x507d64u: goto label_507d64;
        case 0x507d68u: goto label_507d68;
        case 0x507d6cu: goto label_507d6c;
        case 0x507d70u: goto label_507d70;
        case 0x507d74u: goto label_507d74;
        case 0x507d78u: goto label_507d78;
        case 0x507d7cu: goto label_507d7c;
        case 0x507d80u: goto label_507d80;
        case 0x507d84u: goto label_507d84;
        case 0x507d88u: goto label_507d88;
        case 0x507d8cu: goto label_507d8c;
        case 0x507d90u: goto label_507d90;
        case 0x507d94u: goto label_507d94;
        case 0x507d98u: goto label_507d98;
        case 0x507d9cu: goto label_507d9c;
        default: break;
    }

    ctx->pc = 0x507c20u;

label_507c20:
    // 0x507c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x507c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_507c24:
    // 0x507c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x507c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_507c28:
    // 0x507c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x507c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_507c2c:
    // 0x507c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x507c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_507c30:
    // 0x507c30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x507c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_507c34:
    // 0x507c34: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_507c38:
    if (ctx->pc == 0x507C38u) {
        ctx->pc = 0x507C38u;
            // 0x507c38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507C3Cu;
        goto label_507c3c;
    }
    ctx->pc = 0x507C34u;
    {
        const bool branch_taken_0x507c34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x507C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507C34u;
            // 0x507c38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507c34) {
            ctx->pc = 0x507D7Cu;
            goto label_507d7c;
        }
    }
    ctx->pc = 0x507C3Cu;
label_507c3c:
    // 0x507c3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_507c40:
    // 0x507c40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_507c44:
    // 0x507c44: 0x24634fc0  addiu       $v1, $v1, 0x4FC0
    ctx->pc = 0x507c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20416));
label_507c48:
    // 0x507c48: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x507c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
label_507c4c:
    // 0x507c4c: 0x24424ff8  addiu       $v0, $v0, 0x4FF8
    ctx->pc = 0x507c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20472));
label_507c50:
    // 0x507c50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x507c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_507c54:
    // 0x507c54: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x507c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_507c58:
    // 0x507c58: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x507c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_507c5c:
    // 0x507c5c: 0xc0407c0  jal         func_101F00
label_507c60:
    if (ctx->pc == 0x507C60u) {
        ctx->pc = 0x507C60u;
            // 0x507c60: 0x24a57b10  addiu       $a1, $a1, 0x7B10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31504));
        ctx->pc = 0x507C64u;
        goto label_507c64;
    }
    ctx->pc = 0x507C5Cu;
    SET_GPR_U32(ctx, 31, 0x507C64u);
    ctx->pc = 0x507C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507C5Cu;
            // 0x507c60: 0x24a57b10  addiu       $a1, $a1, 0x7B10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507C64u; }
        if (ctx->pc != 0x507C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507C64u; }
        if (ctx->pc != 0x507C64u) { return; }
    }
    ctx->pc = 0x507C64u;
label_507c64:
    // 0x507c64: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x507c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_507c68:
    // 0x507c68: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_507c6c:
    if (ctx->pc == 0x507C6Cu) {
        ctx->pc = 0x507C6Cu;
            // 0x507c6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x507C70u;
        goto label_507c70;
    }
    ctx->pc = 0x507C68u;
    {
        const bool branch_taken_0x507c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x507c68) {
            ctx->pc = 0x507C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507C68u;
            // 0x507c6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507C90u;
            goto label_507c90;
        }
    }
    ctx->pc = 0x507C70u;
label_507c70:
    // 0x507c70: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x507c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_507c74:
    // 0x507c74: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_507c78:
    if (ctx->pc == 0x507C78u) {
        ctx->pc = 0x507C78u;
            // 0x507c78: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x507C7Cu;
        goto label_507c7c;
    }
    ctx->pc = 0x507C74u;
    {
        const bool branch_taken_0x507c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x507c74) {
            ctx->pc = 0x507C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507C74u;
            // 0x507c78: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507C8Cu;
            goto label_507c8c;
        }
    }
    ctx->pc = 0x507C7Cu;
label_507c7c:
    // 0x507c7c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x507c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_507c80:
    // 0x507c80: 0xc0407c0  jal         func_101F00
label_507c84:
    if (ctx->pc == 0x507C84u) {
        ctx->pc = 0x507C84u;
            // 0x507c84: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x507C88u;
        goto label_507c88;
    }
    ctx->pc = 0x507C80u;
    SET_GPR_U32(ctx, 31, 0x507C88u);
    ctx->pc = 0x507C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507C80u;
            // 0x507c84: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507C88u; }
        if (ctx->pc != 0x507C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507C88u; }
        if (ctx->pc != 0x507C88u) { return; }
    }
    ctx->pc = 0x507C88u;
label_507c88:
    // 0x507c88: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x507c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_507c8c:
    // 0x507c8c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x507c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_507c90:
    // 0x507c90: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_507c94:
    if (ctx->pc == 0x507C94u) {
        ctx->pc = 0x507C94u;
            // 0x507c94: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x507C98u;
        goto label_507c98;
    }
    ctx->pc = 0x507C90u;
    {
        const bool branch_taken_0x507c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x507c90) {
            ctx->pc = 0x507C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507C90u;
            // 0x507c94: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507CC0u;
            goto label_507cc0;
        }
    }
    ctx->pc = 0x507C98u;
label_507c98:
    // 0x507c98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_507c9c:
    if (ctx->pc == 0x507C9Cu) {
        ctx->pc = 0x507CA0u;
        goto label_507ca0;
    }
    ctx->pc = 0x507C98u;
    {
        const bool branch_taken_0x507c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x507c98) {
            ctx->pc = 0x507CBCu;
            goto label_507cbc;
        }
    }
    ctx->pc = 0x507CA0u;
label_507ca0:
    // 0x507ca0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_507ca4:
    if (ctx->pc == 0x507CA4u) {
        ctx->pc = 0x507CA8u;
        goto label_507ca8;
    }
    ctx->pc = 0x507CA0u;
    {
        const bool branch_taken_0x507ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x507ca0) {
            ctx->pc = 0x507CBCu;
            goto label_507cbc;
        }
    }
    ctx->pc = 0x507CA8u;
label_507ca8:
    // 0x507ca8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x507ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_507cac:
    // 0x507cac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_507cb0:
    if (ctx->pc == 0x507CB0u) {
        ctx->pc = 0x507CB4u;
        goto label_507cb4;
    }
    ctx->pc = 0x507CACu;
    {
        const bool branch_taken_0x507cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x507cac) {
            ctx->pc = 0x507CBCu;
            goto label_507cbc;
        }
    }
    ctx->pc = 0x507CB4u;
label_507cb4:
    // 0x507cb4: 0xc0400a8  jal         func_1002A0
label_507cb8:
    if (ctx->pc == 0x507CB8u) {
        ctx->pc = 0x507CBCu;
        goto label_507cbc;
    }
    ctx->pc = 0x507CB4u;
    SET_GPR_U32(ctx, 31, 0x507CBCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507CBCu; }
        if (ctx->pc != 0x507CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507CBCu; }
        if (ctx->pc != 0x507CBCu) { return; }
    }
    ctx->pc = 0x507CBCu;
label_507cbc:
    // 0x507cbc: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x507cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_507cc0:
    // 0x507cc0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_507cc4:
    if (ctx->pc == 0x507CC4u) {
        ctx->pc = 0x507CC4u;
            // 0x507cc4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x507CC8u;
        goto label_507cc8;
    }
    ctx->pc = 0x507CC0u;
    {
        const bool branch_taken_0x507cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x507cc0) {
            ctx->pc = 0x507CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507CC0u;
            // 0x507cc4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507CF0u;
            goto label_507cf0;
        }
    }
    ctx->pc = 0x507CC8u;
label_507cc8:
    // 0x507cc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_507ccc:
    if (ctx->pc == 0x507CCCu) {
        ctx->pc = 0x507CD0u;
        goto label_507cd0;
    }
    ctx->pc = 0x507CC8u;
    {
        const bool branch_taken_0x507cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x507cc8) {
            ctx->pc = 0x507CECu;
            goto label_507cec;
        }
    }
    ctx->pc = 0x507CD0u;
label_507cd0:
    // 0x507cd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_507cd4:
    if (ctx->pc == 0x507CD4u) {
        ctx->pc = 0x507CD8u;
        goto label_507cd8;
    }
    ctx->pc = 0x507CD0u;
    {
        const bool branch_taken_0x507cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x507cd0) {
            ctx->pc = 0x507CECu;
            goto label_507cec;
        }
    }
    ctx->pc = 0x507CD8u;
label_507cd8:
    // 0x507cd8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x507cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_507cdc:
    // 0x507cdc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_507ce0:
    if (ctx->pc == 0x507CE0u) {
        ctx->pc = 0x507CE4u;
        goto label_507ce4;
    }
    ctx->pc = 0x507CDCu;
    {
        const bool branch_taken_0x507cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x507cdc) {
            ctx->pc = 0x507CECu;
            goto label_507cec;
        }
    }
    ctx->pc = 0x507CE4u;
label_507ce4:
    // 0x507ce4: 0xc0400a8  jal         func_1002A0
label_507ce8:
    if (ctx->pc == 0x507CE8u) {
        ctx->pc = 0x507CECu;
        goto label_507cec;
    }
    ctx->pc = 0x507CE4u;
    SET_GPR_U32(ctx, 31, 0x507CECu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507CECu; }
        if (ctx->pc != 0x507CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507CECu; }
        if (ctx->pc != 0x507CECu) { return; }
    }
    ctx->pc = 0x507CECu;
label_507cec:
    // 0x507cec: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x507cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_507cf0:
    // 0x507cf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_507cf4:
    if (ctx->pc == 0x507CF4u) {
        ctx->pc = 0x507CF8u;
        goto label_507cf8;
    }
    ctx->pc = 0x507CF0u;
    {
        const bool branch_taken_0x507cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x507cf0) {
            ctx->pc = 0x507D0Cu;
            goto label_507d0c;
        }
    }
    ctx->pc = 0x507CF8u;
label_507cf8:
    // 0x507cf8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x507cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_507cfc:
    // 0x507cfc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x507cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_507d00:
    // 0x507d00: 0x24634fa8  addiu       $v1, $v1, 0x4FA8
    ctx->pc = 0x507d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20392));
label_507d04:
    // 0x507d04: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x507d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_507d08:
    // 0x507d08: 0xac40aaf8  sw          $zero, -0x5508($v0)
    ctx->pc = 0x507d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945528), GPR_U32(ctx, 0));
label_507d0c:
    // 0x507d0c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_507d10:
    if (ctx->pc == 0x507D10u) {
        ctx->pc = 0x507D10u;
            // 0x507d10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x507D14u;
        goto label_507d14;
    }
    ctx->pc = 0x507D0Cu;
    {
        const bool branch_taken_0x507d0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x507d0c) {
            ctx->pc = 0x507D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507D0Cu;
            // 0x507d10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507D68u;
            goto label_507d68;
        }
    }
    ctx->pc = 0x507D14u;
label_507d14:
    // 0x507d14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x507d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_507d18:
    // 0x507d18: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x507d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_507d1c:
    // 0x507d1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x507d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_507d20:
    // 0x507d20: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x507d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_507d24:
    // 0x507d24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_507d28:
    if (ctx->pc == 0x507D28u) {
        ctx->pc = 0x507D28u;
            // 0x507d28: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x507D2Cu;
        goto label_507d2c;
    }
    ctx->pc = 0x507D24u;
    {
        const bool branch_taken_0x507d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x507d24) {
            ctx->pc = 0x507D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507D24u;
            // 0x507d28: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507D40u;
            goto label_507d40;
        }
    }
    ctx->pc = 0x507D2Cu;
label_507d2c:
    // 0x507d2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x507d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_507d30:
    // 0x507d30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x507d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_507d34:
    // 0x507d34: 0x320f809  jalr        $t9
label_507d38:
    if (ctx->pc == 0x507D38u) {
        ctx->pc = 0x507D38u;
            // 0x507d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x507D3Cu;
        goto label_507d3c;
    }
    ctx->pc = 0x507D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x507D3Cu);
        ctx->pc = 0x507D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507D34u;
            // 0x507d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x507D3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x507D3Cu; }
            if (ctx->pc != 0x507D3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x507D3Cu;
label_507d3c:
    // 0x507d3c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x507d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_507d40:
    // 0x507d40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_507d44:
    if (ctx->pc == 0x507D44u) {
        ctx->pc = 0x507D44u;
            // 0x507d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507D48u;
        goto label_507d48;
    }
    ctx->pc = 0x507D40u;
    {
        const bool branch_taken_0x507d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x507d40) {
            ctx->pc = 0x507D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507D40u;
            // 0x507d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507D5Cu;
            goto label_507d5c;
        }
    }
    ctx->pc = 0x507D48u;
label_507d48:
    // 0x507d48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x507d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_507d4c:
    // 0x507d4c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x507d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_507d50:
    // 0x507d50: 0x320f809  jalr        $t9
label_507d54:
    if (ctx->pc == 0x507D54u) {
        ctx->pc = 0x507D54u;
            // 0x507d54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x507D58u;
        goto label_507d58;
    }
    ctx->pc = 0x507D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x507D58u);
        ctx->pc = 0x507D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507D50u;
            // 0x507d54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x507D58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x507D58u; }
            if (ctx->pc != 0x507D58u) { return; }
        }
        }
    }
    ctx->pc = 0x507D58u;
label_507d58:
    // 0x507d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x507d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_507d5c:
    // 0x507d5c: 0xc075bf8  jal         func_1D6FE0
label_507d60:
    if (ctx->pc == 0x507D60u) {
        ctx->pc = 0x507D60u;
            // 0x507d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507D64u;
        goto label_507d64;
    }
    ctx->pc = 0x507D5Cu;
    SET_GPR_U32(ctx, 31, 0x507D64u);
    ctx->pc = 0x507D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507D5Cu;
            // 0x507d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507D64u; }
        if (ctx->pc != 0x507D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507D64u; }
        if (ctx->pc != 0x507D64u) { return; }
    }
    ctx->pc = 0x507D64u;
label_507d64:
    // 0x507d64: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x507d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_507d68:
    // 0x507d68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x507d68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_507d6c:
    // 0x507d6c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_507d70:
    if (ctx->pc == 0x507D70u) {
        ctx->pc = 0x507D70u;
            // 0x507d70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507D74u;
        goto label_507d74;
    }
    ctx->pc = 0x507D6Cu;
    {
        const bool branch_taken_0x507d6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x507d6c) {
            ctx->pc = 0x507D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507D6Cu;
            // 0x507d70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507D80u;
            goto label_507d80;
        }
    }
    ctx->pc = 0x507D74u;
label_507d74:
    // 0x507d74: 0xc0400a8  jal         func_1002A0
label_507d78:
    if (ctx->pc == 0x507D78u) {
        ctx->pc = 0x507D78u;
            // 0x507d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x507D7Cu;
        goto label_507d7c;
    }
    ctx->pc = 0x507D74u;
    SET_GPR_U32(ctx, 31, 0x507D7Cu);
    ctx->pc = 0x507D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x507D74u;
            // 0x507d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507D7Cu; }
        if (ctx->pc != 0x507D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507D7Cu; }
        if (ctx->pc != 0x507D7Cu) { return; }
    }
    ctx->pc = 0x507D7Cu;
label_507d7c:
    // 0x507d7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x507d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_507d80:
    // 0x507d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x507d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_507d84:
    // 0x507d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x507d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_507d88:
    // 0x507d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x507d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_507d8c:
    // 0x507d8c: 0x3e00008  jr          $ra
label_507d90:
    if (ctx->pc == 0x507D90u) {
        ctx->pc = 0x507D90u;
            // 0x507d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x507D94u;
        goto label_507d94;
    }
    ctx->pc = 0x507D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507D8Cu;
            // 0x507d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x507D94u;
label_507d94:
    // 0x507d94: 0x0  nop
    ctx->pc = 0x507d94u;
    // NOP
label_507d98:
    // 0x507d98: 0x0  nop
    ctx->pc = 0x507d98u;
    // NOP
label_507d9c:
    // 0x507d9c: 0x0  nop
    ctx->pc = 0x507d9cu;
    // NOP
}
