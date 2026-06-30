#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00419C90
// Address: 0x419c90 - 0x419fc0
void sub_00419C90_0x419c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419C90_0x419c90");
#endif

    switch (ctx->pc) {
        case 0x419c90u: goto label_419c90;
        case 0x419c94u: goto label_419c94;
        case 0x419c98u: goto label_419c98;
        case 0x419c9cu: goto label_419c9c;
        case 0x419ca0u: goto label_419ca0;
        case 0x419ca4u: goto label_419ca4;
        case 0x419ca8u: goto label_419ca8;
        case 0x419cacu: goto label_419cac;
        case 0x419cb0u: goto label_419cb0;
        case 0x419cb4u: goto label_419cb4;
        case 0x419cb8u: goto label_419cb8;
        case 0x419cbcu: goto label_419cbc;
        case 0x419cc0u: goto label_419cc0;
        case 0x419cc4u: goto label_419cc4;
        case 0x419cc8u: goto label_419cc8;
        case 0x419cccu: goto label_419ccc;
        case 0x419cd0u: goto label_419cd0;
        case 0x419cd4u: goto label_419cd4;
        case 0x419cd8u: goto label_419cd8;
        case 0x419cdcu: goto label_419cdc;
        case 0x419ce0u: goto label_419ce0;
        case 0x419ce4u: goto label_419ce4;
        case 0x419ce8u: goto label_419ce8;
        case 0x419cecu: goto label_419cec;
        case 0x419cf0u: goto label_419cf0;
        case 0x419cf4u: goto label_419cf4;
        case 0x419cf8u: goto label_419cf8;
        case 0x419cfcu: goto label_419cfc;
        case 0x419d00u: goto label_419d00;
        case 0x419d04u: goto label_419d04;
        case 0x419d08u: goto label_419d08;
        case 0x419d0cu: goto label_419d0c;
        case 0x419d10u: goto label_419d10;
        case 0x419d14u: goto label_419d14;
        case 0x419d18u: goto label_419d18;
        case 0x419d1cu: goto label_419d1c;
        case 0x419d20u: goto label_419d20;
        case 0x419d24u: goto label_419d24;
        case 0x419d28u: goto label_419d28;
        case 0x419d2cu: goto label_419d2c;
        case 0x419d30u: goto label_419d30;
        case 0x419d34u: goto label_419d34;
        case 0x419d38u: goto label_419d38;
        case 0x419d3cu: goto label_419d3c;
        case 0x419d40u: goto label_419d40;
        case 0x419d44u: goto label_419d44;
        case 0x419d48u: goto label_419d48;
        case 0x419d4cu: goto label_419d4c;
        case 0x419d50u: goto label_419d50;
        case 0x419d54u: goto label_419d54;
        case 0x419d58u: goto label_419d58;
        case 0x419d5cu: goto label_419d5c;
        case 0x419d60u: goto label_419d60;
        case 0x419d64u: goto label_419d64;
        case 0x419d68u: goto label_419d68;
        case 0x419d6cu: goto label_419d6c;
        case 0x419d70u: goto label_419d70;
        case 0x419d74u: goto label_419d74;
        case 0x419d78u: goto label_419d78;
        case 0x419d7cu: goto label_419d7c;
        case 0x419d80u: goto label_419d80;
        case 0x419d84u: goto label_419d84;
        case 0x419d88u: goto label_419d88;
        case 0x419d8cu: goto label_419d8c;
        case 0x419d90u: goto label_419d90;
        case 0x419d94u: goto label_419d94;
        case 0x419d98u: goto label_419d98;
        case 0x419d9cu: goto label_419d9c;
        case 0x419da0u: goto label_419da0;
        case 0x419da4u: goto label_419da4;
        case 0x419da8u: goto label_419da8;
        case 0x419dacu: goto label_419dac;
        case 0x419db0u: goto label_419db0;
        case 0x419db4u: goto label_419db4;
        case 0x419db8u: goto label_419db8;
        case 0x419dbcu: goto label_419dbc;
        case 0x419dc0u: goto label_419dc0;
        case 0x419dc4u: goto label_419dc4;
        case 0x419dc8u: goto label_419dc8;
        case 0x419dccu: goto label_419dcc;
        case 0x419dd0u: goto label_419dd0;
        case 0x419dd4u: goto label_419dd4;
        case 0x419dd8u: goto label_419dd8;
        case 0x419ddcu: goto label_419ddc;
        case 0x419de0u: goto label_419de0;
        case 0x419de4u: goto label_419de4;
        case 0x419de8u: goto label_419de8;
        case 0x419decu: goto label_419dec;
        case 0x419df0u: goto label_419df0;
        case 0x419df4u: goto label_419df4;
        case 0x419df8u: goto label_419df8;
        case 0x419dfcu: goto label_419dfc;
        case 0x419e00u: goto label_419e00;
        case 0x419e04u: goto label_419e04;
        case 0x419e08u: goto label_419e08;
        case 0x419e0cu: goto label_419e0c;
        case 0x419e10u: goto label_419e10;
        case 0x419e14u: goto label_419e14;
        case 0x419e18u: goto label_419e18;
        case 0x419e1cu: goto label_419e1c;
        case 0x419e20u: goto label_419e20;
        case 0x419e24u: goto label_419e24;
        case 0x419e28u: goto label_419e28;
        case 0x419e2cu: goto label_419e2c;
        case 0x419e30u: goto label_419e30;
        case 0x419e34u: goto label_419e34;
        case 0x419e38u: goto label_419e38;
        case 0x419e3cu: goto label_419e3c;
        case 0x419e40u: goto label_419e40;
        case 0x419e44u: goto label_419e44;
        case 0x419e48u: goto label_419e48;
        case 0x419e4cu: goto label_419e4c;
        case 0x419e50u: goto label_419e50;
        case 0x419e54u: goto label_419e54;
        case 0x419e58u: goto label_419e58;
        case 0x419e5cu: goto label_419e5c;
        case 0x419e60u: goto label_419e60;
        case 0x419e64u: goto label_419e64;
        case 0x419e68u: goto label_419e68;
        case 0x419e6cu: goto label_419e6c;
        case 0x419e70u: goto label_419e70;
        case 0x419e74u: goto label_419e74;
        case 0x419e78u: goto label_419e78;
        case 0x419e7cu: goto label_419e7c;
        case 0x419e80u: goto label_419e80;
        case 0x419e84u: goto label_419e84;
        case 0x419e88u: goto label_419e88;
        case 0x419e8cu: goto label_419e8c;
        case 0x419e90u: goto label_419e90;
        case 0x419e94u: goto label_419e94;
        case 0x419e98u: goto label_419e98;
        case 0x419e9cu: goto label_419e9c;
        case 0x419ea0u: goto label_419ea0;
        case 0x419ea4u: goto label_419ea4;
        case 0x419ea8u: goto label_419ea8;
        case 0x419eacu: goto label_419eac;
        case 0x419eb0u: goto label_419eb0;
        case 0x419eb4u: goto label_419eb4;
        case 0x419eb8u: goto label_419eb8;
        case 0x419ebcu: goto label_419ebc;
        case 0x419ec0u: goto label_419ec0;
        case 0x419ec4u: goto label_419ec4;
        case 0x419ec8u: goto label_419ec8;
        case 0x419eccu: goto label_419ecc;
        case 0x419ed0u: goto label_419ed0;
        case 0x419ed4u: goto label_419ed4;
        case 0x419ed8u: goto label_419ed8;
        case 0x419edcu: goto label_419edc;
        case 0x419ee0u: goto label_419ee0;
        case 0x419ee4u: goto label_419ee4;
        case 0x419ee8u: goto label_419ee8;
        case 0x419eecu: goto label_419eec;
        case 0x419ef0u: goto label_419ef0;
        case 0x419ef4u: goto label_419ef4;
        case 0x419ef8u: goto label_419ef8;
        case 0x419efcu: goto label_419efc;
        case 0x419f00u: goto label_419f00;
        case 0x419f04u: goto label_419f04;
        case 0x419f08u: goto label_419f08;
        case 0x419f0cu: goto label_419f0c;
        case 0x419f10u: goto label_419f10;
        case 0x419f14u: goto label_419f14;
        case 0x419f18u: goto label_419f18;
        case 0x419f1cu: goto label_419f1c;
        case 0x419f20u: goto label_419f20;
        case 0x419f24u: goto label_419f24;
        case 0x419f28u: goto label_419f28;
        case 0x419f2cu: goto label_419f2c;
        case 0x419f30u: goto label_419f30;
        case 0x419f34u: goto label_419f34;
        case 0x419f38u: goto label_419f38;
        case 0x419f3cu: goto label_419f3c;
        case 0x419f40u: goto label_419f40;
        case 0x419f44u: goto label_419f44;
        case 0x419f48u: goto label_419f48;
        case 0x419f4cu: goto label_419f4c;
        case 0x419f50u: goto label_419f50;
        case 0x419f54u: goto label_419f54;
        case 0x419f58u: goto label_419f58;
        case 0x419f5cu: goto label_419f5c;
        case 0x419f60u: goto label_419f60;
        case 0x419f64u: goto label_419f64;
        case 0x419f68u: goto label_419f68;
        case 0x419f6cu: goto label_419f6c;
        case 0x419f70u: goto label_419f70;
        case 0x419f74u: goto label_419f74;
        case 0x419f78u: goto label_419f78;
        case 0x419f7cu: goto label_419f7c;
        case 0x419f80u: goto label_419f80;
        case 0x419f84u: goto label_419f84;
        case 0x419f88u: goto label_419f88;
        case 0x419f8cu: goto label_419f8c;
        case 0x419f90u: goto label_419f90;
        case 0x419f94u: goto label_419f94;
        case 0x419f98u: goto label_419f98;
        case 0x419f9cu: goto label_419f9c;
        case 0x419fa0u: goto label_419fa0;
        case 0x419fa4u: goto label_419fa4;
        case 0x419fa8u: goto label_419fa8;
        case 0x419facu: goto label_419fac;
        case 0x419fb0u: goto label_419fb0;
        case 0x419fb4u: goto label_419fb4;
        case 0x419fb8u: goto label_419fb8;
        case 0x419fbcu: goto label_419fbc;
        default: break;
    }

    ctx->pc = 0x419c90u;

label_419c90:
    // 0x419c90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x419c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_419c94:
    // 0x419c94: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x419c94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_419c98:
    // 0x419c98: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x419c98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_419c9c:
    // 0x419c9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x419c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_419ca0:
    // 0x419ca0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x419ca0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_419ca4:
    // 0x419ca4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x419ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_419ca8:
    // 0x419ca8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x419ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_419cac:
    // 0x419cac: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x419cacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_419cb0:
    // 0x419cb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x419cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_419cb4:
    // 0x419cb4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x419cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_419cb8:
    // 0x419cb8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x419cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_419cbc:
    // 0x419cbc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x419cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_419cc0:
    // 0x419cc0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x419cc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_419cc4:
    // 0x419cc4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x419cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_419cc8:
    // 0x419cc8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x419cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_419ccc:
    // 0x419ccc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x419cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_419cd0:
    // 0x419cd0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x419cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_419cd4:
    // 0x419cd4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x419cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_419cd8:
    // 0x419cd8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x419cd8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_419cdc:
    // 0x419cdc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x419cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_419ce0:
    // 0x419ce0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x419ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_419ce4:
    // 0x419ce4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x419ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_419ce8:
    // 0x419ce8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x419ce8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_419cec:
    // 0x419cec: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x419cecu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_419cf0:
    // 0x419cf0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x419cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_419cf4:
    // 0x419cf4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x419cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_419cf8:
    // 0x419cf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x419cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_419cfc:
    // 0x419cfc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x419cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_419d00:
    // 0x419d00: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x419d00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_419d04:
    // 0x419d04: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x419d04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_419d08:
    // 0x419d08: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x419d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_419d0c:
    // 0x419d0c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x419d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_419d10:
    // 0x419d10: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x419d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_419d14:
    // 0x419d14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x419d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_419d18:
    // 0x419d18: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x419d18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_419d1c:
    // 0x419d1c: 0x3e00008  jr          $ra
label_419d20:
    if (ctx->pc == 0x419D20u) {
        ctx->pc = 0x419D20u;
            // 0x419d20: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x419D24u;
        goto label_419d24;
    }
    ctx->pc = 0x419D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419D1Cu;
            // 0x419d20: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x419D24u;
label_419d24:
    // 0x419d24: 0x0  nop
    ctx->pc = 0x419d24u;
    // NOP
label_419d28:
    // 0x419d28: 0x0  nop
    ctx->pc = 0x419d28u;
    // NOP
label_419d2c:
    // 0x419d2c: 0x0  nop
    ctx->pc = 0x419d2cu;
    // NOP
label_419d30:
    // 0x419d30: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x419d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_419d34:
    // 0x419d34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x419d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_419d38:
    // 0x419d38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x419d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_419d3c:
    // 0x419d3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x419d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_419d40:
    // 0x419d40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x419d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_419d44:
    // 0x419d44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x419d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_419d48:
    // 0x419d48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x419d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_419d4c:
    // 0x419d4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x419d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_419d50:
    // 0x419d50: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x419d50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_419d54:
    // 0x419d54: 0x10a30085  beq         $a1, $v1, . + 4 + (0x85 << 2)
label_419d58:
    if (ctx->pc == 0x419D58u) {
        ctx->pc = 0x419D58u;
            // 0x419d58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419D5Cu;
        goto label_419d5c;
    }
    ctx->pc = 0x419D54u;
    {
        const bool branch_taken_0x419d54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x419D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419D54u;
            // 0x419d58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419d54) {
            ctx->pc = 0x419F6Cu;
            goto label_419f6c;
        }
    }
    ctx->pc = 0x419D5Cu;
label_419d5c:
    // 0x419d5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x419d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_419d60:
    // 0x419d60: 0x50a3007f  beql        $a1, $v1, . + 4 + (0x7F << 2)
label_419d64:
    if (ctx->pc == 0x419D64u) {
        ctx->pc = 0x419D64u;
            // 0x419d64: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x419D68u;
        goto label_419d68;
    }
    ctx->pc = 0x419D60u;
    {
        const bool branch_taken_0x419d60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x419d60) {
            ctx->pc = 0x419D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419D60u;
            // 0x419d64: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x419F60u;
            goto label_419f60;
        }
    }
    ctx->pc = 0x419D68u;
label_419d68:
    // 0x419d68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x419d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_419d6c:
    // 0x419d6c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_419d70:
    if (ctx->pc == 0x419D70u) {
        ctx->pc = 0x419D74u;
        goto label_419d74;
    }
    ctx->pc = 0x419D6Cu;
    {
        const bool branch_taken_0x419d6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x419d6c) {
            ctx->pc = 0x419D7Cu;
            goto label_419d7c;
        }
    }
    ctx->pc = 0x419D74u;
label_419d74:
    // 0x419d74: 0x1000008a  b           . + 4 + (0x8A << 2)
label_419d78:
    if (ctx->pc == 0x419D78u) {
        ctx->pc = 0x419D7Cu;
        goto label_419d7c;
    }
    ctx->pc = 0x419D74u;
    {
        const bool branch_taken_0x419d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x419d74) {
            ctx->pc = 0x419FA0u;
            goto label_419fa0;
        }
    }
    ctx->pc = 0x419D7Cu;
label_419d7c:
    // 0x419d7c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x419d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_419d80:
    // 0x419d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x419d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_419d84:
    // 0x419d84: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x419d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_419d88:
    // 0x419d88: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x419d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_419d8c:
    // 0x419d8c: 0x10640084  beq         $v1, $a0, . + 4 + (0x84 << 2)
label_419d90:
    if (ctx->pc == 0x419D90u) {
        ctx->pc = 0x419D94u;
        goto label_419d94;
    }
    ctx->pc = 0x419D8Cu;
    {
        const bool branch_taken_0x419d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x419d8c) {
            ctx->pc = 0x419FA0u;
            goto label_419fa0;
        }
    }
    ctx->pc = 0x419D94u;
label_419d94:
    // 0x419d94: 0xc0892d0  jal         func_224B40
label_419d98:
    if (ctx->pc == 0x419D98u) {
        ctx->pc = 0x419D98u;
            // 0x419d98: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x419D9Cu;
        goto label_419d9c;
    }
    ctx->pc = 0x419D94u;
    SET_GPR_U32(ctx, 31, 0x419D9Cu);
    ctx->pc = 0x419D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419D94u;
            // 0x419d98: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419D9Cu; }
        if (ctx->pc != 0x419D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419D9Cu; }
        if (ctx->pc != 0x419D9Cu) { return; }
    }
    ctx->pc = 0x419D9Cu;
label_419d9c:
    // 0x419d9c: 0x3c0241f8  lui         $v0, 0x41F8
    ctx->pc = 0x419d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16888 << 16));
label_419da0:
    // 0x419da0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x419da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_419da4:
    // 0x419da4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x419da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_419da8:
    // 0x419da8: 0x3c024274  lui         $v0, 0x4274
    ctx->pc = 0x419da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17012 << 16));
label_419dac:
    // 0x419dac: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x419dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_419db0:
    // 0x419db0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x419db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_419db4:
    // 0x419db4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x419db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_419db8:
    // 0x419db8: 0xc0b6df0  jal         func_2DB7C0
label_419dbc:
    if (ctx->pc == 0x419DBCu) {
        ctx->pc = 0x419DBCu;
            // 0x419dbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x419DC0u;
        goto label_419dc0;
    }
    ctx->pc = 0x419DB8u;
    SET_GPR_U32(ctx, 31, 0x419DC0u);
    ctx->pc = 0x419DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419DB8u;
            // 0x419dbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419DC0u; }
        if (ctx->pc != 0x419DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419DC0u; }
        if (ctx->pc != 0x419DC0u) { return; }
    }
    ctx->pc = 0x419DC0u;
label_419dc0:
    // 0x419dc0: 0xc0d46a0  jal         func_351A80
label_419dc4:
    if (ctx->pc == 0x419DC4u) {
        ctx->pc = 0x419DC4u;
            // 0x419dc4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x419DC8u;
        goto label_419dc8;
    }
    ctx->pc = 0x419DC0u;
    SET_GPR_U32(ctx, 31, 0x419DC8u);
    ctx->pc = 0x419DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419DC0u;
            // 0x419dc4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419DC8u; }
        if (ctx->pc != 0x419DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419DC8u; }
        if (ctx->pc != 0x419DC8u) { return; }
    }
    ctx->pc = 0x419DC8u;
label_419dc8:
    // 0x419dc8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_419dcc:
    if (ctx->pc == 0x419DCCu) {
        ctx->pc = 0x419DCCu;
            // 0x419dcc: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x419DD0u;
        goto label_419dd0;
    }
    ctx->pc = 0x419DC8u;
    {
        const bool branch_taken_0x419dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x419dc8) {
            ctx->pc = 0x419DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419DC8u;
            // 0x419dcc: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x419DE8u;
            goto label_419de8;
        }
    }
    ctx->pc = 0x419DD0u;
label_419dd0:
    // 0x419dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x419dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419dd4:
    // 0x419dd4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x419dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_419dd8:
    // 0x419dd8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x419dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_419ddc:
    // 0x419ddc: 0xc0804bc  jal         func_2012F0
label_419de0:
    if (ctx->pc == 0x419DE0u) {
        ctx->pc = 0x419DE0u;
            // 0x419de0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x419DE4u;
        goto label_419de4;
    }
    ctx->pc = 0x419DDCu;
    SET_GPR_U32(ctx, 31, 0x419DE4u);
    ctx->pc = 0x419DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419DDCu;
            // 0x419de0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419DE4u; }
        if (ctx->pc != 0x419DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419DE4u; }
        if (ctx->pc != 0x419DE4u) { return; }
    }
    ctx->pc = 0x419DE4u;
label_419de4:
    // 0x419de4: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x419de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_419de8:
    // 0x419de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x419de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419dec:
    // 0x419dec: 0x3c02c43f  lui         $v0, 0xC43F
    ctx->pc = 0x419decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50239 << 16));
label_419df0:
    // 0x419df0: 0x3c03c190  lui         $v1, 0xC190
    ctx->pc = 0x419df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49552 << 16));
label_419df4:
    // 0x419df4: 0x34422ccd  ori         $v0, $v0, 0x2CCD
    ctx->pc = 0x419df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11469);
label_419df8:
    // 0x419df8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x419df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_419dfc:
    // 0x419dfc: 0x3c0240e3  lui         $v0, 0x40E3
    ctx->pc = 0x419dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16611 << 16));
label_419e00:
    // 0x419e00: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x419e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_419e04:
    // 0x419e04: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x419e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_419e08:
    // 0x419e08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x419e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_419e0c:
    // 0x419e0c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x419e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_419e10:
    // 0x419e10: 0xc0b6e3c  jal         func_2DB8F0
label_419e14:
    if (ctx->pc == 0x419E14u) {
        ctx->pc = 0x419E14u;
            // 0x419e14: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x419E18u;
        goto label_419e18;
    }
    ctx->pc = 0x419E10u;
    SET_GPR_U32(ctx, 31, 0x419E18u);
    ctx->pc = 0x419E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419E10u;
            // 0x419e14: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E18u; }
        if (ctx->pc != 0x419E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E18u; }
        if (ctx->pc != 0x419E18u) { return; }
    }
    ctx->pc = 0x419E18u;
label_419e18:
    // 0x419e18: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x419e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_419e1c:
    // 0x419e1c: 0xc0dec40  jal         func_37B100
label_419e20:
    if (ctx->pc == 0x419E20u) {
        ctx->pc = 0x419E20u;
            // 0x419e20: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x419E24u;
        goto label_419e24;
    }
    ctx->pc = 0x419E1Cu;
    SET_GPR_U32(ctx, 31, 0x419E24u);
    ctx->pc = 0x419E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419E1Cu;
            // 0x419e20: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B100u;
    if (runtime->hasFunction(0x37B100u)) {
        auto targetFn = runtime->lookupFunction(0x37B100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E24u; }
        if (ctx->pc != 0x419E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B100_0x37b100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E24u; }
        if (ctx->pc != 0x419E24u) { return; }
    }
    ctx->pc = 0x419E24u;
label_419e24:
    // 0x419e24: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x419e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_419e28:
    // 0x419e28: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x419e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
label_419e2c:
    // 0x419e2c: 0xc440c910  lwc1        $f0, -0x36F0($v0)
    ctx->pc = 0x419e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_419e30:
    // 0x419e30: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x419e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_419e34:
    // 0x419e34: 0x27a40132  addiu       $a0, $sp, 0x132
    ctx->pc = 0x419e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 306));
label_419e38:
    // 0x419e38: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x419e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_419e3c:
    // 0x419e3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x419e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_419e40:
    // 0x419e40: 0xc1067f0  jal         func_419FC0
label_419e44:
    if (ctx->pc == 0x419E44u) {
        ctx->pc = 0x419E44u;
            // 0x419e44: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->pc = 0x419E48u;
        goto label_419e48;
    }
    ctx->pc = 0x419E40u;
    SET_GPR_U32(ctx, 31, 0x419E48u);
    ctx->pc = 0x419E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419E40u;
            // 0x419e44: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x419FC0u;
    if (runtime->hasFunction(0x419FC0u)) {
        auto targetFn = runtime->lookupFunction(0x419FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E48u; }
        if (ctx->pc != 0x419E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00419FC0_0x419fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E48u; }
        if (ctx->pc != 0x419E48u) { return; }
    }
    ctx->pc = 0x419E48u;
label_419e48:
    // 0x419e48: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x419e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_419e4c:
    // 0x419e4c: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x419e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_419e50:
    // 0x419e50: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x419e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_419e54:
    // 0x419e54: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x419e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_419e58:
    // 0x419e58: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x419e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_419e5c:
    // 0x419e5c: 0xc0dec30  jal         func_37B0C0
label_419e60:
    if (ctx->pc == 0x419E60u) {
        ctx->pc = 0x419E60u;
            // 0x419e60: 0xafa2011c  sw          $v0, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x419E64u;
        goto label_419e64;
    }
    ctx->pc = 0x419E5Cu;
    SET_GPR_U32(ctx, 31, 0x419E64u);
    ctx->pc = 0x419E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419E5Cu;
            // 0x419e60: 0xafa2011c  sw          $v0, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B0C0u;
    if (runtime->hasFunction(0x37B0C0u)) {
        auto targetFn = runtime->lookupFunction(0x37B0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E64u; }
        if (ctx->pc != 0x419E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B0C0_0x37b0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E64u; }
        if (ctx->pc != 0x419E64u) { return; }
    }
    ctx->pc = 0x419E64u;
label_419e64:
    // 0x419e64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x419e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419e68:
    // 0x419e68: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
label_419e6c:
    if (ctx->pc == 0x419E6Cu) {
        ctx->pc = 0x419E6Cu;
            // 0x419e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419E70u;
        goto label_419e70;
    }
    ctx->pc = 0x419E68u;
    {
        const bool branch_taken_0x419e68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x419e68) {
            ctx->pc = 0x419E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419E68u;
            // 0x419e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x419E88u;
            goto label_419e88;
        }
    }
    ctx->pc = 0x419E70u;
label_419e70:
    // 0x419e70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x419e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_419e74:
    // 0x419e74: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x419e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_419e78:
    // 0x419e78: 0xc0dec14  jal         func_37B050
label_419e7c:
    if (ctx->pc == 0x419E7Cu) {
        ctx->pc = 0x419E7Cu;
            // 0x419e7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419E80u;
        goto label_419e80;
    }
    ctx->pc = 0x419E78u;
    SET_GPR_U32(ctx, 31, 0x419E80u);
    ctx->pc = 0x419E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419E78u;
            // 0x419e7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B050u;
    if (runtime->hasFunction(0x37B050u)) {
        auto targetFn = runtime->lookupFunction(0x37B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E80u; }
        if (ctx->pc != 0x419E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B050_0x37b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E80u; }
        if (ctx->pc != 0x419E80u) { return; }
    }
    ctx->pc = 0x419E80u;
label_419e80:
    // 0x419e80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x419e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419e84:
    // 0x419e84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x419e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_419e88:
    // 0x419e88: 0xc0dec10  jal         func_37B040
label_419e8c:
    if (ctx->pc == 0x419E8Cu) {
        ctx->pc = 0x419E8Cu;
            // 0x419e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419E90u;
        goto label_419e90;
    }
    ctx->pc = 0x419E88u;
    SET_GPR_U32(ctx, 31, 0x419E90u);
    ctx->pc = 0x419E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419E88u;
            // 0x419e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37B040u;
    if (runtime->hasFunction(0x37B040u)) {
        auto targetFn = runtime->lookupFunction(0x37B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E90u; }
        if (ctx->pc != 0x419E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037B040_0x37b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E90u; }
        if (ctx->pc != 0x419E90u) { return; }
    }
    ctx->pc = 0x419E90u;
label_419e90:
    // 0x419e90: 0xc0b6e84  jal         func_2DBA10
label_419e94:
    if (ctx->pc == 0x419E94u) {
        ctx->pc = 0x419E98u;
        goto label_419e98;
    }
    ctx->pc = 0x419E90u;
    SET_GPR_U32(ctx, 31, 0x419E98u);
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E98u; }
        if (ctx->pc != 0x419E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419E98u; }
        if (ctx->pc != 0x419E98u) { return; }
    }
    ctx->pc = 0x419E98u;
label_419e98:
    // 0x419e98: 0xc0b6e24  jal         func_2DB890
label_419e9c:
    if (ctx->pc == 0x419E9Cu) {
        ctx->pc = 0x419E9Cu;
            // 0x419e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419EA0u;
        goto label_419ea0;
    }
    ctx->pc = 0x419E98u;
    SET_GPR_U32(ctx, 31, 0x419EA0u);
    ctx->pc = 0x419E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419E98u;
            // 0x419e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB890u;
    if (runtime->hasFunction(0x2DB890u)) {
        auto targetFn = runtime->lookupFunction(0x2DB890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EA0u; }
        if (ctx->pc != 0x419EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB890_0x2db890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EA0u; }
        if (ctx->pc != 0x419EA0u) { return; }
    }
    ctx->pc = 0x419EA0u;
label_419ea0:
    // 0x419ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x419ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419ea4:
    // 0x419ea4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x419ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_419ea8:
    // 0x419ea8: 0xc08c164  jal         func_230590
label_419eac:
    if (ctx->pc == 0x419EACu) {
        ctx->pc = 0x419EACu;
            // 0x419eac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x419EB0u;
        goto label_419eb0;
    }
    ctx->pc = 0x419EA8u;
    SET_GPR_U32(ctx, 31, 0x419EB0u);
    ctx->pc = 0x419EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419EA8u;
            // 0x419eac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EB0u; }
        if (ctx->pc != 0x419EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EB0u; }
        if (ctx->pc != 0x419EB0u) { return; }
    }
    ctx->pc = 0x419EB0u;
label_419eb0:
    // 0x419eb0: 0xc0debf8  jal         func_37AFE0
label_419eb4:
    if (ctx->pc == 0x419EB4u) {
        ctx->pc = 0x419EB4u;
            // 0x419eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419EB8u;
        goto label_419eb8;
    }
    ctx->pc = 0x419EB0u;
    SET_GPR_U32(ctx, 31, 0x419EB8u);
    ctx->pc = 0x419EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419EB0u;
            // 0x419eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37AFE0u;
    if (runtime->hasFunction(0x37AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x37AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EB8u; }
        if (ctx->pc != 0x419EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037AFE0_0x37afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EB8u; }
        if (ctx->pc != 0x419EB8u) { return; }
    }
    ctx->pc = 0x419EB8u;
label_419eb8:
    // 0x419eb8: 0xc08d414  jal         func_235050
label_419ebc:
    if (ctx->pc == 0x419EBCu) {
        ctx->pc = 0x419EBCu;
            // 0x419ebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419EC0u;
        goto label_419ec0;
    }
    ctx->pc = 0x419EB8u;
    SET_GPR_U32(ctx, 31, 0x419EC0u);
    ctx->pc = 0x419EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419EB8u;
            // 0x419ebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EC0u; }
        if (ctx->pc != 0x419EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EC0u; }
        if (ctx->pc != 0x419EC0u) { return; }
    }
    ctx->pc = 0x419EC0u;
label_419ec0:
    // 0x419ec0: 0x3c0241a8  lui         $v0, 0x41A8
    ctx->pc = 0x419ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16808 << 16));
label_419ec4:
    // 0x419ec4: 0x3c0341b0  lui         $v1, 0x41B0
    ctx->pc = 0x419ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16816 << 16));
label_419ec8:
    // 0x419ec8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x419ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_419ecc:
    // 0x419ecc: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x419eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
label_419ed0:
    // 0x419ed0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x419ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_419ed4:
    // 0x419ed4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x419ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_419ed8:
    // 0x419ed8: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x419ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_419edc:
    // 0x419edc: 0xc0b6e3c  jal         func_2DB8F0
label_419ee0:
    if (ctx->pc == 0x419EE0u) {
        ctx->pc = 0x419EE0u;
            // 0x419ee0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x419EE4u;
        goto label_419ee4;
    }
    ctx->pc = 0x419EDCu;
    SET_GPR_U32(ctx, 31, 0x419EE4u);
    ctx->pc = 0x419EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419EDCu;
            // 0x419ee0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EE4u; }
        if (ctx->pc != 0x419EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EE4u; }
        if (ctx->pc != 0x419EE4u) { return; }
    }
    ctx->pc = 0x419EE4u;
label_419ee4:
    // 0x419ee4: 0xc0d46a0  jal         func_351A80
label_419ee8:
    if (ctx->pc == 0x419EE8u) {
        ctx->pc = 0x419EE8u;
            // 0x419ee8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x419EECu;
        goto label_419eec;
    }
    ctx->pc = 0x419EE4u;
    SET_GPR_U32(ctx, 31, 0x419EECu);
    ctx->pc = 0x419EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419EE4u;
            // 0x419ee8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EECu; }
        if (ctx->pc != 0x419EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419EECu; }
        if (ctx->pc != 0x419EECu) { return; }
    }
    ctx->pc = 0x419EECu;
label_419eec:
    // 0x419eec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_419ef0:
    if (ctx->pc == 0x419EF0u) {
        ctx->pc = 0x419EF0u;
            // 0x419ef0: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x419EF4u;
        goto label_419ef4;
    }
    ctx->pc = 0x419EECu;
    {
        const bool branch_taken_0x419eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x419eec) {
            ctx->pc = 0x419EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419EECu;
            // 0x419ef0: 0xae2200e0  sw          $v0, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x419F0Cu;
            goto label_419f0c;
        }
    }
    ctx->pc = 0x419EF4u;
label_419ef4:
    // 0x419ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x419ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419ef8:
    // 0x419ef8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x419ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_419efc:
    // 0x419efc: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x419efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_419f00:
    // 0x419f00: 0xc0804bc  jal         func_2012F0
label_419f04:
    if (ctx->pc == 0x419F04u) {
        ctx->pc = 0x419F04u;
            // 0x419f04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x419F08u;
        goto label_419f08;
    }
    ctx->pc = 0x419F00u;
    SET_GPR_U32(ctx, 31, 0x419F08u);
    ctx->pc = 0x419F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419F00u;
            // 0x419f04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419F08u; }
        if (ctx->pc != 0x419F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419F08u; }
        if (ctx->pc != 0x419F08u) { return; }
    }
    ctx->pc = 0x419F08u;
label_419f08:
    // 0x419f08: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x419f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_419f0c:
    // 0x419f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x419f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419f10:
    // 0x419f10: 0xc04c968  jal         func_1325A0
label_419f14:
    if (ctx->pc == 0x419F14u) {
        ctx->pc = 0x419F14u;
            // 0x419f14: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x419F18u;
        goto label_419f18;
    }
    ctx->pc = 0x419F10u;
    SET_GPR_U32(ctx, 31, 0x419F18u);
    ctx->pc = 0x419F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419F10u;
            // 0x419f14: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419F18u; }
        if (ctx->pc != 0x419F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419F18u; }
        if (ctx->pc != 0x419F18u) { return; }
    }
    ctx->pc = 0x419F18u;
label_419f18:
    // 0x419f18: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x419f18u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
label_419f1c:
    // 0x419f1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x419f1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419f20:
    // 0x419f20: 0x26330090  addiu       $s3, $s1, 0x90
    ctx->pc = 0x419f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_419f24:
    // 0x419f24: 0x2652c590  addiu       $s2, $s2, -0x3A70
    ctx->pc = 0x419f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952336));
label_419f28:
    // 0x419f28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x419f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_419f2c:
    // 0x419f2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x419f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_419f30:
    // 0x419f30: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x419f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_419f34:
    // 0x419f34: 0xc0d37ec  jal         func_34DFB0
label_419f38:
    if (ctx->pc == 0x419F38u) {
        ctx->pc = 0x419F38u;
            // 0x419f38: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419F3Cu;
        goto label_419f3c;
    }
    ctx->pc = 0x419F34u;
    SET_GPR_U32(ctx, 31, 0x419F3Cu);
    ctx->pc = 0x419F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419F34u;
            // 0x419f38: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419F3Cu; }
        if (ctx->pc != 0x419F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419F3Cu; }
        if (ctx->pc != 0x419F3Cu) { return; }
    }
    ctx->pc = 0x419F3Cu;
label_419f3c:
    // 0x419f3c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x419f3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_419f40:
    // 0x419f40: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x419f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_419f44:
    // 0x419f44: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x419f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_419f48:
    // 0x419f48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_419f4c:
    if (ctx->pc == 0x419F4Cu) {
        ctx->pc = 0x419F4Cu;
            // 0x419f4c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x419F50u;
        goto label_419f50;
    }
    ctx->pc = 0x419F48u;
    {
        const bool branch_taken_0x419f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x419F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419F48u;
            // 0x419f4c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419f48) {
            ctx->pc = 0x419F28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_419f28;
        }
    }
    ctx->pc = 0x419F50u;
label_419f50:
    // 0x419f50: 0xc1067f4  jal         func_419FD0
label_419f54:
    if (ctx->pc == 0x419F54u) {
        ctx->pc = 0x419F54u;
            // 0x419f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419F58u;
        goto label_419f58;
    }
    ctx->pc = 0x419F50u;
    SET_GPR_U32(ctx, 31, 0x419F58u);
    ctx->pc = 0x419F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419F50u;
            // 0x419f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x419FD0u;
    if (runtime->hasFunction(0x419FD0u)) {
        auto targetFn = runtime->lookupFunction(0x419FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419F58u; }
        if (ctx->pc != 0x419F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00419FD0_0x419fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419F58u; }
        if (ctx->pc != 0x419F58u) { return; }
    }
    ctx->pc = 0x419F58u;
label_419f58:
    // 0x419f58: 0x10000011  b           . + 4 + (0x11 << 2)
label_419f5c:
    if (ctx->pc == 0x419F5Cu) {
        ctx->pc = 0x419F60u;
        goto label_419f60;
    }
    ctx->pc = 0x419F58u;
    {
        const bool branch_taken_0x419f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x419f58) {
            ctx->pc = 0x419FA0u;
            goto label_419fa0;
        }
    }
    ctx->pc = 0x419F60u;
label_419f60:
    // 0x419f60: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x419f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_419f64:
    // 0x419f64: 0x320f809  jalr        $t9
label_419f68:
    if (ctx->pc == 0x419F68u) {
        ctx->pc = 0x419F6Cu;
        goto label_419f6c;
    }
    ctx->pc = 0x419F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x419F6Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x419F6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x419F6Cu; }
            if (ctx->pc != 0x419F6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x419F6Cu;
label_419f6c:
    // 0x419f6c: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x419f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_419f70:
    // 0x419f70: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_419f74:
    if (ctx->pc == 0x419F74u) {
        ctx->pc = 0x419F78u;
        goto label_419f78;
    }
    ctx->pc = 0x419F70u;
    {
        const bool branch_taken_0x419f70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x419f70) {
            ctx->pc = 0x419FA0u;
            goto label_419fa0;
        }
    }
    ctx->pc = 0x419F78u;
label_419f78:
    // 0x419f78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x419f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419f7c:
    // 0x419f7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x419f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419f80:
    // 0x419f80: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x419f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_419f84:
    // 0x419f84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x419f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_419f88:
    // 0x419f88: 0xc0e3658  jal         func_38D960
label_419f8c:
    if (ctx->pc == 0x419F8Cu) {
        ctx->pc = 0x419F8Cu;
            // 0x419f8c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x419F90u;
        goto label_419f90;
    }
    ctx->pc = 0x419F88u;
    SET_GPR_U32(ctx, 31, 0x419F90u);
    ctx->pc = 0x419F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419F88u;
            // 0x419f8c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419F90u; }
        if (ctx->pc != 0x419F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419F90u; }
        if (ctx->pc != 0x419F90u) { return; }
    }
    ctx->pc = 0x419F90u;
label_419f90:
    // 0x419f90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x419f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_419f94:
    // 0x419f94: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x419f94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_419f98:
    // 0x419f98: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_419f9c:
    if (ctx->pc == 0x419F9Cu) {
        ctx->pc = 0x419F9Cu;
            // 0x419f9c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x419FA0u;
        goto label_419fa0;
    }
    ctx->pc = 0x419F98u;
    {
        const bool branch_taken_0x419f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x419F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419F98u;
            // 0x419f9c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419f98) {
            ctx->pc = 0x419F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_419f80;
        }
    }
    ctx->pc = 0x419FA0u;
label_419fa0:
    // 0x419fa0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x419fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_419fa4:
    // 0x419fa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x419fa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_419fa8:
    // 0x419fa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x419fa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_419fac:
    // 0x419fac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x419facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_419fb0:
    // 0x419fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x419fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_419fb4:
    // 0x419fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x419fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_419fb8:
    // 0x419fb8: 0x3e00008  jr          $ra
label_419fbc:
    if (ctx->pc == 0x419FBCu) {
        ctx->pc = 0x419FBCu;
            // 0x419fbc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x419FC0u;
        goto label_fallthrough_0x419fb8;
    }
    ctx->pc = 0x419FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419FB8u;
            // 0x419fbc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x419fb8:
    ctx->pc = 0x419FC0u;
}
