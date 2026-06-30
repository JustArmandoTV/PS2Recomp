#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384AC0
// Address: 0x384ac0 - 0x384db0
void sub_00384AC0_0x384ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384AC0_0x384ac0");
#endif

    switch (ctx->pc) {
        case 0x384ac0u: goto label_384ac0;
        case 0x384ac4u: goto label_384ac4;
        case 0x384ac8u: goto label_384ac8;
        case 0x384accu: goto label_384acc;
        case 0x384ad0u: goto label_384ad0;
        case 0x384ad4u: goto label_384ad4;
        case 0x384ad8u: goto label_384ad8;
        case 0x384adcu: goto label_384adc;
        case 0x384ae0u: goto label_384ae0;
        case 0x384ae4u: goto label_384ae4;
        case 0x384ae8u: goto label_384ae8;
        case 0x384aecu: goto label_384aec;
        case 0x384af0u: goto label_384af0;
        case 0x384af4u: goto label_384af4;
        case 0x384af8u: goto label_384af8;
        case 0x384afcu: goto label_384afc;
        case 0x384b00u: goto label_384b00;
        case 0x384b04u: goto label_384b04;
        case 0x384b08u: goto label_384b08;
        case 0x384b0cu: goto label_384b0c;
        case 0x384b10u: goto label_384b10;
        case 0x384b14u: goto label_384b14;
        case 0x384b18u: goto label_384b18;
        case 0x384b1cu: goto label_384b1c;
        case 0x384b20u: goto label_384b20;
        case 0x384b24u: goto label_384b24;
        case 0x384b28u: goto label_384b28;
        case 0x384b2cu: goto label_384b2c;
        case 0x384b30u: goto label_384b30;
        case 0x384b34u: goto label_384b34;
        case 0x384b38u: goto label_384b38;
        case 0x384b3cu: goto label_384b3c;
        case 0x384b40u: goto label_384b40;
        case 0x384b44u: goto label_384b44;
        case 0x384b48u: goto label_384b48;
        case 0x384b4cu: goto label_384b4c;
        case 0x384b50u: goto label_384b50;
        case 0x384b54u: goto label_384b54;
        case 0x384b58u: goto label_384b58;
        case 0x384b5cu: goto label_384b5c;
        case 0x384b60u: goto label_384b60;
        case 0x384b64u: goto label_384b64;
        case 0x384b68u: goto label_384b68;
        case 0x384b6cu: goto label_384b6c;
        case 0x384b70u: goto label_384b70;
        case 0x384b74u: goto label_384b74;
        case 0x384b78u: goto label_384b78;
        case 0x384b7cu: goto label_384b7c;
        case 0x384b80u: goto label_384b80;
        case 0x384b84u: goto label_384b84;
        case 0x384b88u: goto label_384b88;
        case 0x384b8cu: goto label_384b8c;
        case 0x384b90u: goto label_384b90;
        case 0x384b94u: goto label_384b94;
        case 0x384b98u: goto label_384b98;
        case 0x384b9cu: goto label_384b9c;
        case 0x384ba0u: goto label_384ba0;
        case 0x384ba4u: goto label_384ba4;
        case 0x384ba8u: goto label_384ba8;
        case 0x384bacu: goto label_384bac;
        case 0x384bb0u: goto label_384bb0;
        case 0x384bb4u: goto label_384bb4;
        case 0x384bb8u: goto label_384bb8;
        case 0x384bbcu: goto label_384bbc;
        case 0x384bc0u: goto label_384bc0;
        case 0x384bc4u: goto label_384bc4;
        case 0x384bc8u: goto label_384bc8;
        case 0x384bccu: goto label_384bcc;
        case 0x384bd0u: goto label_384bd0;
        case 0x384bd4u: goto label_384bd4;
        case 0x384bd8u: goto label_384bd8;
        case 0x384bdcu: goto label_384bdc;
        case 0x384be0u: goto label_384be0;
        case 0x384be4u: goto label_384be4;
        case 0x384be8u: goto label_384be8;
        case 0x384becu: goto label_384bec;
        case 0x384bf0u: goto label_384bf0;
        case 0x384bf4u: goto label_384bf4;
        case 0x384bf8u: goto label_384bf8;
        case 0x384bfcu: goto label_384bfc;
        case 0x384c00u: goto label_384c00;
        case 0x384c04u: goto label_384c04;
        case 0x384c08u: goto label_384c08;
        case 0x384c0cu: goto label_384c0c;
        case 0x384c10u: goto label_384c10;
        case 0x384c14u: goto label_384c14;
        case 0x384c18u: goto label_384c18;
        case 0x384c1cu: goto label_384c1c;
        case 0x384c20u: goto label_384c20;
        case 0x384c24u: goto label_384c24;
        case 0x384c28u: goto label_384c28;
        case 0x384c2cu: goto label_384c2c;
        case 0x384c30u: goto label_384c30;
        case 0x384c34u: goto label_384c34;
        case 0x384c38u: goto label_384c38;
        case 0x384c3cu: goto label_384c3c;
        case 0x384c40u: goto label_384c40;
        case 0x384c44u: goto label_384c44;
        case 0x384c48u: goto label_384c48;
        case 0x384c4cu: goto label_384c4c;
        case 0x384c50u: goto label_384c50;
        case 0x384c54u: goto label_384c54;
        case 0x384c58u: goto label_384c58;
        case 0x384c5cu: goto label_384c5c;
        case 0x384c60u: goto label_384c60;
        case 0x384c64u: goto label_384c64;
        case 0x384c68u: goto label_384c68;
        case 0x384c6cu: goto label_384c6c;
        case 0x384c70u: goto label_384c70;
        case 0x384c74u: goto label_384c74;
        case 0x384c78u: goto label_384c78;
        case 0x384c7cu: goto label_384c7c;
        case 0x384c80u: goto label_384c80;
        case 0x384c84u: goto label_384c84;
        case 0x384c88u: goto label_384c88;
        case 0x384c8cu: goto label_384c8c;
        case 0x384c90u: goto label_384c90;
        case 0x384c94u: goto label_384c94;
        case 0x384c98u: goto label_384c98;
        case 0x384c9cu: goto label_384c9c;
        case 0x384ca0u: goto label_384ca0;
        case 0x384ca4u: goto label_384ca4;
        case 0x384ca8u: goto label_384ca8;
        case 0x384cacu: goto label_384cac;
        case 0x384cb0u: goto label_384cb0;
        case 0x384cb4u: goto label_384cb4;
        case 0x384cb8u: goto label_384cb8;
        case 0x384cbcu: goto label_384cbc;
        case 0x384cc0u: goto label_384cc0;
        case 0x384cc4u: goto label_384cc4;
        case 0x384cc8u: goto label_384cc8;
        case 0x384cccu: goto label_384ccc;
        case 0x384cd0u: goto label_384cd0;
        case 0x384cd4u: goto label_384cd4;
        case 0x384cd8u: goto label_384cd8;
        case 0x384cdcu: goto label_384cdc;
        case 0x384ce0u: goto label_384ce0;
        case 0x384ce4u: goto label_384ce4;
        case 0x384ce8u: goto label_384ce8;
        case 0x384cecu: goto label_384cec;
        case 0x384cf0u: goto label_384cf0;
        case 0x384cf4u: goto label_384cf4;
        case 0x384cf8u: goto label_384cf8;
        case 0x384cfcu: goto label_384cfc;
        case 0x384d00u: goto label_384d00;
        case 0x384d04u: goto label_384d04;
        case 0x384d08u: goto label_384d08;
        case 0x384d0cu: goto label_384d0c;
        case 0x384d10u: goto label_384d10;
        case 0x384d14u: goto label_384d14;
        case 0x384d18u: goto label_384d18;
        case 0x384d1cu: goto label_384d1c;
        case 0x384d20u: goto label_384d20;
        case 0x384d24u: goto label_384d24;
        case 0x384d28u: goto label_384d28;
        case 0x384d2cu: goto label_384d2c;
        case 0x384d30u: goto label_384d30;
        case 0x384d34u: goto label_384d34;
        case 0x384d38u: goto label_384d38;
        case 0x384d3cu: goto label_384d3c;
        case 0x384d40u: goto label_384d40;
        case 0x384d44u: goto label_384d44;
        case 0x384d48u: goto label_384d48;
        case 0x384d4cu: goto label_384d4c;
        case 0x384d50u: goto label_384d50;
        case 0x384d54u: goto label_384d54;
        case 0x384d58u: goto label_384d58;
        case 0x384d5cu: goto label_384d5c;
        case 0x384d60u: goto label_384d60;
        case 0x384d64u: goto label_384d64;
        case 0x384d68u: goto label_384d68;
        case 0x384d6cu: goto label_384d6c;
        case 0x384d70u: goto label_384d70;
        case 0x384d74u: goto label_384d74;
        case 0x384d78u: goto label_384d78;
        case 0x384d7cu: goto label_384d7c;
        case 0x384d80u: goto label_384d80;
        case 0x384d84u: goto label_384d84;
        case 0x384d88u: goto label_384d88;
        case 0x384d8cu: goto label_384d8c;
        case 0x384d90u: goto label_384d90;
        case 0x384d94u: goto label_384d94;
        case 0x384d98u: goto label_384d98;
        case 0x384d9cu: goto label_384d9c;
        case 0x384da0u: goto label_384da0;
        case 0x384da4u: goto label_384da4;
        case 0x384da8u: goto label_384da8;
        case 0x384dacu: goto label_384dac;
        default: break;
    }

    ctx->pc = 0x384ac0u;

label_384ac0:
    // 0x384ac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x384ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_384ac4:
    // 0x384ac4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x384ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_384ac8:
    // 0x384ac8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x384ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_384acc:
    // 0x384acc: 0x34468703  ori         $a2, $v0, 0x8703
    ctx->pc = 0x384accu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34563);
label_384ad0:
    // 0x384ad0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x384ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_384ad4:
    // 0x384ad4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x384ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_384ad8:
    // 0x384ad8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x384ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_384adc:
    // 0x384adc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x384adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_384ae0:
    // 0x384ae0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_384ae4:
    // 0x384ae4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x384ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384ae8:
    // 0x384ae8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x384ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_384aec:
    // 0x384aec: 0xc0aeaf4  jal         func_2BABD0
label_384af0:
    if (ctx->pc == 0x384AF0u) {
        ctx->pc = 0x384AF0u;
            // 0x384af0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x384AF4u;
        goto label_384af4;
    }
    ctx->pc = 0x384AECu;
    SET_GPR_U32(ctx, 31, 0x384AF4u);
    ctx->pc = 0x384AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384AECu;
            // 0x384af0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384AF4u; }
        if (ctx->pc != 0x384AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384AF4u; }
        if (ctx->pc != 0x384AF4u) { return; }
    }
    ctx->pc = 0x384AF4u;
label_384af4:
    // 0x384af4: 0xc0e13e0  jal         func_384F80
label_384af8:
    if (ctx->pc == 0x384AF8u) {
        ctx->pc = 0x384AF8u;
            // 0x384af8: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x384AFCu;
        goto label_384afc;
    }
    ctx->pc = 0x384AF4u;
    SET_GPR_U32(ctx, 31, 0x384AFCu);
    ctx->pc = 0x384AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384AF4u;
            // 0x384af8: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384F80u;
    if (runtime->hasFunction(0x384F80u)) {
        auto targetFn = runtime->lookupFunction(0x384F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384AFCu; }
        if (ctx->pc != 0x384AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384F80_0x384f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384AFCu; }
        if (ctx->pc != 0x384AFCu) { return; }
    }
    ctx->pc = 0x384AFCu;
label_384afc:
    // 0x384afc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x384afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_384b00:
    // 0x384b00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x384b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_384b04:
    // 0x384b04: 0x246378f0  addiu       $v1, $v1, 0x78F0
    ctx->pc = 0x384b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30960));
label_384b08:
    // 0x384b08: 0x24427928  addiu       $v0, $v0, 0x7928
    ctx->pc = 0x384b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31016));
label_384b0c:
    // 0x384b0c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x384b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_384b10:
    // 0x384b10: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x384b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_384b14:
    // 0x384b14: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x384b14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_384b18:
    // 0x384b18: 0xc0e13d8  jal         func_384F60
label_384b1c:
    if (ctx->pc == 0x384B1Cu) {
        ctx->pc = 0x384B1Cu;
            // 0x384b1c: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x384B20u;
        goto label_384b20;
    }
    ctx->pc = 0x384B18u;
    SET_GPR_U32(ctx, 31, 0x384B20u);
    ctx->pc = 0x384B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384B18u;
            // 0x384b1c: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384F60u;
    if (runtime->hasFunction(0x384F60u)) {
        auto targetFn = runtime->lookupFunction(0x384F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B20u; }
        if (ctx->pc != 0x384B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384F60_0x384f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B20u; }
        if (ctx->pc != 0x384B20u) { return; }
    }
    ctx->pc = 0x384B20u;
label_384b20:
    // 0x384b20: 0xc0e13d8  jal         func_384F60
label_384b24:
    if (ctx->pc == 0x384B24u) {
        ctx->pc = 0x384B24u;
            // 0x384b24: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->pc = 0x384B28u;
        goto label_384b28;
    }
    ctx->pc = 0x384B20u;
    SET_GPR_U32(ctx, 31, 0x384B28u);
    ctx->pc = 0x384B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384B20u;
            // 0x384b24: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384F60u;
    if (runtime->hasFunction(0x384F60u)) {
        auto targetFn = runtime->lookupFunction(0x384F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B28u; }
        if (ctx->pc != 0x384B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384F60_0x384f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B28u; }
        if (ctx->pc != 0x384B28u) { return; }
    }
    ctx->pc = 0x384B28u;
label_384b28:
    // 0x384b28: 0xc0a8d10  jal         func_2A3440
label_384b2c:
    if (ctx->pc == 0x384B2Cu) {
        ctx->pc = 0x384B2Cu;
            // 0x384b2c: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x384B30u;
        goto label_384b30;
    }
    ctx->pc = 0x384B28u;
    SET_GPR_U32(ctx, 31, 0x384B30u);
    ctx->pc = 0x384B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384B28u;
            // 0x384b2c: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3440u;
    if (runtime->hasFunction(0x2A3440u)) {
        auto targetFn = runtime->lookupFunction(0x2A3440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B30u; }
        if (ctx->pc != 0x384B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3440_0x2a3440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B30u; }
        if (ctx->pc != 0x384B30u) { return; }
    }
    ctx->pc = 0x384B30u;
label_384b30:
    // 0x384b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_384b34:
    // 0x384b34: 0xc0aeac0  jal         func_2BAB00
label_384b38:
    if (ctx->pc == 0x384B38u) {
        ctx->pc = 0x384B38u;
            // 0x384b38: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x384B3Cu;
        goto label_384b3c;
    }
    ctx->pc = 0x384B34u;
    SET_GPR_U32(ctx, 31, 0x384B3Cu);
    ctx->pc = 0x384B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384B34u;
            // 0x384b38: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B3Cu; }
        if (ctx->pc != 0x384B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B3Cu; }
        if (ctx->pc != 0x384B3Cu) { return; }
    }
    ctx->pc = 0x384B3Cu;
label_384b3c:
    // 0x384b3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x384b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384b40:
    // 0x384b40: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_384b44:
    if (ctx->pc == 0x384B44u) {
        ctx->pc = 0x384B48u;
        goto label_384b48;
    }
    ctx->pc = 0x384B40u;
    {
        const bool branch_taken_0x384b40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x384b40) {
            ctx->pc = 0x384BC0u;
            goto label_384bc0;
        }
    }
    ctx->pc = 0x384B48u;
label_384b48:
    // 0x384b48: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x384b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_384b4c:
    // 0x384b4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x384b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_384b50:
    // 0x384b50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x384b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_384b54:
    // 0x384b54: 0xc040138  jal         func_1004E0
label_384b58:
    if (ctx->pc == 0x384B58u) {
        ctx->pc = 0x384B58u;
            // 0x384b58: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x384B5Cu;
        goto label_384b5c;
    }
    ctx->pc = 0x384B54u;
    SET_GPR_U32(ctx, 31, 0x384B5Cu);
    ctx->pc = 0x384B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384B54u;
            // 0x384b58: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B5Cu; }
        if (ctx->pc != 0x384B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B5Cu; }
        if (ctx->pc != 0x384B5Cu) { return; }
    }
    ctx->pc = 0x384B5Cu;
label_384b5c:
    // 0x384b5c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x384b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_384b60:
    // 0x384b60: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x384b60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_384b64:
    // 0x384b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x384b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384b68:
    // 0x384b68: 0x24a54de0  addiu       $a1, $a1, 0x4DE0
    ctx->pc = 0x384b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19936));
label_384b6c:
    // 0x384b6c: 0x24c63270  addiu       $a2, $a2, 0x3270
    ctx->pc = 0x384b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12912));
label_384b70:
    // 0x384b70: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x384b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_384b74:
    // 0x384b74: 0xc040840  jal         func_102100
label_384b78:
    if (ctx->pc == 0x384B78u) {
        ctx->pc = 0x384B78u;
            // 0x384b78: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384B7Cu;
        goto label_384b7c;
    }
    ctx->pc = 0x384B74u;
    SET_GPR_U32(ctx, 31, 0x384B7Cu);
    ctx->pc = 0x384B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384B74u;
            // 0x384b78: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B7Cu; }
        if (ctx->pc != 0x384B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B7Cu; }
        if (ctx->pc != 0x384B7Cu) { return; }
    }
    ctx->pc = 0x384B7Cu;
label_384b7c:
    // 0x384b7c: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x384b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_384b80:
    // 0x384b80: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x384b80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384b84:
    // 0x384b84: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x384b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_384b88:
    // 0x384b88: 0xc0e1374  jal         func_384DD0
label_384b8c:
    if (ctx->pc == 0x384B8Cu) {
        ctx->pc = 0x384B8Cu;
            // 0x384b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384B90u;
        goto label_384b90;
    }
    ctx->pc = 0x384B88u;
    SET_GPR_U32(ctx, 31, 0x384B90u);
    ctx->pc = 0x384B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384B88u;
            // 0x384b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384DD0u;
    if (runtime->hasFunction(0x384DD0u)) {
        auto targetFn = runtime->lookupFunction(0x384DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B90u; }
        if (ctx->pc != 0x384B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384DD0_0x384dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B90u; }
        if (ctx->pc != 0x384B90u) { return; }
    }
    ctx->pc = 0x384B90u;
label_384b90:
    // 0x384b90: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x384b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_384b94:
    // 0x384b94: 0xc0e1374  jal         func_384DD0
label_384b98:
    if (ctx->pc == 0x384B98u) {
        ctx->pc = 0x384B98u;
            // 0x384b98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384B9Cu;
        goto label_384b9c;
    }
    ctx->pc = 0x384B94u;
    SET_GPR_U32(ctx, 31, 0x384B9Cu);
    ctx->pc = 0x384B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384B94u;
            // 0x384b98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384DD0u;
    if (runtime->hasFunction(0x384DD0u)) {
        auto targetFn = runtime->lookupFunction(0x384DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B9Cu; }
        if (ctx->pc != 0x384B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384DD0_0x384dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384B9Cu; }
        if (ctx->pc != 0x384B9Cu) { return; }
    }
    ctx->pc = 0x384B9Cu;
label_384b9c:
    // 0x384b9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x384b9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384ba0:
    // 0x384ba0: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x384ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_384ba4:
    // 0x384ba4: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x384ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_384ba8:
    // 0x384ba8: 0xc0e136c  jal         func_384DB0
label_384bac:
    if (ctx->pc == 0x384BACu) {
        ctx->pc = 0x384BACu;
            // 0x384bac: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->pc = 0x384BB0u;
        goto label_384bb0;
    }
    ctx->pc = 0x384BA8u;
    SET_GPR_U32(ctx, 31, 0x384BB0u);
    ctx->pc = 0x384BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384BA8u;
            // 0x384bac: 0xafb4006c  sw          $s4, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384DB0u;
    if (runtime->hasFunction(0x384DB0u)) {
        auto targetFn = runtime->lookupFunction(0x384DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384BB0u; }
        if (ctx->pc != 0x384BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384DB0_0x384db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384BB0u; }
        if (ctx->pc != 0x384BB0u) { return; }
    }
    ctx->pc = 0x384BB0u;
label_384bb0:
    // 0x384bb0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x384bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_384bb4:
    // 0x384bb4: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x384bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_384bb8:
    // 0x384bb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_384bbc:
    if (ctx->pc == 0x384BBCu) {
        ctx->pc = 0x384BBCu;
            // 0x384bbc: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->pc = 0x384BC0u;
        goto label_384bc0;
    }
    ctx->pc = 0x384BB8u;
    {
        const bool branch_taken_0x384bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384BB8u;
            // 0x384bbc: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384bb8) {
            ctx->pc = 0x384BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_384ba0;
        }
    }
    ctx->pc = 0x384BC0u;
label_384bc0:
    // 0x384bc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x384bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_384bc4:
    // 0x384bc4: 0x24427870  addiu       $v0, $v0, 0x7870
    ctx->pc = 0x384bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30832));
label_384bc8:
    // 0x384bc8: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x384bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_384bcc:
    // 0x384bcc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x384bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_384bd0:
    // 0x384bd0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x384bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_384bd4:
    // 0x384bd4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x384bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_384bd8:
    // 0x384bd8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x384bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_384bdc:
    // 0x384bdc: 0x244278a8  addiu       $v0, $v0, 0x78A8
    ctx->pc = 0x384bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30888));
label_384be0:
    // 0x384be0: 0x26500084  addiu       $s0, $s2, 0x84
    ctx->pc = 0x384be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
label_384be4:
    // 0x384be4: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x384be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_384be8:
    // 0x384be8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x384be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_384bec:
    // 0x384bec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x384becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_384bf0:
    // 0x384bf0: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x384bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_384bf4:
    // 0x384bf4: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x384bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_384bf8:
    // 0x384bf8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x384bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_384bfc:
    // 0x384bfc: 0xc040140  jal         func_100500
label_384c00:
    if (ctx->pc == 0x384C00u) {
        ctx->pc = 0x384C00u;
            // 0x384c00: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x384C04u;
        goto label_384c04;
    }
    ctx->pc = 0x384BFCu;
    SET_GPR_U32(ctx, 31, 0x384C04u);
    ctx->pc = 0x384C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384BFCu;
            // 0x384c00: 0x23980  sll         $a3, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384C04u; }
        if (ctx->pc != 0x384C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384C04u; }
        if (ctx->pc != 0x384C04u) { return; }
    }
    ctx->pc = 0x384C04u;
label_384c04:
    // 0x384c04: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_384c08:
    if (ctx->pc == 0x384C08u) {
        ctx->pc = 0x384C08u;
            // 0x384c08: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x384C0Cu;
        goto label_384c0c;
    }
    ctx->pc = 0x384C04u;
    {
        const bool branch_taken_0x384c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384c04) {
            ctx->pc = 0x384C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384C04u;
            // 0x384c08: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384C24u;
            goto label_384c24;
        }
    }
    ctx->pc = 0x384C0Cu;
label_384c0c:
    // 0x384c0c: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x384c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_384c10:
    // 0x384c10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x384c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384c14:
    // 0x384c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x384c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384c18:
    // 0x384c18: 0xc0b4554  jal         func_2D1550
label_384c1c:
    if (ctx->pc == 0x384C1Cu) {
        ctx->pc = 0x384C1Cu;
            // 0x384c1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x384C20u;
        goto label_384c20;
    }
    ctx->pc = 0x384C18u;
    SET_GPR_U32(ctx, 31, 0x384C20u);
    ctx->pc = 0x384C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384C18u;
            // 0x384c1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384C20u; }
        if (ctx->pc != 0x384C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384C20u; }
        if (ctx->pc != 0x384C20u) { return; }
    }
    ctx->pc = 0x384C20u;
label_384c20:
    // 0x384c20: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x384c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_384c24:
    // 0x384c24: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x384c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_384c28:
    // 0x384c28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x384c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_384c2c:
    // 0x384c2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x384c2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_384c30:
    // 0x384c30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x384c30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_384c34:
    // 0x384c34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x384c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_384c38:
    // 0x384c38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x384c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384c3c:
    // 0x384c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x384c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_384c40:
    // 0x384c40: 0x3e00008  jr          $ra
label_384c44:
    if (ctx->pc == 0x384C44u) {
        ctx->pc = 0x384C44u;
            // 0x384c44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x384C48u;
        goto label_384c48;
    }
    ctx->pc = 0x384C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384C40u;
            // 0x384c44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384C48u;
label_384c48:
    // 0x384c48: 0x0  nop
    ctx->pc = 0x384c48u;
    // NOP
label_384c4c:
    // 0x384c4c: 0x0  nop
    ctx->pc = 0x384c4cu;
    // NOP
label_384c50:
    // 0x384c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_384c54:
    // 0x384c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x384c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_384c58:
    // 0x384c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x384c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_384c5c:
    // 0x384c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x384c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_384c60:
    // 0x384c60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x384c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384c64:
    // 0x384c64: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_384c68:
    if (ctx->pc == 0x384C68u) {
        ctx->pc = 0x384C68u;
            // 0x384c68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384C6Cu;
        goto label_384c6c;
    }
    ctx->pc = 0x384C64u;
    {
        const bool branch_taken_0x384c64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x384C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384C64u;
            // 0x384c68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c64) {
            ctx->pc = 0x384D98u;
            goto label_384d98;
        }
    }
    ctx->pc = 0x384C6Cu;
label_384c6c:
    // 0x384c6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x384c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_384c70:
    // 0x384c70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x384c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_384c74:
    // 0x384c74: 0x246378f0  addiu       $v1, $v1, 0x78F0
    ctx->pc = 0x384c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30960));
label_384c78:
    // 0x384c78: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x384c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_384c7c:
    // 0x384c7c: 0x24427928  addiu       $v0, $v0, 0x7928
    ctx->pc = 0x384c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31016));
label_384c80:
    // 0x384c80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x384c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_384c84:
    // 0x384c84: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x384c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_384c88:
    // 0x384c88: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x384c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_384c8c:
    // 0x384c8c: 0xc0407c0  jal         func_101F00
label_384c90:
    if (ctx->pc == 0x384C90u) {
        ctx->pc = 0x384C90u;
            // 0x384c90: 0x24a53270  addiu       $a1, $a1, 0x3270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12912));
        ctx->pc = 0x384C94u;
        goto label_384c94;
    }
    ctx->pc = 0x384C8Cu;
    SET_GPR_U32(ctx, 31, 0x384C94u);
    ctx->pc = 0x384C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384C8Cu;
            // 0x384c90: 0x24a53270  addiu       $a1, $a1, 0x3270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384C94u; }
        if (ctx->pc != 0x384C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384C94u; }
        if (ctx->pc != 0x384C94u) { return; }
    }
    ctx->pc = 0x384C94u;
label_384c94:
    // 0x384c94: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x384c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_384c98:
    // 0x384c98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_384c9c:
    if (ctx->pc == 0x384C9Cu) {
        ctx->pc = 0x384C9Cu;
            // 0x384c9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x384CA0u;
        goto label_384ca0;
    }
    ctx->pc = 0x384C98u;
    {
        const bool branch_taken_0x384c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384c98) {
            ctx->pc = 0x384C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384C98u;
            // 0x384c9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384CACu;
            goto label_384cac;
        }
    }
    ctx->pc = 0x384CA0u;
label_384ca0:
    // 0x384ca0: 0xc07507c  jal         func_1D41F0
label_384ca4:
    if (ctx->pc == 0x384CA4u) {
        ctx->pc = 0x384CA4u;
            // 0x384ca4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x384CA8u;
        goto label_384ca8;
    }
    ctx->pc = 0x384CA0u;
    SET_GPR_U32(ctx, 31, 0x384CA8u);
    ctx->pc = 0x384CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384CA0u;
            // 0x384ca4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384CA8u; }
        if (ctx->pc != 0x384CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384CA8u; }
        if (ctx->pc != 0x384CA8u) { return; }
    }
    ctx->pc = 0x384CA8u;
label_384ca8:
    // 0x384ca8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x384ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_384cac:
    // 0x384cac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_384cb0:
    if (ctx->pc == 0x384CB0u) {
        ctx->pc = 0x384CB0u;
            // 0x384cb0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x384CB4u;
        goto label_384cb4;
    }
    ctx->pc = 0x384CACu;
    {
        const bool branch_taken_0x384cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384cac) {
            ctx->pc = 0x384CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384CACu;
            // 0x384cb0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384CDCu;
            goto label_384cdc;
        }
    }
    ctx->pc = 0x384CB4u;
label_384cb4:
    // 0x384cb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_384cb8:
    if (ctx->pc == 0x384CB8u) {
        ctx->pc = 0x384CBCu;
        goto label_384cbc;
    }
    ctx->pc = 0x384CB4u;
    {
        const bool branch_taken_0x384cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384cb4) {
            ctx->pc = 0x384CD8u;
            goto label_384cd8;
        }
    }
    ctx->pc = 0x384CBCu;
label_384cbc:
    // 0x384cbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_384cc0:
    if (ctx->pc == 0x384CC0u) {
        ctx->pc = 0x384CC4u;
        goto label_384cc4;
    }
    ctx->pc = 0x384CBCu;
    {
        const bool branch_taken_0x384cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384cbc) {
            ctx->pc = 0x384CD8u;
            goto label_384cd8;
        }
    }
    ctx->pc = 0x384CC4u;
label_384cc4:
    // 0x384cc4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x384cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_384cc8:
    // 0x384cc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_384ccc:
    if (ctx->pc == 0x384CCCu) {
        ctx->pc = 0x384CD0u;
        goto label_384cd0;
    }
    ctx->pc = 0x384CC8u;
    {
        const bool branch_taken_0x384cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x384cc8) {
            ctx->pc = 0x384CD8u;
            goto label_384cd8;
        }
    }
    ctx->pc = 0x384CD0u;
label_384cd0:
    // 0x384cd0: 0xc0400a8  jal         func_1002A0
label_384cd4:
    if (ctx->pc == 0x384CD4u) {
        ctx->pc = 0x384CD8u;
        goto label_384cd8;
    }
    ctx->pc = 0x384CD0u;
    SET_GPR_U32(ctx, 31, 0x384CD8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384CD8u; }
        if (ctx->pc != 0x384CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384CD8u; }
        if (ctx->pc != 0x384CD8u) { return; }
    }
    ctx->pc = 0x384CD8u;
label_384cd8:
    // 0x384cd8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x384cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_384cdc:
    // 0x384cdc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_384ce0:
    if (ctx->pc == 0x384CE0u) {
        ctx->pc = 0x384CE0u;
            // 0x384ce0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x384CE4u;
        goto label_384ce4;
    }
    ctx->pc = 0x384CDCu;
    {
        const bool branch_taken_0x384cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384cdc) {
            ctx->pc = 0x384CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384CDCu;
            // 0x384ce0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384D0Cu;
            goto label_384d0c;
        }
    }
    ctx->pc = 0x384CE4u;
label_384ce4:
    // 0x384ce4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_384ce8:
    if (ctx->pc == 0x384CE8u) {
        ctx->pc = 0x384CECu;
        goto label_384cec;
    }
    ctx->pc = 0x384CE4u;
    {
        const bool branch_taken_0x384ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384ce4) {
            ctx->pc = 0x384D08u;
            goto label_384d08;
        }
    }
    ctx->pc = 0x384CECu;
label_384cec:
    // 0x384cec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_384cf0:
    if (ctx->pc == 0x384CF0u) {
        ctx->pc = 0x384CF4u;
        goto label_384cf4;
    }
    ctx->pc = 0x384CECu;
    {
        const bool branch_taken_0x384cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384cec) {
            ctx->pc = 0x384D08u;
            goto label_384d08;
        }
    }
    ctx->pc = 0x384CF4u;
label_384cf4:
    // 0x384cf4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x384cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_384cf8:
    // 0x384cf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_384cfc:
    if (ctx->pc == 0x384CFCu) {
        ctx->pc = 0x384D00u;
        goto label_384d00;
    }
    ctx->pc = 0x384CF8u;
    {
        const bool branch_taken_0x384cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x384cf8) {
            ctx->pc = 0x384D08u;
            goto label_384d08;
        }
    }
    ctx->pc = 0x384D00u;
label_384d00:
    // 0x384d00: 0xc0400a8  jal         func_1002A0
label_384d04:
    if (ctx->pc == 0x384D04u) {
        ctx->pc = 0x384D08u;
        goto label_384d08;
    }
    ctx->pc = 0x384D00u;
    SET_GPR_U32(ctx, 31, 0x384D08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384D08u; }
        if (ctx->pc != 0x384D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384D08u; }
        if (ctx->pc != 0x384D08u) { return; }
    }
    ctx->pc = 0x384D08u;
label_384d08:
    // 0x384d08: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x384d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_384d0c:
    // 0x384d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_384d10:
    if (ctx->pc == 0x384D10u) {
        ctx->pc = 0x384D14u;
        goto label_384d14;
    }
    ctx->pc = 0x384D0Cu;
    {
        const bool branch_taken_0x384d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384d0c) {
            ctx->pc = 0x384D28u;
            goto label_384d28;
        }
    }
    ctx->pc = 0x384D14u;
label_384d14:
    // 0x384d14: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x384d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_384d18:
    // 0x384d18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x384d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_384d1c:
    // 0x384d1c: 0x246378e0  addiu       $v1, $v1, 0x78E0
    ctx->pc = 0x384d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30944));
label_384d20:
    // 0x384d20: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x384d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_384d24:
    // 0x384d24: 0xac406110  sw          $zero, 0x6110($v0)
    ctx->pc = 0x384d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24848), GPR_U32(ctx, 0));
label_384d28:
    // 0x384d28: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_384d2c:
    if (ctx->pc == 0x384D2Cu) {
        ctx->pc = 0x384D2Cu;
            // 0x384d2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x384D30u;
        goto label_384d30;
    }
    ctx->pc = 0x384D28u;
    {
        const bool branch_taken_0x384d28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x384d28) {
            ctx->pc = 0x384D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384D28u;
            // 0x384d2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384D84u;
            goto label_384d84;
        }
    }
    ctx->pc = 0x384D30u;
label_384d30:
    // 0x384d30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x384d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_384d34:
    // 0x384d34: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x384d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_384d38:
    // 0x384d38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x384d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_384d3c:
    // 0x384d3c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x384d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_384d40:
    // 0x384d40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_384d44:
    if (ctx->pc == 0x384D44u) {
        ctx->pc = 0x384D44u;
            // 0x384d44: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x384D48u;
        goto label_384d48;
    }
    ctx->pc = 0x384D40u;
    {
        const bool branch_taken_0x384d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x384d40) {
            ctx->pc = 0x384D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384D40u;
            // 0x384d44: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384D5Cu;
            goto label_384d5c;
        }
    }
    ctx->pc = 0x384D48u;
label_384d48:
    // 0x384d48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x384d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_384d4c:
    // 0x384d4c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x384d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_384d50:
    // 0x384d50: 0x320f809  jalr        $t9
label_384d54:
    if (ctx->pc == 0x384D54u) {
        ctx->pc = 0x384D54u;
            // 0x384d54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x384D58u;
        goto label_384d58;
    }
    ctx->pc = 0x384D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x384D58u);
        ctx->pc = 0x384D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384D50u;
            // 0x384d54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x384D58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x384D58u; }
            if (ctx->pc != 0x384D58u) { return; }
        }
        }
    }
    ctx->pc = 0x384D58u;
label_384d58:
    // 0x384d58: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x384d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_384d5c:
    // 0x384d5c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_384d60:
    if (ctx->pc == 0x384D60u) {
        ctx->pc = 0x384D60u;
            // 0x384d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384D64u;
        goto label_384d64;
    }
    ctx->pc = 0x384D5Cu;
    {
        const bool branch_taken_0x384d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x384d5c) {
            ctx->pc = 0x384D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384D5Cu;
            // 0x384d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384D78u;
            goto label_384d78;
        }
    }
    ctx->pc = 0x384D64u;
label_384d64:
    // 0x384d64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x384d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_384d68:
    // 0x384d68: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x384d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_384d6c:
    // 0x384d6c: 0x320f809  jalr        $t9
label_384d70:
    if (ctx->pc == 0x384D70u) {
        ctx->pc = 0x384D70u;
            // 0x384d70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x384D74u;
        goto label_384d74;
    }
    ctx->pc = 0x384D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x384D74u);
        ctx->pc = 0x384D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384D6Cu;
            // 0x384d70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x384D74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x384D74u; }
            if (ctx->pc != 0x384D74u) { return; }
        }
        }
    }
    ctx->pc = 0x384D74u;
label_384d74:
    // 0x384d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x384d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_384d78:
    // 0x384d78: 0xc075bf8  jal         func_1D6FE0
label_384d7c:
    if (ctx->pc == 0x384D7Cu) {
        ctx->pc = 0x384D7Cu;
            // 0x384d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384D80u;
        goto label_384d80;
    }
    ctx->pc = 0x384D78u;
    SET_GPR_U32(ctx, 31, 0x384D80u);
    ctx->pc = 0x384D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384D78u;
            // 0x384d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384D80u; }
        if (ctx->pc != 0x384D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384D80u; }
        if (ctx->pc != 0x384D80u) { return; }
    }
    ctx->pc = 0x384D80u;
label_384d80:
    // 0x384d80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x384d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_384d84:
    // 0x384d84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x384d84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_384d88:
    // 0x384d88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_384d8c:
    if (ctx->pc == 0x384D8Cu) {
        ctx->pc = 0x384D8Cu;
            // 0x384d8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384D90u;
        goto label_384d90;
    }
    ctx->pc = 0x384D88u;
    {
        const bool branch_taken_0x384d88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x384d88) {
            ctx->pc = 0x384D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x384D88u;
            // 0x384d8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x384D9Cu;
            goto label_384d9c;
        }
    }
    ctx->pc = 0x384D90u;
label_384d90:
    // 0x384d90: 0xc0400a8  jal         func_1002A0
label_384d94:
    if (ctx->pc == 0x384D94u) {
        ctx->pc = 0x384D94u;
            // 0x384d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x384D98u;
        goto label_384d98;
    }
    ctx->pc = 0x384D90u;
    SET_GPR_U32(ctx, 31, 0x384D98u);
    ctx->pc = 0x384D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x384D90u;
            // 0x384d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384D98u; }
        if (ctx->pc != 0x384D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x384D98u; }
        if (ctx->pc != 0x384D98u) { return; }
    }
    ctx->pc = 0x384D98u;
label_384d98:
    // 0x384d98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x384d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_384d9c:
    // 0x384d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_384da0:
    // 0x384da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x384da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384da4:
    // 0x384da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x384da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_384da8:
    // 0x384da8: 0x3e00008  jr          $ra
label_384dac:
    if (ctx->pc == 0x384DACu) {
        ctx->pc = 0x384DACu;
            // 0x384dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x384DB0u;
        goto label_fallthrough_0x384da8;
    }
    ctx->pc = 0x384DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384DA8u;
            // 0x384dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x384da8:
    ctx->pc = 0x384DB0u;
}
