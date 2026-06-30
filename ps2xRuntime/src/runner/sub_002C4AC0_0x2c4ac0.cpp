#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4AC0
// Address: 0x2c4ac0 - 0x2c4dc0
void sub_002C4AC0_0x2c4ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4AC0_0x2c4ac0");
#endif

    switch (ctx->pc) {
        case 0x2c4ac0u: goto label_2c4ac0;
        case 0x2c4ac4u: goto label_2c4ac4;
        case 0x2c4ac8u: goto label_2c4ac8;
        case 0x2c4accu: goto label_2c4acc;
        case 0x2c4ad0u: goto label_2c4ad0;
        case 0x2c4ad4u: goto label_2c4ad4;
        case 0x2c4ad8u: goto label_2c4ad8;
        case 0x2c4adcu: goto label_2c4adc;
        case 0x2c4ae0u: goto label_2c4ae0;
        case 0x2c4ae4u: goto label_2c4ae4;
        case 0x2c4ae8u: goto label_2c4ae8;
        case 0x2c4aecu: goto label_2c4aec;
        case 0x2c4af0u: goto label_2c4af0;
        case 0x2c4af4u: goto label_2c4af4;
        case 0x2c4af8u: goto label_2c4af8;
        case 0x2c4afcu: goto label_2c4afc;
        case 0x2c4b00u: goto label_2c4b00;
        case 0x2c4b04u: goto label_2c4b04;
        case 0x2c4b08u: goto label_2c4b08;
        case 0x2c4b0cu: goto label_2c4b0c;
        case 0x2c4b10u: goto label_2c4b10;
        case 0x2c4b14u: goto label_2c4b14;
        case 0x2c4b18u: goto label_2c4b18;
        case 0x2c4b1cu: goto label_2c4b1c;
        case 0x2c4b20u: goto label_2c4b20;
        case 0x2c4b24u: goto label_2c4b24;
        case 0x2c4b28u: goto label_2c4b28;
        case 0x2c4b2cu: goto label_2c4b2c;
        case 0x2c4b30u: goto label_2c4b30;
        case 0x2c4b34u: goto label_2c4b34;
        case 0x2c4b38u: goto label_2c4b38;
        case 0x2c4b3cu: goto label_2c4b3c;
        case 0x2c4b40u: goto label_2c4b40;
        case 0x2c4b44u: goto label_2c4b44;
        case 0x2c4b48u: goto label_2c4b48;
        case 0x2c4b4cu: goto label_2c4b4c;
        case 0x2c4b50u: goto label_2c4b50;
        case 0x2c4b54u: goto label_2c4b54;
        case 0x2c4b58u: goto label_2c4b58;
        case 0x2c4b5cu: goto label_2c4b5c;
        case 0x2c4b60u: goto label_2c4b60;
        case 0x2c4b64u: goto label_2c4b64;
        case 0x2c4b68u: goto label_2c4b68;
        case 0x2c4b6cu: goto label_2c4b6c;
        case 0x2c4b70u: goto label_2c4b70;
        case 0x2c4b74u: goto label_2c4b74;
        case 0x2c4b78u: goto label_2c4b78;
        case 0x2c4b7cu: goto label_2c4b7c;
        case 0x2c4b80u: goto label_2c4b80;
        case 0x2c4b84u: goto label_2c4b84;
        case 0x2c4b88u: goto label_2c4b88;
        case 0x2c4b8cu: goto label_2c4b8c;
        case 0x2c4b90u: goto label_2c4b90;
        case 0x2c4b94u: goto label_2c4b94;
        case 0x2c4b98u: goto label_2c4b98;
        case 0x2c4b9cu: goto label_2c4b9c;
        case 0x2c4ba0u: goto label_2c4ba0;
        case 0x2c4ba4u: goto label_2c4ba4;
        case 0x2c4ba8u: goto label_2c4ba8;
        case 0x2c4bacu: goto label_2c4bac;
        case 0x2c4bb0u: goto label_2c4bb0;
        case 0x2c4bb4u: goto label_2c4bb4;
        case 0x2c4bb8u: goto label_2c4bb8;
        case 0x2c4bbcu: goto label_2c4bbc;
        case 0x2c4bc0u: goto label_2c4bc0;
        case 0x2c4bc4u: goto label_2c4bc4;
        case 0x2c4bc8u: goto label_2c4bc8;
        case 0x2c4bccu: goto label_2c4bcc;
        case 0x2c4bd0u: goto label_2c4bd0;
        case 0x2c4bd4u: goto label_2c4bd4;
        case 0x2c4bd8u: goto label_2c4bd8;
        case 0x2c4bdcu: goto label_2c4bdc;
        case 0x2c4be0u: goto label_2c4be0;
        case 0x2c4be4u: goto label_2c4be4;
        case 0x2c4be8u: goto label_2c4be8;
        case 0x2c4becu: goto label_2c4bec;
        case 0x2c4bf0u: goto label_2c4bf0;
        case 0x2c4bf4u: goto label_2c4bf4;
        case 0x2c4bf8u: goto label_2c4bf8;
        case 0x2c4bfcu: goto label_2c4bfc;
        case 0x2c4c00u: goto label_2c4c00;
        case 0x2c4c04u: goto label_2c4c04;
        case 0x2c4c08u: goto label_2c4c08;
        case 0x2c4c0cu: goto label_2c4c0c;
        case 0x2c4c10u: goto label_2c4c10;
        case 0x2c4c14u: goto label_2c4c14;
        case 0x2c4c18u: goto label_2c4c18;
        case 0x2c4c1cu: goto label_2c4c1c;
        case 0x2c4c20u: goto label_2c4c20;
        case 0x2c4c24u: goto label_2c4c24;
        case 0x2c4c28u: goto label_2c4c28;
        case 0x2c4c2cu: goto label_2c4c2c;
        case 0x2c4c30u: goto label_2c4c30;
        case 0x2c4c34u: goto label_2c4c34;
        case 0x2c4c38u: goto label_2c4c38;
        case 0x2c4c3cu: goto label_2c4c3c;
        case 0x2c4c40u: goto label_2c4c40;
        case 0x2c4c44u: goto label_2c4c44;
        case 0x2c4c48u: goto label_2c4c48;
        case 0x2c4c4cu: goto label_2c4c4c;
        case 0x2c4c50u: goto label_2c4c50;
        case 0x2c4c54u: goto label_2c4c54;
        case 0x2c4c58u: goto label_2c4c58;
        case 0x2c4c5cu: goto label_2c4c5c;
        case 0x2c4c60u: goto label_2c4c60;
        case 0x2c4c64u: goto label_2c4c64;
        case 0x2c4c68u: goto label_2c4c68;
        case 0x2c4c6cu: goto label_2c4c6c;
        case 0x2c4c70u: goto label_2c4c70;
        case 0x2c4c74u: goto label_2c4c74;
        case 0x2c4c78u: goto label_2c4c78;
        case 0x2c4c7cu: goto label_2c4c7c;
        case 0x2c4c80u: goto label_2c4c80;
        case 0x2c4c84u: goto label_2c4c84;
        case 0x2c4c88u: goto label_2c4c88;
        case 0x2c4c8cu: goto label_2c4c8c;
        case 0x2c4c90u: goto label_2c4c90;
        case 0x2c4c94u: goto label_2c4c94;
        case 0x2c4c98u: goto label_2c4c98;
        case 0x2c4c9cu: goto label_2c4c9c;
        case 0x2c4ca0u: goto label_2c4ca0;
        case 0x2c4ca4u: goto label_2c4ca4;
        case 0x2c4ca8u: goto label_2c4ca8;
        case 0x2c4cacu: goto label_2c4cac;
        case 0x2c4cb0u: goto label_2c4cb0;
        case 0x2c4cb4u: goto label_2c4cb4;
        case 0x2c4cb8u: goto label_2c4cb8;
        case 0x2c4cbcu: goto label_2c4cbc;
        case 0x2c4cc0u: goto label_2c4cc0;
        case 0x2c4cc4u: goto label_2c4cc4;
        case 0x2c4cc8u: goto label_2c4cc8;
        case 0x2c4cccu: goto label_2c4ccc;
        case 0x2c4cd0u: goto label_2c4cd0;
        case 0x2c4cd4u: goto label_2c4cd4;
        case 0x2c4cd8u: goto label_2c4cd8;
        case 0x2c4cdcu: goto label_2c4cdc;
        case 0x2c4ce0u: goto label_2c4ce0;
        case 0x2c4ce4u: goto label_2c4ce4;
        case 0x2c4ce8u: goto label_2c4ce8;
        case 0x2c4cecu: goto label_2c4cec;
        case 0x2c4cf0u: goto label_2c4cf0;
        case 0x2c4cf4u: goto label_2c4cf4;
        case 0x2c4cf8u: goto label_2c4cf8;
        case 0x2c4cfcu: goto label_2c4cfc;
        case 0x2c4d00u: goto label_2c4d00;
        case 0x2c4d04u: goto label_2c4d04;
        case 0x2c4d08u: goto label_2c4d08;
        case 0x2c4d0cu: goto label_2c4d0c;
        case 0x2c4d10u: goto label_2c4d10;
        case 0x2c4d14u: goto label_2c4d14;
        case 0x2c4d18u: goto label_2c4d18;
        case 0x2c4d1cu: goto label_2c4d1c;
        case 0x2c4d20u: goto label_2c4d20;
        case 0x2c4d24u: goto label_2c4d24;
        case 0x2c4d28u: goto label_2c4d28;
        case 0x2c4d2cu: goto label_2c4d2c;
        case 0x2c4d30u: goto label_2c4d30;
        case 0x2c4d34u: goto label_2c4d34;
        case 0x2c4d38u: goto label_2c4d38;
        case 0x2c4d3cu: goto label_2c4d3c;
        case 0x2c4d40u: goto label_2c4d40;
        case 0x2c4d44u: goto label_2c4d44;
        case 0x2c4d48u: goto label_2c4d48;
        case 0x2c4d4cu: goto label_2c4d4c;
        case 0x2c4d50u: goto label_2c4d50;
        case 0x2c4d54u: goto label_2c4d54;
        case 0x2c4d58u: goto label_2c4d58;
        case 0x2c4d5cu: goto label_2c4d5c;
        case 0x2c4d60u: goto label_2c4d60;
        case 0x2c4d64u: goto label_2c4d64;
        case 0x2c4d68u: goto label_2c4d68;
        case 0x2c4d6cu: goto label_2c4d6c;
        case 0x2c4d70u: goto label_2c4d70;
        case 0x2c4d74u: goto label_2c4d74;
        case 0x2c4d78u: goto label_2c4d78;
        case 0x2c4d7cu: goto label_2c4d7c;
        case 0x2c4d80u: goto label_2c4d80;
        case 0x2c4d84u: goto label_2c4d84;
        case 0x2c4d88u: goto label_2c4d88;
        case 0x2c4d8cu: goto label_2c4d8c;
        case 0x2c4d90u: goto label_2c4d90;
        case 0x2c4d94u: goto label_2c4d94;
        case 0x2c4d98u: goto label_2c4d98;
        case 0x2c4d9cu: goto label_2c4d9c;
        case 0x2c4da0u: goto label_2c4da0;
        case 0x2c4da4u: goto label_2c4da4;
        case 0x2c4da8u: goto label_2c4da8;
        case 0x2c4dacu: goto label_2c4dac;
        case 0x2c4db0u: goto label_2c4db0;
        case 0x2c4db4u: goto label_2c4db4;
        case 0x2c4db8u: goto label_2c4db8;
        case 0x2c4dbcu: goto label_2c4dbc;
        default: break;
    }

    ctx->pc = 0x2c4ac0u;

label_2c4ac0:
    // 0x2c4ac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c4ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c4ac4:
    // 0x2c4ac4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c4ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c4ac8:
    // 0x2c4ac8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c4ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c4acc:
    // 0x2c4acc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c4ad0:
    // 0x2c4ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c4ad4:
    // 0x2c4ad4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c4ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ad8:
    // 0x2c4ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c4adc:
    // 0x2c4adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c4ae0:
    // 0x2c4ae0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c4ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ae4:
    // 0x2c4ae4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c4ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ae8:
    // 0x2c4ae8: 0xc10ca68  jal         func_4329A0
label_2c4aec:
    if (ctx->pc == 0x2C4AECu) {
        ctx->pc = 0x2C4AECu;
            // 0x2c4aec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2C4AF0u;
        goto label_2c4af0;
    }
    ctx->pc = 0x2C4AE8u;
    SET_GPR_U32(ctx, 31, 0x2C4AF0u);
    ctx->pc = 0x2C4AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4AE8u;
            // 0x2c4aec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4AF0u; }
        if (ctx->pc != 0x2C4AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4AF0u; }
        if (ctx->pc != 0x2C4AF0u) { return; }
    }
    ctx->pc = 0x2C4AF0u;
label_2c4af0:
    // 0x2c4af0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c4af4:
    // 0x2c4af4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c4af8:
    // 0x2c4af8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_2c4afc:
    // 0x2c4afc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c4b00:
    // 0x2c4b00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c4b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2c4b04:
    // 0x2c4b04: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c4b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_2c4b08:
    // 0x2c4b08: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2c4b0c:
    // 0x2c4b0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c4b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c4b10:
    // 0x2c4b10: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c4b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_2c4b14:
    // 0x2c4b14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c4b18:
    // 0x2c4b18: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c4b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_2c4b1c:
    // 0x2c4b1c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c4b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c4b20:
    // 0x2c4b20: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c4b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_2c4b24:
    // 0x2c4b24: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c4b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_2c4b28:
    // 0x2c4b28: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c4b28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_2c4b2c:
    // 0x2c4b2c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_2c4b30:
    // 0x2c4b30: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c4b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_2c4b34:
    // 0x2c4b34: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2c4b38:
    // 0x2c4b38: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c4b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2c4b3c:
    // 0x2c4b3c: 0xc0582cc  jal         func_160B30
label_2c4b40:
    if (ctx->pc == 0x2C4B40u) {
        ctx->pc = 0x2C4B40u;
            // 0x2c4b40: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C4B44u;
        goto label_2c4b44;
    }
    ctx->pc = 0x2C4B3Cu;
    SET_GPR_U32(ctx, 31, 0x2C4B44u);
    ctx->pc = 0x2C4B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4B3Cu;
            // 0x2c4b40: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B44u; }
        if (ctx->pc != 0x2C4B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4B44u; }
        if (ctx->pc != 0x2C4B44u) { return; }
    }
    ctx->pc = 0x2C4B44u;
label_2c4b44:
    // 0x2c4b44: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c4b48:
    // 0x2c4b48: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_2c4b4c:
    // 0x2c4b4c: 0x24630ef8  addiu       $v1, $v1, 0xEF8
    ctx->pc = 0x2c4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3832));
label_2c4b50:
    // 0x2c4b50: 0x2444ff90  addiu       $a0, $v0, -0x70
    ctx->pc = 0x2c4b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
label_2c4b54:
    // 0x2c4b54: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c4b54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_2c4b58:
    // 0x2c4b58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c4b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c4b5c:
    // 0x2c4b5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c4b60:
    // 0x2c4b60: 0xac440dd8  sw          $a0, 0xDD8($v0)
    ctx->pc = 0x2c4b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3544), GPR_U32(ctx, 4));
label_2c4b64:
    // 0x2c4b64: 0x24630f10  addiu       $v1, $v1, 0xF10
    ctx->pc = 0x2c4b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3856));
label_2c4b68:
    // 0x2c4b68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c4b6c:
    // 0x2c4b6c: 0x24420f48  addiu       $v0, $v0, 0xF48
    ctx->pc = 0x2c4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3912));
label_2c4b70:
    // 0x2c4b70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c4b70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2c4b74:
    // 0x2c4b74: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c4b74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_2c4b78:
    // 0x2c4b78: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c4b78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_2c4b7c:
    // 0x2c4b7c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_2c4b80:
    // 0x2c4b80: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c4b80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_2c4b84:
    // 0x2c4b84: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c4b84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_2c4b88:
    // 0x2c4b88: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_2c4b8c:
    // 0x2c4b8c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_2c4b90:
    // 0x2c4b90: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_2c4b94:
    // 0x2c4b94: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_2c4b98:
    // 0x2c4b98: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c4b98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_2c4b9c:
    // 0x2c4b9c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_2c4ba0:
    // 0x2c4ba0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c4ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2c4ba4:
    // 0x2c4ba4: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_2c4ba8:
    if (ctx->pc == 0x2C4BA8u) {
        ctx->pc = 0x2C4BACu;
        goto label_2c4bac;
    }
    ctx->pc = 0x2C4BA4u;
    {
        const bool branch_taken_0x2c4ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ba4) {
            ctx->pc = 0x2C4C30u;
            goto label_2c4c30;
        }
    }
    ctx->pc = 0x2C4BACu;
label_2c4bac:
    // 0x2c4bac: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x2c4bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_2c4bb0:
    // 0x2c4bb0: 0xc040138  jal         func_1004E0
label_2c4bb4:
    if (ctx->pc == 0x2C4BB4u) {
        ctx->pc = 0x2C4BB4u;
            // 0x2c4bb4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2C4BB8u;
        goto label_2c4bb8;
    }
    ctx->pc = 0x2C4BB0u;
    SET_GPR_U32(ctx, 31, 0x2C4BB8u);
    ctx->pc = 0x2C4BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4BB0u;
            // 0x2c4bb4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BB8u; }
        if (ctx->pc != 0x2C4BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BB8u; }
        if (ctx->pc != 0x2C4BB8u) { return; }
    }
    ctx->pc = 0x2C4BB8u;
label_2c4bb8:
    // 0x2c4bb8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c4bbc:
    // 0x2c4bbc: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c4bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2c4bc0:
    // 0x2c4bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4bc4:
    // 0x2c4bc4: 0x24a54c50  addiu       $a1, $a1, 0x4C50
    ctx->pc = 0x2c4bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19536));
label_2c4bc8:
    // 0x2c4bc8: 0x24c64890  addiu       $a2, $a2, 0x4890
    ctx->pc = 0x2c4bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18576));
label_2c4bcc:
    // 0x2c4bcc: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2c4bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2c4bd0:
    // 0x2c4bd0: 0xc040840  jal         func_102100
label_2c4bd4:
    if (ctx->pc == 0x2C4BD4u) {
        ctx->pc = 0x2C4BD4u;
            // 0x2c4bd4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BD8u;
        goto label_2c4bd8;
    }
    ctx->pc = 0x2C4BD0u;
    SET_GPR_U32(ctx, 31, 0x2C4BD8u);
    ctx->pc = 0x2C4BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4BD0u;
            // 0x2c4bd4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BD8u; }
        if (ctx->pc != 0x2C4BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BD8u; }
        if (ctx->pc != 0x2C4BD8u) { return; }
    }
    ctx->pc = 0x2C4BD8u;
label_2c4bd8:
    // 0x2c4bd8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_2c4bdc:
    // 0x2c4bdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4be0:
    // 0x2c4be0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c4be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_2c4be4:
    // 0x2c4be4: 0xc0788fc  jal         func_1E23F0
label_2c4be8:
    if (ctx->pc == 0x2C4BE8u) {
        ctx->pc = 0x2C4BE8u;
            // 0x2c4be8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BECu;
        goto label_2c4bec;
    }
    ctx->pc = 0x2C4BE4u;
    SET_GPR_U32(ctx, 31, 0x2C4BECu);
    ctx->pc = 0x2C4BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4BE4u;
            // 0x2c4be8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BECu; }
        if (ctx->pc != 0x2C4BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BECu; }
        if (ctx->pc != 0x2C4BECu) { return; }
    }
    ctx->pc = 0x2C4BECu;
label_2c4bec:
    // 0x2c4bec: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c4becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_2c4bf0:
    // 0x2c4bf0: 0xc0788fc  jal         func_1E23F0
label_2c4bf4:
    if (ctx->pc == 0x2C4BF4u) {
        ctx->pc = 0x2C4BF4u;
            // 0x2c4bf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BF8u;
        goto label_2c4bf8;
    }
    ctx->pc = 0x2C4BF0u;
    SET_GPR_U32(ctx, 31, 0x2C4BF8u);
    ctx->pc = 0x2C4BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4BF0u;
            // 0x2c4bf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BF8u; }
        if (ctx->pc != 0x2C4BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4BF8u; }
        if (ctx->pc != 0x2C4BF8u) { return; }
    }
    ctx->pc = 0x2C4BF8u;
label_2c4bf8:
    // 0x2c4bf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c4bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4bfc:
    // 0x2c4bfc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c4bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_2c4c00:
    // 0x2c4c00: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c4c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_2c4c04:
    // 0x2c4c04: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_2c4c08:
    // 0x2c4c08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c4c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4c0c:
    // 0x2c4c0c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_2c4c10:
    // 0x2c4c10: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c4c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2c4c14:
    // 0x2c4c14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c4c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2c4c18:
    // 0x2c4c18: 0xc0a997c  jal         func_2A65F0
label_2c4c1c:
    if (ctx->pc == 0x2C4C1Cu) {
        ctx->pc = 0x2C4C1Cu;
            // 0x2c4c1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2C4C20u;
        goto label_2c4c20;
    }
    ctx->pc = 0x2C4C18u;
    SET_GPR_U32(ctx, 31, 0x2C4C20u);
    ctx->pc = 0x2C4C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4C18u;
            // 0x2c4c1c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C20u; }
        if (ctx->pc != 0x2C4C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C20u; }
        if (ctx->pc != 0x2C4C20u) { return; }
    }
    ctx->pc = 0x2C4C20u;
label_2c4c20:
    // 0x2c4c20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c4c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c4c24:
    // 0x2c4c24: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c4c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c4c28:
    // 0x2c4c28: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2c4c2c:
    if (ctx->pc == 0x2C4C2Cu) {
        ctx->pc = 0x2C4C2Cu;
            // 0x2c4c2c: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->pc = 0x2C4C30u;
        goto label_2c4c30;
    }
    ctx->pc = 0x2C4C28u;
    {
        const bool branch_taken_0x2c4c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4C28u;
            // 0x2c4c2c: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c28) {
            ctx->pc = 0x2C4BFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c4bfc;
        }
    }
    ctx->pc = 0x2C4C30u;
label_2c4c30:
    // 0x2c4c30: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c4c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c4c34:
    // 0x2c4c34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c4c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4c38:
    // 0x2c4c38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4c3c:
    // 0x2c4c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c4c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4c40:
    // 0x2c4c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4c44:
    // 0x2c4c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4c48:
    // 0x2c4c48: 0x3e00008  jr          $ra
label_2c4c4c:
    if (ctx->pc == 0x2C4C4Cu) {
        ctx->pc = 0x2C4C4Cu;
            // 0x2c4c4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C4C50u;
        goto label_2c4c50;
    }
    ctx->pc = 0x2C4C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4C48u;
            // 0x2c4c4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4C50u;
label_2c4c50:
    // 0x2c4c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c4c54:
    // 0x2c4c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c4c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c4c58:
    // 0x2c4c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c4c5c:
    // 0x2c4c5c: 0xc0b1370  jal         func_2C4DC0
label_2c4c60:
    if (ctx->pc == 0x2C4C60u) {
        ctx->pc = 0x2C4C60u;
            // 0x2c4c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4C64u;
        goto label_2c4c64;
    }
    ctx->pc = 0x2C4C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C4C64u);
    ctx->pc = 0x2C4C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4C5Cu;
            // 0x2c4c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C64u; }
        if (ctx->pc != 0x2C4C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4C64u; }
        if (ctx->pc != 0x2C4C64u) { return; }
    }
    ctx->pc = 0x2C4C64u;
label_2c4c64:
    // 0x2c4c64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2c4c68:
    // 0x2c4c68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c4c6c:
    // 0x2c4c6c: 0x2463e860  addiu       $v1, $v1, -0x17A0
    ctx->pc = 0x2c4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961248));
label_2c4c70:
    // 0x2c4c70: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2c4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2c4c74:
    // 0x2c4c74: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c4c78:
    // 0x2c4c78: 0x2442e8a0  addiu       $v0, $v0, -0x1760
    ctx->pc = 0x2c4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961312));
label_2c4c7c:
    // 0x2c4c7c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c4c80:
    // 0x2c4c80: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2c4c84:
    // 0x2c4c84: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2c4c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2c4c88:
    // 0x2c4c88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c4c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4c8c:
    // 0x2c4c8c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2c4c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_2c4c90:
    // 0x2c4c90: 0x24841010  addiu       $a0, $a0, 0x1010
    ctx->pc = 0x2c4c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4112));
label_2c4c94:
    // 0x2c4c94: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2c4c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_2c4c98:
    // 0x2c4c98: 0x24631050  addiu       $v1, $v1, 0x1050
    ctx->pc = 0x2c4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4176));
label_2c4c9c:
    // 0x2c4c9c: 0xa20500ec  sb          $a1, 0xEC($s0)
    ctx->pc = 0x2c4c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 5));
label_2c4ca0:
    // 0x2c4ca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ca4:
    // 0x2c4ca4: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2c4ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_2c4ca8:
    // 0x2c4ca8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2c4ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2c4cac:
    // 0x2c4cac: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2c4cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_2c4cb0:
    // 0x2c4cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4cb4:
    // 0x2c4cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4cb8:
    // 0x2c4cb8: 0x3e00008  jr          $ra
label_2c4cbc:
    if (ctx->pc == 0x2C4CBCu) {
        ctx->pc = 0x2C4CBCu;
            // 0x2c4cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C4CC0u;
        goto label_2c4cc0;
    }
    ctx->pc = 0x2C4CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4CB8u;
            // 0x2c4cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4CC0u;
label_2c4cc0:
    // 0x2c4cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c4cc4:
    // 0x2c4cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c4cc8:
    // 0x2c4cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c4ccc:
    // 0x2c4ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c4cd0:
    // 0x2c4cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4cd4:
    // 0x2c4cd4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_2c4cd8:
    if (ctx->pc == 0x2C4CD8u) {
        ctx->pc = 0x2C4CD8u;
            // 0x2c4cd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CDCu;
        goto label_2c4cdc;
    }
    ctx->pc = 0x2C4CD4u;
    {
        const bool branch_taken_0x2c4cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4CD4u;
            // 0x2c4cd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cd4) {
            ctx->pc = 0x2C4D9Cu;
            goto label_2c4d9c;
        }
    }
    ctx->pc = 0x2C4CDCu;
label_2c4cdc:
    // 0x2c4cdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2c4ce0:
    // 0x2c4ce0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c4ce4:
    // 0x2c4ce4: 0x2463e860  addiu       $v1, $v1, -0x17A0
    ctx->pc = 0x2c4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961248));
label_2c4ce8:
    // 0x2c4ce8: 0x2442e8a0  addiu       $v0, $v0, -0x1760
    ctx->pc = 0x2c4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961312));
label_2c4cec:
    // 0x2c4cec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c4cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c4cf0:
    // 0x2c4cf0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c4cf4:
    // 0x2c4cf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c4cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c4cf8:
    // 0x2c4cf8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c4cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c4cfc:
    // 0x2c4cfc: 0x320f809  jalr        $t9
label_2c4d00:
    if (ctx->pc == 0x2C4D00u) {
        ctx->pc = 0x2C4D04u;
        goto label_2c4d04;
    }
    ctx->pc = 0x2C4CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C4D04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C4D04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D04u; }
            if (ctx->pc != 0x2C4D04u) { return; }
        }
        }
    }
    ctx->pc = 0x2C4D04u;
label_2c4d04:
    // 0x2c4d04: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_2c4d08:
    if (ctx->pc == 0x2C4D08u) {
        ctx->pc = 0x2C4D08u;
            // 0x2c4d08: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C4D0Cu;
        goto label_2c4d0c;
    }
    ctx->pc = 0x2C4D04u;
    {
        const bool branch_taken_0x2c4d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d04) {
            ctx->pc = 0x2C4D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D04u;
            // 0x2c4d08: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4D88u;
            goto label_2c4d88;
        }
    }
    ctx->pc = 0x2C4D0Cu;
label_2c4d0c:
    // 0x2c4d0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c4d10:
    // 0x2c4d10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c4d14:
    // 0x2c4d14: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2c4d18:
    // 0x2c4d18: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2c4d1c:
    // 0x2c4d1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c4d20:
    // 0x2c4d20: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c4d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c4d24:
    // 0x2c4d24: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2c4d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_2c4d28:
    // 0x2c4d28: 0xc0aecc4  jal         func_2BB310
label_2c4d2c:
    if (ctx->pc == 0x2C4D2Cu) {
        ctx->pc = 0x2C4D2Cu;
            // 0x2c4d2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C4D30u;
        goto label_2c4d30;
    }
    ctx->pc = 0x2C4D28u;
    SET_GPR_U32(ctx, 31, 0x2C4D30u);
    ctx->pc = 0x2C4D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D28u;
            // 0x2c4d2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D30u; }
        if (ctx->pc != 0x2C4D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D30u; }
        if (ctx->pc != 0x2C4D30u) { return; }
    }
    ctx->pc = 0x2C4D30u;
label_2c4d30:
    // 0x2c4d30: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2c4d34:
    // 0x2c4d34: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x2c4d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2c4d38:
    // 0x2c4d38: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c4d3c:
    if (ctx->pc == 0x2C4D3Cu) {
        ctx->pc = 0x2C4D3Cu;
            // 0x2c4d3c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x2C4D40u;
        goto label_2c4d40;
    }
    ctx->pc = 0x2C4D38u;
    {
        const bool branch_taken_0x2c4d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d38) {
            ctx->pc = 0x2C4D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D38u;
            // 0x2c4d3c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4D54u;
            goto label_2c4d54;
        }
    }
    ctx->pc = 0x2C4D40u;
label_2c4d40:
    // 0x2c4d40: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x2c4d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2c4d44:
    // 0x2c4d44: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c4d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c4d48:
    // 0x2c4d48: 0x320f809  jalr        $t9
label_2c4d4c:
    if (ctx->pc == 0x2C4D4Cu) {
        ctx->pc = 0x2C4D4Cu;
            // 0x2c4d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C4D50u;
        goto label_2c4d50;
    }
    ctx->pc = 0x2C4D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C4D50u);
        ctx->pc = 0x2C4D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D48u;
            // 0x2c4d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C4D50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D50u; }
            if (ctx->pc != 0x2C4D50u) { return; }
        }
        }
    }
    ctx->pc = 0x2C4D50u;
label_2c4d50:
    // 0x2c4d50: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2c4d54:
    // 0x2c4d54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c4d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c4d58:
    // 0x2c4d58: 0xc0aec9c  jal         func_2BB270
label_2c4d5c:
    if (ctx->pc == 0x2C4D5Cu) {
        ctx->pc = 0x2C4D5Cu;
            // 0x2c4d5c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x2C4D60u;
        goto label_2c4d60;
    }
    ctx->pc = 0x2C4D58u;
    SET_GPR_U32(ctx, 31, 0x2C4D60u);
    ctx->pc = 0x2C4D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D58u;
            // 0x2c4d5c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D60u; }
        if (ctx->pc != 0x2C4D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D60u; }
        if (ctx->pc != 0x2C4D60u) { return; }
    }
    ctx->pc = 0x2C4D60u;
label_2c4d60:
    // 0x2c4d60: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2c4d64:
    // 0x2c4d64: 0xc0aec88  jal         func_2BB220
label_2c4d68:
    if (ctx->pc == 0x2C4D68u) {
        ctx->pc = 0x2C4D68u;
            // 0x2c4d68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C4D6Cu;
        goto label_2c4d6c;
    }
    ctx->pc = 0x2C4D64u;
    SET_GPR_U32(ctx, 31, 0x2C4D6Cu);
    ctx->pc = 0x2C4D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D64u;
            // 0x2c4d68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D6Cu; }
        if (ctx->pc != 0x2C4D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D6Cu; }
        if (ctx->pc != 0x2C4D6Cu) { return; }
    }
    ctx->pc = 0x2C4D6Cu;
label_2c4d6c:
    // 0x2c4d6c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2c4d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2c4d70:
    // 0x2c4d70: 0xc0aec0c  jal         func_2BB030
label_2c4d74:
    if (ctx->pc == 0x2C4D74u) {
        ctx->pc = 0x2C4D74u;
            // 0x2c4d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D78u;
        goto label_2c4d78;
    }
    ctx->pc = 0x2C4D70u;
    SET_GPR_U32(ctx, 31, 0x2C4D78u);
    ctx->pc = 0x2C4D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D70u;
            // 0x2c4d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D78u; }
        if (ctx->pc != 0x2C4D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D78u; }
        if (ctx->pc != 0x2C4D78u) { return; }
    }
    ctx->pc = 0x2C4D78u;
label_2c4d78:
    // 0x2c4d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4d7c:
    // 0x2c4d7c: 0xc0aeaa8  jal         func_2BAAA0
label_2c4d80:
    if (ctx->pc == 0x2C4D80u) {
        ctx->pc = 0x2C4D80u;
            // 0x2c4d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D84u;
        goto label_2c4d84;
    }
    ctx->pc = 0x2C4D7Cu;
    SET_GPR_U32(ctx, 31, 0x2C4D84u);
    ctx->pc = 0x2C4D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D7Cu;
            // 0x2c4d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D84u; }
        if (ctx->pc != 0x2C4D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D84u; }
        if (ctx->pc != 0x2C4D84u) { return; }
    }
    ctx->pc = 0x2C4D84u;
label_2c4d84:
    // 0x2c4d84: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c4d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c4d88:
    // 0x2c4d88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c4d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c4d8c:
    // 0x2c4d8c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c4d90:
    if (ctx->pc == 0x2C4D90u) {
        ctx->pc = 0x2C4D90u;
            // 0x2c4d90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D94u;
        goto label_2c4d94;
    }
    ctx->pc = 0x2C4D8Cu;
    {
        const bool branch_taken_0x2c4d8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c4d8c) {
            ctx->pc = 0x2C4D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D8Cu;
            // 0x2c4d90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4DA0u;
            goto label_2c4da0;
        }
    }
    ctx->pc = 0x2C4D94u;
label_2c4d94:
    // 0x2c4d94: 0xc0400a8  jal         func_1002A0
label_2c4d98:
    if (ctx->pc == 0x2C4D98u) {
        ctx->pc = 0x2C4D98u;
            // 0x2c4d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D9Cu;
        goto label_2c4d9c;
    }
    ctx->pc = 0x2C4D94u;
    SET_GPR_U32(ctx, 31, 0x2C4D9Cu);
    ctx->pc = 0x2C4D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4D94u;
            // 0x2c4d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D9Cu; }
        if (ctx->pc != 0x2C4D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4D9Cu; }
        if (ctx->pc != 0x2C4D9Cu) { return; }
    }
    ctx->pc = 0x2C4D9Cu;
label_2c4d9c:
    // 0x2c4d9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4da0:
    // 0x2c4da0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4da4:
    // 0x2c4da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4da8:
    // 0x2c4da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4dac:
    // 0x2c4dac: 0x3e00008  jr          $ra
label_2c4db0:
    if (ctx->pc == 0x2C4DB0u) {
        ctx->pc = 0x2C4DB0u;
            // 0x2c4db0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C4DB4u;
        goto label_2c4db4;
    }
    ctx->pc = 0x2C4DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4DACu;
            // 0x2c4db0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4DB4u;
label_2c4db4:
    // 0x2c4db4: 0x0  nop
    ctx->pc = 0x2c4db4u;
    // NOP
label_2c4db8:
    // 0x2c4db8: 0x0  nop
    ctx->pc = 0x2c4db8u;
    // NOP
label_2c4dbc:
    // 0x2c4dbc: 0x0  nop
    ctx->pc = 0x2c4dbcu;
    // NOP
}
