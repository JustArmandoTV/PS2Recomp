#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5AB0
// Address: 0x2a5ab0 - 0x2a5e30
void sub_002A5AB0_0x2a5ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5AB0_0x2a5ab0");
#endif

    switch (ctx->pc) {
        case 0x2a5ab0u: goto label_2a5ab0;
        case 0x2a5ab4u: goto label_2a5ab4;
        case 0x2a5ab8u: goto label_2a5ab8;
        case 0x2a5abcu: goto label_2a5abc;
        case 0x2a5ac0u: goto label_2a5ac0;
        case 0x2a5ac4u: goto label_2a5ac4;
        case 0x2a5ac8u: goto label_2a5ac8;
        case 0x2a5accu: goto label_2a5acc;
        case 0x2a5ad0u: goto label_2a5ad0;
        case 0x2a5ad4u: goto label_2a5ad4;
        case 0x2a5ad8u: goto label_2a5ad8;
        case 0x2a5adcu: goto label_2a5adc;
        case 0x2a5ae0u: goto label_2a5ae0;
        case 0x2a5ae4u: goto label_2a5ae4;
        case 0x2a5ae8u: goto label_2a5ae8;
        case 0x2a5aecu: goto label_2a5aec;
        case 0x2a5af0u: goto label_2a5af0;
        case 0x2a5af4u: goto label_2a5af4;
        case 0x2a5af8u: goto label_2a5af8;
        case 0x2a5afcu: goto label_2a5afc;
        case 0x2a5b00u: goto label_2a5b00;
        case 0x2a5b04u: goto label_2a5b04;
        case 0x2a5b08u: goto label_2a5b08;
        case 0x2a5b0cu: goto label_2a5b0c;
        case 0x2a5b10u: goto label_2a5b10;
        case 0x2a5b14u: goto label_2a5b14;
        case 0x2a5b18u: goto label_2a5b18;
        case 0x2a5b1cu: goto label_2a5b1c;
        case 0x2a5b20u: goto label_2a5b20;
        case 0x2a5b24u: goto label_2a5b24;
        case 0x2a5b28u: goto label_2a5b28;
        case 0x2a5b2cu: goto label_2a5b2c;
        case 0x2a5b30u: goto label_2a5b30;
        case 0x2a5b34u: goto label_2a5b34;
        case 0x2a5b38u: goto label_2a5b38;
        case 0x2a5b3cu: goto label_2a5b3c;
        case 0x2a5b40u: goto label_2a5b40;
        case 0x2a5b44u: goto label_2a5b44;
        case 0x2a5b48u: goto label_2a5b48;
        case 0x2a5b4cu: goto label_2a5b4c;
        case 0x2a5b50u: goto label_2a5b50;
        case 0x2a5b54u: goto label_2a5b54;
        case 0x2a5b58u: goto label_2a5b58;
        case 0x2a5b5cu: goto label_2a5b5c;
        case 0x2a5b60u: goto label_2a5b60;
        case 0x2a5b64u: goto label_2a5b64;
        case 0x2a5b68u: goto label_2a5b68;
        case 0x2a5b6cu: goto label_2a5b6c;
        case 0x2a5b70u: goto label_2a5b70;
        case 0x2a5b74u: goto label_2a5b74;
        case 0x2a5b78u: goto label_2a5b78;
        case 0x2a5b7cu: goto label_2a5b7c;
        case 0x2a5b80u: goto label_2a5b80;
        case 0x2a5b84u: goto label_2a5b84;
        case 0x2a5b88u: goto label_2a5b88;
        case 0x2a5b8cu: goto label_2a5b8c;
        case 0x2a5b90u: goto label_2a5b90;
        case 0x2a5b94u: goto label_2a5b94;
        case 0x2a5b98u: goto label_2a5b98;
        case 0x2a5b9cu: goto label_2a5b9c;
        case 0x2a5ba0u: goto label_2a5ba0;
        case 0x2a5ba4u: goto label_2a5ba4;
        case 0x2a5ba8u: goto label_2a5ba8;
        case 0x2a5bacu: goto label_2a5bac;
        case 0x2a5bb0u: goto label_2a5bb0;
        case 0x2a5bb4u: goto label_2a5bb4;
        case 0x2a5bb8u: goto label_2a5bb8;
        case 0x2a5bbcu: goto label_2a5bbc;
        case 0x2a5bc0u: goto label_2a5bc0;
        case 0x2a5bc4u: goto label_2a5bc4;
        case 0x2a5bc8u: goto label_2a5bc8;
        case 0x2a5bccu: goto label_2a5bcc;
        case 0x2a5bd0u: goto label_2a5bd0;
        case 0x2a5bd4u: goto label_2a5bd4;
        case 0x2a5bd8u: goto label_2a5bd8;
        case 0x2a5bdcu: goto label_2a5bdc;
        case 0x2a5be0u: goto label_2a5be0;
        case 0x2a5be4u: goto label_2a5be4;
        case 0x2a5be8u: goto label_2a5be8;
        case 0x2a5becu: goto label_2a5bec;
        case 0x2a5bf0u: goto label_2a5bf0;
        case 0x2a5bf4u: goto label_2a5bf4;
        case 0x2a5bf8u: goto label_2a5bf8;
        case 0x2a5bfcu: goto label_2a5bfc;
        case 0x2a5c00u: goto label_2a5c00;
        case 0x2a5c04u: goto label_2a5c04;
        case 0x2a5c08u: goto label_2a5c08;
        case 0x2a5c0cu: goto label_2a5c0c;
        case 0x2a5c10u: goto label_2a5c10;
        case 0x2a5c14u: goto label_2a5c14;
        case 0x2a5c18u: goto label_2a5c18;
        case 0x2a5c1cu: goto label_2a5c1c;
        case 0x2a5c20u: goto label_2a5c20;
        case 0x2a5c24u: goto label_2a5c24;
        case 0x2a5c28u: goto label_2a5c28;
        case 0x2a5c2cu: goto label_2a5c2c;
        case 0x2a5c30u: goto label_2a5c30;
        case 0x2a5c34u: goto label_2a5c34;
        case 0x2a5c38u: goto label_2a5c38;
        case 0x2a5c3cu: goto label_2a5c3c;
        case 0x2a5c40u: goto label_2a5c40;
        case 0x2a5c44u: goto label_2a5c44;
        case 0x2a5c48u: goto label_2a5c48;
        case 0x2a5c4cu: goto label_2a5c4c;
        case 0x2a5c50u: goto label_2a5c50;
        case 0x2a5c54u: goto label_2a5c54;
        case 0x2a5c58u: goto label_2a5c58;
        case 0x2a5c5cu: goto label_2a5c5c;
        case 0x2a5c60u: goto label_2a5c60;
        case 0x2a5c64u: goto label_2a5c64;
        case 0x2a5c68u: goto label_2a5c68;
        case 0x2a5c6cu: goto label_2a5c6c;
        case 0x2a5c70u: goto label_2a5c70;
        case 0x2a5c74u: goto label_2a5c74;
        case 0x2a5c78u: goto label_2a5c78;
        case 0x2a5c7cu: goto label_2a5c7c;
        case 0x2a5c80u: goto label_2a5c80;
        case 0x2a5c84u: goto label_2a5c84;
        case 0x2a5c88u: goto label_2a5c88;
        case 0x2a5c8cu: goto label_2a5c8c;
        case 0x2a5c90u: goto label_2a5c90;
        case 0x2a5c94u: goto label_2a5c94;
        case 0x2a5c98u: goto label_2a5c98;
        case 0x2a5c9cu: goto label_2a5c9c;
        case 0x2a5ca0u: goto label_2a5ca0;
        case 0x2a5ca4u: goto label_2a5ca4;
        case 0x2a5ca8u: goto label_2a5ca8;
        case 0x2a5cacu: goto label_2a5cac;
        case 0x2a5cb0u: goto label_2a5cb0;
        case 0x2a5cb4u: goto label_2a5cb4;
        case 0x2a5cb8u: goto label_2a5cb8;
        case 0x2a5cbcu: goto label_2a5cbc;
        case 0x2a5cc0u: goto label_2a5cc0;
        case 0x2a5cc4u: goto label_2a5cc4;
        case 0x2a5cc8u: goto label_2a5cc8;
        case 0x2a5cccu: goto label_2a5ccc;
        case 0x2a5cd0u: goto label_2a5cd0;
        case 0x2a5cd4u: goto label_2a5cd4;
        case 0x2a5cd8u: goto label_2a5cd8;
        case 0x2a5cdcu: goto label_2a5cdc;
        case 0x2a5ce0u: goto label_2a5ce0;
        case 0x2a5ce4u: goto label_2a5ce4;
        case 0x2a5ce8u: goto label_2a5ce8;
        case 0x2a5cecu: goto label_2a5cec;
        case 0x2a5cf0u: goto label_2a5cf0;
        case 0x2a5cf4u: goto label_2a5cf4;
        case 0x2a5cf8u: goto label_2a5cf8;
        case 0x2a5cfcu: goto label_2a5cfc;
        case 0x2a5d00u: goto label_2a5d00;
        case 0x2a5d04u: goto label_2a5d04;
        case 0x2a5d08u: goto label_2a5d08;
        case 0x2a5d0cu: goto label_2a5d0c;
        case 0x2a5d10u: goto label_2a5d10;
        case 0x2a5d14u: goto label_2a5d14;
        case 0x2a5d18u: goto label_2a5d18;
        case 0x2a5d1cu: goto label_2a5d1c;
        case 0x2a5d20u: goto label_2a5d20;
        case 0x2a5d24u: goto label_2a5d24;
        case 0x2a5d28u: goto label_2a5d28;
        case 0x2a5d2cu: goto label_2a5d2c;
        case 0x2a5d30u: goto label_2a5d30;
        case 0x2a5d34u: goto label_2a5d34;
        case 0x2a5d38u: goto label_2a5d38;
        case 0x2a5d3cu: goto label_2a5d3c;
        case 0x2a5d40u: goto label_2a5d40;
        case 0x2a5d44u: goto label_2a5d44;
        case 0x2a5d48u: goto label_2a5d48;
        case 0x2a5d4cu: goto label_2a5d4c;
        case 0x2a5d50u: goto label_2a5d50;
        case 0x2a5d54u: goto label_2a5d54;
        case 0x2a5d58u: goto label_2a5d58;
        case 0x2a5d5cu: goto label_2a5d5c;
        case 0x2a5d60u: goto label_2a5d60;
        case 0x2a5d64u: goto label_2a5d64;
        case 0x2a5d68u: goto label_2a5d68;
        case 0x2a5d6cu: goto label_2a5d6c;
        case 0x2a5d70u: goto label_2a5d70;
        case 0x2a5d74u: goto label_2a5d74;
        case 0x2a5d78u: goto label_2a5d78;
        case 0x2a5d7cu: goto label_2a5d7c;
        case 0x2a5d80u: goto label_2a5d80;
        case 0x2a5d84u: goto label_2a5d84;
        case 0x2a5d88u: goto label_2a5d88;
        case 0x2a5d8cu: goto label_2a5d8c;
        case 0x2a5d90u: goto label_2a5d90;
        case 0x2a5d94u: goto label_2a5d94;
        case 0x2a5d98u: goto label_2a5d98;
        case 0x2a5d9cu: goto label_2a5d9c;
        case 0x2a5da0u: goto label_2a5da0;
        case 0x2a5da4u: goto label_2a5da4;
        case 0x2a5da8u: goto label_2a5da8;
        case 0x2a5dacu: goto label_2a5dac;
        case 0x2a5db0u: goto label_2a5db0;
        case 0x2a5db4u: goto label_2a5db4;
        case 0x2a5db8u: goto label_2a5db8;
        case 0x2a5dbcu: goto label_2a5dbc;
        case 0x2a5dc0u: goto label_2a5dc0;
        case 0x2a5dc4u: goto label_2a5dc4;
        case 0x2a5dc8u: goto label_2a5dc8;
        case 0x2a5dccu: goto label_2a5dcc;
        case 0x2a5dd0u: goto label_2a5dd0;
        case 0x2a5dd4u: goto label_2a5dd4;
        case 0x2a5dd8u: goto label_2a5dd8;
        case 0x2a5ddcu: goto label_2a5ddc;
        case 0x2a5de0u: goto label_2a5de0;
        case 0x2a5de4u: goto label_2a5de4;
        case 0x2a5de8u: goto label_2a5de8;
        case 0x2a5decu: goto label_2a5dec;
        case 0x2a5df0u: goto label_2a5df0;
        case 0x2a5df4u: goto label_2a5df4;
        case 0x2a5df8u: goto label_2a5df8;
        case 0x2a5dfcu: goto label_2a5dfc;
        case 0x2a5e00u: goto label_2a5e00;
        case 0x2a5e04u: goto label_2a5e04;
        case 0x2a5e08u: goto label_2a5e08;
        case 0x2a5e0cu: goto label_2a5e0c;
        case 0x2a5e10u: goto label_2a5e10;
        case 0x2a5e14u: goto label_2a5e14;
        case 0x2a5e18u: goto label_2a5e18;
        case 0x2a5e1cu: goto label_2a5e1c;
        case 0x2a5e20u: goto label_2a5e20;
        case 0x2a5e24u: goto label_2a5e24;
        case 0x2a5e28u: goto label_2a5e28;
        case 0x2a5e2cu: goto label_2a5e2c;
        default: break;
    }

    ctx->pc = 0x2a5ab0u;

label_2a5ab0:
    // 0x2a5ab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a5ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a5ab4:
    // 0x2a5ab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a5ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a5ab8:
    // 0x2a5ab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a5ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a5abc:
    // 0x2a5abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a5abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a5ac0:
    // 0x2a5ac0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a5ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ac4:
    // 0x2a5ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a5ac8:
    // 0x2a5ac8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a5ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a5acc:
    // 0x2a5acc: 0x126000a3  beqz        $s3, . + 4 + (0xA3 << 2)
label_2a5ad0:
    if (ctx->pc == 0x2A5AD0u) {
        ctx->pc = 0x2A5AD0u;
            // 0x2a5ad0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2A5AD4u;
        goto label_2a5ad4;
    }
    ctx->pc = 0x2A5ACCu;
    {
        const bool branch_taken_0x2a5acc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5ACCu;
            // 0x2a5ad0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5acc) {
            ctx->pc = 0x2A5D5Cu;
            goto label_2a5d5c;
        }
    }
    ctx->pc = 0x2A5AD4u;
label_2a5ad4:
    // 0x2a5ad4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a5ad8:
    // 0x2a5ad8: 0x2442fb58  addiu       $v0, $v0, -0x4A8
    ctx->pc = 0x2a5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966104));
label_2a5adc:
    // 0x2a5adc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2a5adcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2a5ae0:
    // 0x2a5ae0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2a5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2a5ae4:
    // 0x2a5ae4: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x2a5ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2a5ae8:
    // 0x2a5ae8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a5aec:
    // 0x2a5aec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2a5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a5af0:
    // 0x2a5af0: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2a5af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_2a5af4:
    // 0x2a5af4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a5af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a5af8:
    // 0x2a5af8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a5af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a5afc:
    // 0x2a5afc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2a5b00:
    if (ctx->pc == 0x2A5B00u) {
        ctx->pc = 0x2A5B04u;
        goto label_2a5b04;
    }
    ctx->pc = 0x2A5AFCu;
    {
        const bool branch_taken_0x2a5afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5afc) {
            ctx->pc = 0x2A5B58u;
            goto label_2a5b58;
        }
    }
    ctx->pc = 0x2A5B04u;
label_2a5b04:
    // 0x2a5b04: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2a5b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2a5b08:
    // 0x2a5b08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a5b08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2a5b0c:
    // 0x2a5b0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a5b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a5b10:
    // 0x2a5b10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a5b14:
    if (ctx->pc == 0x2A5B14u) {
        ctx->pc = 0x2A5B18u;
        goto label_2a5b18;
    }
    ctx->pc = 0x2A5B10u;
    {
        const bool branch_taken_0x2a5b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5b10) {
            ctx->pc = 0x2A5B28u;
            goto label_2a5b28;
        }
    }
    ctx->pc = 0x2A5B18u;
label_2a5b18:
    // 0x2a5b18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a5b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a5b1c:
    // 0x2a5b1c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2a5b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2a5b20:
    // 0x2a5b20: 0x320f809  jalr        $t9
label_2a5b24:
    if (ctx->pc == 0x2A5B24u) {
        ctx->pc = 0x2A5B24u;
            // 0x2a5b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A5B28u;
        goto label_2a5b28;
    }
    ctx->pc = 0x2A5B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A5B28u);
        ctx->pc = 0x2A5B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5B20u;
            // 0x2a5b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A5B28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A5B28u; }
            if (ctx->pc != 0x2A5B28u) { return; }
        }
        }
    }
    ctx->pc = 0x2A5B28u;
label_2a5b28:
    // 0x2a5b28: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2a5b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2a5b2c:
    // 0x2a5b2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a5b2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2a5b30:
    // 0x2a5b30: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2a5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2a5b34:
    // 0x2a5b34: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2a5b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2a5b38:
    // 0x2a5b38: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2a5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2a5b3c:
    // 0x2a5b3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a5b40:
    // 0x2a5b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a5b44:
    // 0x2a5b44: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2a5b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_2a5b48:
    // 0x2a5b48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a5b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a5b4c:
    // 0x2a5b4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a5b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a5b50:
    // 0x2a5b50: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_2a5b54:
    if (ctx->pc == 0x2A5B54u) {
        ctx->pc = 0x2A5B54u;
            // 0x2a5b54: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x2A5B58u;
        goto label_2a5b58;
    }
    ctx->pc = 0x2A5B50u;
    {
        const bool branch_taken_0x2a5b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5b50) {
            ctx->pc = 0x2A5B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5B50u;
            // 0x2a5b54: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a5b08;
        }
    }
    ctx->pc = 0x2A5B58u;
label_2a5b58:
    // 0x2a5b58: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x2a5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_2a5b5c:
    // 0x2a5b5c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2a5b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_2a5b60:
    // 0x2a5b60: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x2a5b60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_2a5b64:
    // 0x2a5b64: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x2a5b64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_2a5b68:
    // 0x2a5b68: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x2a5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_2a5b6c:
    // 0x2a5b6c: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x2a5b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a5b70:
    // 0x2a5b70: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2a5b70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2a5b74:
    // 0x2a5b74: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x2a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_2a5b78:
    // 0x2a5b78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2a5b7c:
    // 0x2a5b7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a5b80:
    // 0x2a5b80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a5b84:
    if (ctx->pc == 0x2A5B84u) {
        ctx->pc = 0x2A5B88u;
        goto label_2a5b88;
    }
    ctx->pc = 0x2A5B80u;
    {
        const bool branch_taken_0x2a5b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5b80) {
            ctx->pc = 0x2A5B98u;
            goto label_2a5b98;
        }
    }
    ctx->pc = 0x2A5B88u;
label_2a5b88:
    // 0x2a5b88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a5b88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a5b8c:
    // 0x2a5b8c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2a5b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2a5b90:
    // 0x2a5b90: 0x320f809  jalr        $t9
label_2a5b94:
    if (ctx->pc == 0x2A5B94u) {
        ctx->pc = 0x2A5B94u;
            // 0x2a5b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A5B98u;
        goto label_2a5b98;
    }
    ctx->pc = 0x2A5B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A5B98u);
        ctx->pc = 0x2A5B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5B90u;
            // 0x2a5b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A5B98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A5B98u; }
            if (ctx->pc != 0x2A5B98u) { return; }
        }
        }
    }
    ctx->pc = 0x2A5B98u;
label_2a5b98:
    // 0x2a5b98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a5b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a5b9c:
    // 0x2a5b9c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x2a5b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_2a5ba0:
    // 0x2a5ba0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2a5ba4:
    if (ctx->pc == 0x2A5BA4u) {
        ctx->pc = 0x2A5BA4u;
            // 0x2a5ba4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x2A5BA8u;
        goto label_2a5ba8;
    }
    ctx->pc = 0x2A5BA0u;
    {
        const bool branch_taken_0x2a5ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5BA0u;
            // 0x2a5ba4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ba0) {
            ctx->pc = 0x2A5B74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a5b74;
        }
    }
    ctx->pc = 0x2A5BA8u;
label_2a5ba8:
    // 0x2a5ba8: 0x26620058  addiu       $v0, $s3, 0x58
    ctx->pc = 0x2a5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_2a5bac:
    // 0x2a5bac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2a5bb0:
    if (ctx->pc == 0x2A5BB0u) {
        ctx->pc = 0x2A5BB0u;
            // 0x2a5bb0: 0xae60005c  sw          $zero, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x2A5BB4u;
        goto label_2a5bb4;
    }
    ctx->pc = 0x2A5BACu;
    {
        const bool branch_taken_0x2a5bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5BACu;
            // 0x2a5bb0: 0xae60005c  sw          $zero, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5bac) {
            ctx->pc = 0x2A5BD8u;
            goto label_2a5bd8;
        }
    }
    ctx->pc = 0x2A5BB4u;
label_2a5bb4:
    // 0x2a5bb4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2a5bb8:
    if (ctx->pc == 0x2A5BB8u) {
        ctx->pc = 0x2A5BB8u;
            // 0x2a5bb8: 0x2662004c  addiu       $v0, $s3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
        ctx->pc = 0x2A5BBCu;
        goto label_2a5bbc;
    }
    ctx->pc = 0x2A5BB4u;
    {
        const bool branch_taken_0x2a5bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5bb4) {
            ctx->pc = 0x2A5BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5BB4u;
            // 0x2a5bb8: 0x2662004c  addiu       $v0, $s3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5BDCu;
            goto label_2a5bdc;
        }
    }
    ctx->pc = 0x2A5BBCu;
label_2a5bbc:
    // 0x2a5bbc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a5bc0:
    if (ctx->pc == 0x2A5BC0u) {
        ctx->pc = 0x2A5BC4u;
        goto label_2a5bc4;
    }
    ctx->pc = 0x2A5BBCu;
    {
        const bool branch_taken_0x2a5bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5bbc) {
            ctx->pc = 0x2A5BD8u;
            goto label_2a5bd8;
        }
    }
    ctx->pc = 0x2A5BC4u;
label_2a5bc4:
    // 0x2a5bc4: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x2a5bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_2a5bc8:
    // 0x2a5bc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a5bcc:
    if (ctx->pc == 0x2A5BCCu) {
        ctx->pc = 0x2A5BD0u;
        goto label_2a5bd0;
    }
    ctx->pc = 0x2A5BC8u;
    {
        const bool branch_taken_0x2a5bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5bc8) {
            ctx->pc = 0x2A5BD8u;
            goto label_2a5bd8;
        }
    }
    ctx->pc = 0x2A5BD0u;
label_2a5bd0:
    // 0x2a5bd0: 0xc0400a8  jal         func_1002A0
label_2a5bd4:
    if (ctx->pc == 0x2A5BD4u) {
        ctx->pc = 0x2A5BD8u;
        goto label_2a5bd8;
    }
    ctx->pc = 0x2A5BD0u;
    SET_GPR_U32(ctx, 31, 0x2A5BD8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5BD8u; }
        if (ctx->pc != 0x2A5BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5BD8u; }
        if (ctx->pc != 0x2A5BD8u) { return; }
    }
    ctx->pc = 0x2A5BD8u;
label_2a5bd8:
    // 0x2a5bd8: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x2a5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
label_2a5bdc:
    // 0x2a5bdc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2a5be0:
    if (ctx->pc == 0x2A5BE0u) {
        ctx->pc = 0x2A5BE0u;
            // 0x2a5be0: 0x26620040  addiu       $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x2A5BE4u;
        goto label_2a5be4;
    }
    ctx->pc = 0x2A5BDCu;
    {
        const bool branch_taken_0x2a5bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5bdc) {
            ctx->pc = 0x2A5BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5BDCu;
            // 0x2a5be0: 0x26620040  addiu       $v0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5C0Cu;
            goto label_2a5c0c;
        }
    }
    ctx->pc = 0x2A5BE4u;
label_2a5be4:
    // 0x2a5be4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a5be8:
    if (ctx->pc == 0x2A5BE8u) {
        ctx->pc = 0x2A5BECu;
        goto label_2a5bec;
    }
    ctx->pc = 0x2A5BE4u;
    {
        const bool branch_taken_0x2a5be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5be4) {
            ctx->pc = 0x2A5C08u;
            goto label_2a5c08;
        }
    }
    ctx->pc = 0x2A5BECu;
label_2a5bec:
    // 0x2a5bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a5bf0:
    if (ctx->pc == 0x2A5BF0u) {
        ctx->pc = 0x2A5BF4u;
        goto label_2a5bf4;
    }
    ctx->pc = 0x2A5BECu;
    {
        const bool branch_taken_0x2a5bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5bec) {
            ctx->pc = 0x2A5C08u;
            goto label_2a5c08;
        }
    }
    ctx->pc = 0x2A5BF4u;
label_2a5bf4:
    // 0x2a5bf4: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x2a5bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_2a5bf8:
    // 0x2a5bf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a5bfc:
    if (ctx->pc == 0x2A5BFCu) {
        ctx->pc = 0x2A5C00u;
        goto label_2a5c00;
    }
    ctx->pc = 0x2A5BF8u;
    {
        const bool branch_taken_0x2a5bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5bf8) {
            ctx->pc = 0x2A5C08u;
            goto label_2a5c08;
        }
    }
    ctx->pc = 0x2A5C00u;
label_2a5c00:
    // 0x2a5c00: 0xc0400a8  jal         func_1002A0
label_2a5c04:
    if (ctx->pc == 0x2A5C04u) {
        ctx->pc = 0x2A5C08u;
        goto label_2a5c08;
    }
    ctx->pc = 0x2A5C00u;
    SET_GPR_U32(ctx, 31, 0x2A5C08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C08u; }
        if (ctx->pc != 0x2A5C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C08u; }
        if (ctx->pc != 0x2A5C08u) { return; }
    }
    ctx->pc = 0x2A5C08u;
label_2a5c08:
    // 0x2a5c08: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x2a5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_2a5c0c:
    // 0x2a5c0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2a5c10:
    if (ctx->pc == 0x2A5C10u) {
        ctx->pc = 0x2A5C10u;
            // 0x2a5c10: 0x26620034  addiu       $v0, $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
        ctx->pc = 0x2A5C14u;
        goto label_2a5c14;
    }
    ctx->pc = 0x2A5C0Cu;
    {
        const bool branch_taken_0x2a5c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c0c) {
            ctx->pc = 0x2A5C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C0Cu;
            // 0x2a5c10: 0x26620034  addiu       $v0, $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5C3Cu;
            goto label_2a5c3c;
        }
    }
    ctx->pc = 0x2A5C14u;
label_2a5c14:
    // 0x2a5c14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a5c18:
    if (ctx->pc == 0x2A5C18u) {
        ctx->pc = 0x2A5C1Cu;
        goto label_2a5c1c;
    }
    ctx->pc = 0x2A5C14u;
    {
        const bool branch_taken_0x2a5c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c14) {
            ctx->pc = 0x2A5C38u;
            goto label_2a5c38;
        }
    }
    ctx->pc = 0x2A5C1Cu;
label_2a5c1c:
    // 0x2a5c1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a5c20:
    if (ctx->pc == 0x2A5C20u) {
        ctx->pc = 0x2A5C24u;
        goto label_2a5c24;
    }
    ctx->pc = 0x2A5C1Cu;
    {
        const bool branch_taken_0x2a5c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c1c) {
            ctx->pc = 0x2A5C38u;
            goto label_2a5c38;
        }
    }
    ctx->pc = 0x2A5C24u;
label_2a5c24:
    // 0x2a5c24: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x2a5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_2a5c28:
    // 0x2a5c28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a5c2c:
    if (ctx->pc == 0x2A5C2Cu) {
        ctx->pc = 0x2A5C30u;
        goto label_2a5c30;
    }
    ctx->pc = 0x2A5C28u;
    {
        const bool branch_taken_0x2a5c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c28) {
            ctx->pc = 0x2A5C38u;
            goto label_2a5c38;
        }
    }
    ctx->pc = 0x2A5C30u;
label_2a5c30:
    // 0x2a5c30: 0xc0400a8  jal         func_1002A0
label_2a5c34:
    if (ctx->pc == 0x2A5C34u) {
        ctx->pc = 0x2A5C38u;
        goto label_2a5c38;
    }
    ctx->pc = 0x2A5C30u;
    SET_GPR_U32(ctx, 31, 0x2A5C38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C38u; }
        if (ctx->pc != 0x2A5C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C38u; }
        if (ctx->pc != 0x2A5C38u) { return; }
    }
    ctx->pc = 0x2A5C38u;
label_2a5c38:
    // 0x2a5c38: 0x26620034  addiu       $v0, $s3, 0x34
    ctx->pc = 0x2a5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
label_2a5c3c:
    // 0x2a5c3c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2a5c40:
    if (ctx->pc == 0x2A5C40u) {
        ctx->pc = 0x2A5C40u;
            // 0x2a5c40: 0x26620028  addiu       $v0, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->pc = 0x2A5C44u;
        goto label_2a5c44;
    }
    ctx->pc = 0x2A5C3Cu;
    {
        const bool branch_taken_0x2a5c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c3c) {
            ctx->pc = 0x2A5C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C3Cu;
            // 0x2a5c40: 0x26620028  addiu       $v0, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5C6Cu;
            goto label_2a5c6c;
        }
    }
    ctx->pc = 0x2A5C44u;
label_2a5c44:
    // 0x2a5c44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a5c48:
    if (ctx->pc == 0x2A5C48u) {
        ctx->pc = 0x2A5C4Cu;
        goto label_2a5c4c;
    }
    ctx->pc = 0x2A5C44u;
    {
        const bool branch_taken_0x2a5c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c44) {
            ctx->pc = 0x2A5C68u;
            goto label_2a5c68;
        }
    }
    ctx->pc = 0x2A5C4Cu;
label_2a5c4c:
    // 0x2a5c4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a5c50:
    if (ctx->pc == 0x2A5C50u) {
        ctx->pc = 0x2A5C54u;
        goto label_2a5c54;
    }
    ctx->pc = 0x2A5C4Cu;
    {
        const bool branch_taken_0x2a5c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c4c) {
            ctx->pc = 0x2A5C68u;
            goto label_2a5c68;
        }
    }
    ctx->pc = 0x2A5C54u;
label_2a5c54:
    // 0x2a5c54: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x2a5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_2a5c58:
    // 0x2a5c58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a5c5c:
    if (ctx->pc == 0x2A5C5Cu) {
        ctx->pc = 0x2A5C60u;
        goto label_2a5c60;
    }
    ctx->pc = 0x2A5C58u;
    {
        const bool branch_taken_0x2a5c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c58) {
            ctx->pc = 0x2A5C68u;
            goto label_2a5c68;
        }
    }
    ctx->pc = 0x2A5C60u;
label_2a5c60:
    // 0x2a5c60: 0xc0400a8  jal         func_1002A0
label_2a5c64:
    if (ctx->pc == 0x2A5C64u) {
        ctx->pc = 0x2A5C68u;
        goto label_2a5c68;
    }
    ctx->pc = 0x2A5C60u;
    SET_GPR_U32(ctx, 31, 0x2A5C68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C68u; }
        if (ctx->pc != 0x2A5C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C68u; }
        if (ctx->pc != 0x2A5C68u) { return; }
    }
    ctx->pc = 0x2A5C68u;
label_2a5c68:
    // 0x2a5c68: 0x26620028  addiu       $v0, $s3, 0x28
    ctx->pc = 0x2a5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_2a5c6c:
    // 0x2a5c6c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2a5c70:
    if (ctx->pc == 0x2A5C70u) {
        ctx->pc = 0x2A5C70u;
            // 0x2a5c70: 0x2662001c  addiu       $v0, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->pc = 0x2A5C74u;
        goto label_2a5c74;
    }
    ctx->pc = 0x2A5C6Cu;
    {
        const bool branch_taken_0x2a5c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c6c) {
            ctx->pc = 0x2A5C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C6Cu;
            // 0x2a5c70: 0x2662001c  addiu       $v0, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5C9Cu;
            goto label_2a5c9c;
        }
    }
    ctx->pc = 0x2A5C74u;
label_2a5c74:
    // 0x2a5c74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a5c78:
    if (ctx->pc == 0x2A5C78u) {
        ctx->pc = 0x2A5C7Cu;
        goto label_2a5c7c;
    }
    ctx->pc = 0x2A5C74u;
    {
        const bool branch_taken_0x2a5c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c74) {
            ctx->pc = 0x2A5C98u;
            goto label_2a5c98;
        }
    }
    ctx->pc = 0x2A5C7Cu;
label_2a5c7c:
    // 0x2a5c7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a5c80:
    if (ctx->pc == 0x2A5C80u) {
        ctx->pc = 0x2A5C84u;
        goto label_2a5c84;
    }
    ctx->pc = 0x2A5C7Cu;
    {
        const bool branch_taken_0x2a5c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c7c) {
            ctx->pc = 0x2A5C98u;
            goto label_2a5c98;
        }
    }
    ctx->pc = 0x2A5C84u;
label_2a5c84:
    // 0x2a5c84: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x2a5c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_2a5c88:
    // 0x2a5c88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a5c8c:
    if (ctx->pc == 0x2A5C8Cu) {
        ctx->pc = 0x2A5C90u;
        goto label_2a5c90;
    }
    ctx->pc = 0x2A5C88u;
    {
        const bool branch_taken_0x2a5c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c88) {
            ctx->pc = 0x2A5C98u;
            goto label_2a5c98;
        }
    }
    ctx->pc = 0x2A5C90u;
label_2a5c90:
    // 0x2a5c90: 0xc0400a8  jal         func_1002A0
label_2a5c94:
    if (ctx->pc == 0x2A5C94u) {
        ctx->pc = 0x2A5C98u;
        goto label_2a5c98;
    }
    ctx->pc = 0x2A5C90u;
    SET_GPR_U32(ctx, 31, 0x2A5C98u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C98u; }
        if (ctx->pc != 0x2A5C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C98u; }
        if (ctx->pc != 0x2A5C98u) { return; }
    }
    ctx->pc = 0x2A5C98u;
label_2a5c98:
    // 0x2a5c98: 0x2662001c  addiu       $v0, $s3, 0x1C
    ctx->pc = 0x2a5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_2a5c9c:
    // 0x2a5c9c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2a5ca0:
    if (ctx->pc == 0x2A5CA0u) {
        ctx->pc = 0x2A5CA0u;
            // 0x2a5ca0: 0x26620010  addiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x2A5CA4u;
        goto label_2a5ca4;
    }
    ctx->pc = 0x2A5C9Cu;
    {
        const bool branch_taken_0x2a5c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c9c) {
            ctx->pc = 0x2A5CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C9Cu;
            // 0x2a5ca0: 0x26620010  addiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5CCCu;
            goto label_2a5ccc;
        }
    }
    ctx->pc = 0x2A5CA4u;
label_2a5ca4:
    // 0x2a5ca4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a5ca8:
    if (ctx->pc == 0x2A5CA8u) {
        ctx->pc = 0x2A5CACu;
        goto label_2a5cac;
    }
    ctx->pc = 0x2A5CA4u;
    {
        const bool branch_taken_0x2a5ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ca4) {
            ctx->pc = 0x2A5CC8u;
            goto label_2a5cc8;
        }
    }
    ctx->pc = 0x2A5CACu;
label_2a5cac:
    // 0x2a5cac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a5cb0:
    if (ctx->pc == 0x2A5CB0u) {
        ctx->pc = 0x2A5CB4u;
        goto label_2a5cb4;
    }
    ctx->pc = 0x2A5CACu;
    {
        const bool branch_taken_0x2a5cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5cac) {
            ctx->pc = 0x2A5CC8u;
            goto label_2a5cc8;
        }
    }
    ctx->pc = 0x2A5CB4u;
label_2a5cb4:
    // 0x2a5cb4: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x2a5cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2a5cb8:
    // 0x2a5cb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a5cbc:
    if (ctx->pc == 0x2A5CBCu) {
        ctx->pc = 0x2A5CC0u;
        goto label_2a5cc0;
    }
    ctx->pc = 0x2A5CB8u;
    {
        const bool branch_taken_0x2a5cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5cb8) {
            ctx->pc = 0x2A5CC8u;
            goto label_2a5cc8;
        }
    }
    ctx->pc = 0x2A5CC0u;
label_2a5cc0:
    // 0x2a5cc0: 0xc0400a8  jal         func_1002A0
label_2a5cc4:
    if (ctx->pc == 0x2A5CC4u) {
        ctx->pc = 0x2A5CC8u;
        goto label_2a5cc8;
    }
    ctx->pc = 0x2A5CC0u;
    SET_GPR_U32(ctx, 31, 0x2A5CC8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5CC8u; }
        if (ctx->pc != 0x2A5CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5CC8u; }
        if (ctx->pc != 0x2A5CC8u) { return; }
    }
    ctx->pc = 0x2A5CC8u;
label_2a5cc8:
    // 0x2a5cc8: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x2a5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2a5ccc:
    // 0x2a5ccc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2a5cd0:
    if (ctx->pc == 0x2A5CD0u) {
        ctx->pc = 0x2A5CD0u;
            // 0x2a5cd0: 0x26620004  addiu       $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2A5CD4u;
        goto label_2a5cd4;
    }
    ctx->pc = 0x2A5CCCu;
    {
        const bool branch_taken_0x2a5ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ccc) {
            ctx->pc = 0x2A5CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5CCCu;
            // 0x2a5cd0: 0x26620004  addiu       $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5CFCu;
            goto label_2a5cfc;
        }
    }
    ctx->pc = 0x2A5CD4u;
label_2a5cd4:
    // 0x2a5cd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a5cd8:
    if (ctx->pc == 0x2A5CD8u) {
        ctx->pc = 0x2A5CDCu;
        goto label_2a5cdc;
    }
    ctx->pc = 0x2A5CD4u;
    {
        const bool branch_taken_0x2a5cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5cd4) {
            ctx->pc = 0x2A5CF8u;
            goto label_2a5cf8;
        }
    }
    ctx->pc = 0x2A5CDCu;
label_2a5cdc:
    // 0x2a5cdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a5ce0:
    if (ctx->pc == 0x2A5CE0u) {
        ctx->pc = 0x2A5CE4u;
        goto label_2a5ce4;
    }
    ctx->pc = 0x2A5CDCu;
    {
        const bool branch_taken_0x2a5cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5cdc) {
            ctx->pc = 0x2A5CF8u;
            goto label_2a5cf8;
        }
    }
    ctx->pc = 0x2A5CE4u;
label_2a5ce4:
    // 0x2a5ce4: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2a5ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2a5ce8:
    // 0x2a5ce8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a5cec:
    if (ctx->pc == 0x2A5CECu) {
        ctx->pc = 0x2A5CF0u;
        goto label_2a5cf0;
    }
    ctx->pc = 0x2A5CE8u;
    {
        const bool branch_taken_0x2a5ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ce8) {
            ctx->pc = 0x2A5CF8u;
            goto label_2a5cf8;
        }
    }
    ctx->pc = 0x2A5CF0u;
label_2a5cf0:
    // 0x2a5cf0: 0xc0400a8  jal         func_1002A0
label_2a5cf4:
    if (ctx->pc == 0x2A5CF4u) {
        ctx->pc = 0x2A5CF8u;
        goto label_2a5cf8;
    }
    ctx->pc = 0x2A5CF0u;
    SET_GPR_U32(ctx, 31, 0x2A5CF8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5CF8u; }
        if (ctx->pc != 0x2A5CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5CF8u; }
        if (ctx->pc != 0x2A5CF8u) { return; }
    }
    ctx->pc = 0x2A5CF8u;
label_2a5cf8:
    // 0x2a5cf8: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x2a5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2a5cfc:
    // 0x2a5cfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2a5d00:
    if (ctx->pc == 0x2A5D00u) {
        ctx->pc = 0x2A5D04u;
        goto label_2a5d04;
    }
    ctx->pc = 0x2A5CFCu;
    {
        const bool branch_taken_0x2a5cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5cfc) {
            ctx->pc = 0x2A5D28u;
            goto label_2a5d28;
        }
    }
    ctx->pc = 0x2A5D04u;
label_2a5d04:
    // 0x2a5d04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2a5d08:
    if (ctx->pc == 0x2A5D08u) {
        ctx->pc = 0x2A5D0Cu;
        goto label_2a5d0c;
    }
    ctx->pc = 0x2A5D04u;
    {
        const bool branch_taken_0x2a5d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5d04) {
            ctx->pc = 0x2A5D28u;
            goto label_2a5d28;
        }
    }
    ctx->pc = 0x2A5D0Cu;
label_2a5d0c:
    // 0x2a5d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a5d10:
    if (ctx->pc == 0x2A5D10u) {
        ctx->pc = 0x2A5D14u;
        goto label_2a5d14;
    }
    ctx->pc = 0x2A5D0Cu;
    {
        const bool branch_taken_0x2a5d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5d0c) {
            ctx->pc = 0x2A5D28u;
            goto label_2a5d28;
        }
    }
    ctx->pc = 0x2A5D14u;
label_2a5d14:
    // 0x2a5d14: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x2a5d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2a5d18:
    // 0x2a5d18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a5d1c:
    if (ctx->pc == 0x2A5D1Cu) {
        ctx->pc = 0x2A5D20u;
        goto label_2a5d20;
    }
    ctx->pc = 0x2A5D18u;
    {
        const bool branch_taken_0x2a5d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5d18) {
            ctx->pc = 0x2A5D28u;
            goto label_2a5d28;
        }
    }
    ctx->pc = 0x2A5D20u;
label_2a5d20:
    // 0x2a5d20: 0xc0400a8  jal         func_1002A0
label_2a5d24:
    if (ctx->pc == 0x2A5D24u) {
        ctx->pc = 0x2A5D28u;
        goto label_2a5d28;
    }
    ctx->pc = 0x2A5D20u;
    SET_GPR_U32(ctx, 31, 0x2A5D28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D28u; }
        if (ctx->pc != 0x2A5D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D28u; }
        if (ctx->pc != 0x2A5D28u) { return; }
    }
    ctx->pc = 0x2A5D28u;
label_2a5d28:
    // 0x2a5d28: 0x52600007  beql        $s3, $zero, . + 4 + (0x7 << 2)
label_2a5d2c:
    if (ctx->pc == 0x2A5D2Cu) {
        ctx->pc = 0x2A5D2Cu;
            // 0x2a5d2c: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x2A5D30u;
        goto label_2a5d30;
    }
    ctx->pc = 0x2A5D28u;
    {
        const bool branch_taken_0x2a5d28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5d28) {
            ctx->pc = 0x2A5D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5D28u;
            // 0x2a5d2c: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5D48u;
            goto label_2a5d48;
        }
    }
    ctx->pc = 0x2A5D30u;
label_2a5d30:
    // 0x2a5d30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a5d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2a5d34:
    // 0x2a5d34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a5d38:
    // 0x2a5d38: 0x2463fba0  addiu       $v1, $v1, -0x460
    ctx->pc = 0x2a5d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966176));
label_2a5d3c:
    // 0x2a5d3c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2a5d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2a5d40:
    // 0x2a5d40: 0xac40e400  sw          $zero, -0x1C00($v0)
    ctx->pc = 0x2a5d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960128), GPR_U32(ctx, 0));
label_2a5d44:
    // 0x2a5d44: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2a5d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2a5d48:
    // 0x2a5d48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a5d48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a5d4c:
    // 0x2a5d4c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2a5d50:
    if (ctx->pc == 0x2A5D50u) {
        ctx->pc = 0x2A5D50u;
            // 0x2a5d50: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D54u;
        goto label_2a5d54;
    }
    ctx->pc = 0x2A5D4Cu;
    {
        const bool branch_taken_0x2a5d4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a5d4c) {
            ctx->pc = 0x2A5D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5D4Cu;
            // 0x2a5d50: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5D60u;
            goto label_2a5d60;
        }
    }
    ctx->pc = 0x2A5D54u;
label_2a5d54:
    // 0x2a5d54: 0xc0400a8  jal         func_1002A0
label_2a5d58:
    if (ctx->pc == 0x2A5D58u) {
        ctx->pc = 0x2A5D58u;
            // 0x2a5d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D5Cu;
        goto label_2a5d5c;
    }
    ctx->pc = 0x2A5D54u;
    SET_GPR_U32(ctx, 31, 0x2A5D5Cu);
    ctx->pc = 0x2A5D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5D54u;
            // 0x2a5d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D5Cu; }
        if (ctx->pc != 0x2A5D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D5Cu; }
        if (ctx->pc != 0x2A5D5Cu) { return; }
    }
    ctx->pc = 0x2A5D5Cu;
label_2a5d5c:
    // 0x2a5d5c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2a5d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d60:
    // 0x2a5d60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a5d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a5d64:
    // 0x2a5d64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a5d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a5d68:
    // 0x2a5d68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a5d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a5d6c:
    // 0x2a5d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a5d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5d70:
    // 0x2a5d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5d74:
    // 0x2a5d74: 0x3e00008  jr          $ra
label_2a5d78:
    if (ctx->pc == 0x2A5D78u) {
        ctx->pc = 0x2A5D78u;
            // 0x2a5d78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2A5D7Cu;
        goto label_2a5d7c;
    }
    ctx->pc = 0x2A5D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5D74u;
            // 0x2a5d78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5D7Cu;
label_2a5d7c:
    // 0x2a5d7c: 0x0  nop
    ctx->pc = 0x2a5d7cu;
    // NOP
label_2a5d80:
    // 0x2a5d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a5d84:
    // 0x2a5d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a5d88:
    // 0x2a5d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a5d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a5d8c:
    // 0x2a5d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a5d90:
    // 0x2a5d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a5d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5d94:
    // 0x2a5d94: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2a5d98:
    if (ctx->pc == 0x2A5D98u) {
        ctx->pc = 0x2A5D98u;
            // 0x2a5d98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D9Cu;
        goto label_2a5d9c;
    }
    ctx->pc = 0x2A5D94u;
    {
        const bool branch_taken_0x2a5d94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5D94u;
            // 0x2a5d98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5d94) {
            ctx->pc = 0x2A5DC8u;
            goto label_2a5dc8;
        }
    }
    ctx->pc = 0x2A5D9Cu;
label_2a5d9c:
    // 0x2a5d9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a5da0:
    // 0x2a5da0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5da4:
    // 0x2a5da4: 0x24422f20  addiu       $v0, $v0, 0x2F20
    ctx->pc = 0x2a5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12064));
label_2a5da8:
    // 0x2a5da8: 0xc0a9328  jal         func_2A4CA0
label_2a5dac:
    if (ctx->pc == 0x2A5DACu) {
        ctx->pc = 0x2A5DACu;
            // 0x2a5dac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2A5DB0u;
        goto label_2a5db0;
    }
    ctx->pc = 0x2A5DA8u;
    SET_GPR_U32(ctx, 31, 0x2A5DB0u);
    ctx->pc = 0x2A5DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5DA8u;
            // 0x2a5dac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CA0u;
    if (runtime->hasFunction(0x2A4CA0u)) {
        auto targetFn = runtime->lookupFunction(0x2A4CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5DB0u; }
        if (ctx->pc != 0x2A5DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4CA0_0x2a4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5DB0u; }
        if (ctx->pc != 0x2A5DB0u) { return; }
    }
    ctx->pc = 0x2A5DB0u;
label_2a5db0:
    // 0x2a5db0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a5db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2a5db4:
    // 0x2a5db4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a5db4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a5db8:
    // 0x2a5db8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2a5dbc:
    if (ctx->pc == 0x2A5DBCu) {
        ctx->pc = 0x2A5DBCu;
            // 0x2a5dbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DC0u;
        goto label_2a5dc0;
    }
    ctx->pc = 0x2A5DB8u;
    {
        const bool branch_taken_0x2a5db8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a5db8) {
            ctx->pc = 0x2A5DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5DB8u;
            // 0x2a5dbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5DCCu;
            goto label_2a5dcc;
        }
    }
    ctx->pc = 0x2A5DC0u;
label_2a5dc0:
    // 0x2a5dc0: 0xc0400a8  jal         func_1002A0
label_2a5dc4:
    if (ctx->pc == 0x2A5DC4u) {
        ctx->pc = 0x2A5DC4u;
            // 0x2a5dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DC8u;
        goto label_2a5dc8;
    }
    ctx->pc = 0x2A5DC0u;
    SET_GPR_U32(ctx, 31, 0x2A5DC8u);
    ctx->pc = 0x2A5DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5DC0u;
            // 0x2a5dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5DC8u; }
        if (ctx->pc != 0x2A5DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5DC8u; }
        if (ctx->pc != 0x2A5DC8u) { return; }
    }
    ctx->pc = 0x2A5DC8u;
label_2a5dc8:
    // 0x2a5dc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a5dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a5dcc:
    // 0x2a5dcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a5dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a5dd0:
    // 0x2a5dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a5dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5dd4:
    // 0x2a5dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5dd8:
    // 0x2a5dd8: 0x3e00008  jr          $ra
label_2a5ddc:
    if (ctx->pc == 0x2A5DDCu) {
        ctx->pc = 0x2A5DDCu;
            // 0x2a5ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A5DE0u;
        goto label_2a5de0;
    }
    ctx->pc = 0x2A5DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5DD8u;
            // 0x2a5ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5DE0u;
label_2a5de0:
    // 0x2a5de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a5de4:
    // 0x2a5de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a5de8:
    // 0x2a5de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a5dec:
    // 0x2a5dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a5decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5df0:
    // 0x2a5df0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2a5df4:
    if (ctx->pc == 0x2A5DF4u) {
        ctx->pc = 0x2A5DF4u;
            // 0x2a5df4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A5DF8u;
        goto label_2a5df8;
    }
    ctx->pc = 0x2A5DF0u;
    {
        const bool branch_taken_0x2a5df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5df0) {
            ctx->pc = 0x2A5DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5DF0u;
            // 0x2a5df4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5E1Cu;
            goto label_2a5e1c;
        }
    }
    ctx->pc = 0x2A5DF8u;
label_2a5df8:
    // 0x2a5df8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2a5df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2a5dfc:
    // 0x2a5dfc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2a5e00:
    // 0x2a5e00: 0x2463fb70  addiu       $v1, $v1, -0x490
    ctx->pc = 0x2a5e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966128));
label_2a5e04:
    // 0x2a5e04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a5e04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a5e08:
    // 0x2a5e08: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2a5e0c:
    if (ctx->pc == 0x2A5E0Cu) {
        ctx->pc = 0x2A5E0Cu;
            // 0x2a5e0c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2A5E10u;
        goto label_2a5e10;
    }
    ctx->pc = 0x2A5E08u;
    {
        const bool branch_taken_0x2a5e08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A5E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E08u;
            // 0x2a5e0c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5e08) {
            ctx->pc = 0x2A5E18u;
            goto label_2a5e18;
        }
    }
    ctx->pc = 0x2A5E10u;
label_2a5e10:
    // 0x2a5e10: 0xc0400a8  jal         func_1002A0
label_2a5e14:
    if (ctx->pc == 0x2A5E14u) {
        ctx->pc = 0x2A5E18u;
        goto label_2a5e18;
    }
    ctx->pc = 0x2A5E10u;
    SET_GPR_U32(ctx, 31, 0x2A5E18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E18u; }
        if (ctx->pc != 0x2A5E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5E18u; }
        if (ctx->pc != 0x2A5E18u) { return; }
    }
    ctx->pc = 0x2A5E18u;
label_2a5e18:
    // 0x2a5e18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a5e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5e1c:
    // 0x2a5e1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5e20:
    // 0x2a5e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5e24:
    // 0x2a5e24: 0x3e00008  jr          $ra
label_2a5e28:
    if (ctx->pc == 0x2A5E28u) {
        ctx->pc = 0x2A5E28u;
            // 0x2a5e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A5E2Cu;
        goto label_2a5e2c;
    }
    ctx->pc = 0x2A5E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5E24u;
            // 0x2a5e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5E2Cu;
label_2a5e2c:
    // 0x2a5e2c: 0x0  nop
    ctx->pc = 0x2a5e2cu;
    // NOP
}
