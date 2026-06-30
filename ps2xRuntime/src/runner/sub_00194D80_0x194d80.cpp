#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194D80
// Address: 0x194d80 - 0x195000
void sub_00194D80_0x194d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194D80_0x194d80");
#endif

    switch (ctx->pc) {
        case 0x194d80u: goto label_194d80;
        case 0x194d84u: goto label_194d84;
        case 0x194d88u: goto label_194d88;
        case 0x194d8cu: goto label_194d8c;
        case 0x194d90u: goto label_194d90;
        case 0x194d94u: goto label_194d94;
        case 0x194d98u: goto label_194d98;
        case 0x194d9cu: goto label_194d9c;
        case 0x194da0u: goto label_194da0;
        case 0x194da4u: goto label_194da4;
        case 0x194da8u: goto label_194da8;
        case 0x194dacu: goto label_194dac;
        case 0x194db0u: goto label_194db0;
        case 0x194db4u: goto label_194db4;
        case 0x194db8u: goto label_194db8;
        case 0x194dbcu: goto label_194dbc;
        case 0x194dc0u: goto label_194dc0;
        case 0x194dc4u: goto label_194dc4;
        case 0x194dc8u: goto label_194dc8;
        case 0x194dccu: goto label_194dcc;
        case 0x194dd0u: goto label_194dd0;
        case 0x194dd4u: goto label_194dd4;
        case 0x194dd8u: goto label_194dd8;
        case 0x194ddcu: goto label_194ddc;
        case 0x194de0u: goto label_194de0;
        case 0x194de4u: goto label_194de4;
        case 0x194de8u: goto label_194de8;
        case 0x194decu: goto label_194dec;
        case 0x194df0u: goto label_194df0;
        case 0x194df4u: goto label_194df4;
        case 0x194df8u: goto label_194df8;
        case 0x194dfcu: goto label_194dfc;
        case 0x194e00u: goto label_194e00;
        case 0x194e04u: goto label_194e04;
        case 0x194e08u: goto label_194e08;
        case 0x194e0cu: goto label_194e0c;
        case 0x194e10u: goto label_194e10;
        case 0x194e14u: goto label_194e14;
        case 0x194e18u: goto label_194e18;
        case 0x194e1cu: goto label_194e1c;
        case 0x194e20u: goto label_194e20;
        case 0x194e24u: goto label_194e24;
        case 0x194e28u: goto label_194e28;
        case 0x194e2cu: goto label_194e2c;
        case 0x194e30u: goto label_194e30;
        case 0x194e34u: goto label_194e34;
        case 0x194e38u: goto label_194e38;
        case 0x194e3cu: goto label_194e3c;
        case 0x194e40u: goto label_194e40;
        case 0x194e44u: goto label_194e44;
        case 0x194e48u: goto label_194e48;
        case 0x194e4cu: goto label_194e4c;
        case 0x194e50u: goto label_194e50;
        case 0x194e54u: goto label_194e54;
        case 0x194e58u: goto label_194e58;
        case 0x194e5cu: goto label_194e5c;
        case 0x194e60u: goto label_194e60;
        case 0x194e64u: goto label_194e64;
        case 0x194e68u: goto label_194e68;
        case 0x194e6cu: goto label_194e6c;
        case 0x194e70u: goto label_194e70;
        case 0x194e74u: goto label_194e74;
        case 0x194e78u: goto label_194e78;
        case 0x194e7cu: goto label_194e7c;
        case 0x194e80u: goto label_194e80;
        case 0x194e84u: goto label_194e84;
        case 0x194e88u: goto label_194e88;
        case 0x194e8cu: goto label_194e8c;
        case 0x194e90u: goto label_194e90;
        case 0x194e94u: goto label_194e94;
        case 0x194e98u: goto label_194e98;
        case 0x194e9cu: goto label_194e9c;
        case 0x194ea0u: goto label_194ea0;
        case 0x194ea4u: goto label_194ea4;
        case 0x194ea8u: goto label_194ea8;
        case 0x194eacu: goto label_194eac;
        case 0x194eb0u: goto label_194eb0;
        case 0x194eb4u: goto label_194eb4;
        case 0x194eb8u: goto label_194eb8;
        case 0x194ebcu: goto label_194ebc;
        case 0x194ec0u: goto label_194ec0;
        case 0x194ec4u: goto label_194ec4;
        case 0x194ec8u: goto label_194ec8;
        case 0x194eccu: goto label_194ecc;
        case 0x194ed0u: goto label_194ed0;
        case 0x194ed4u: goto label_194ed4;
        case 0x194ed8u: goto label_194ed8;
        case 0x194edcu: goto label_194edc;
        case 0x194ee0u: goto label_194ee0;
        case 0x194ee4u: goto label_194ee4;
        case 0x194ee8u: goto label_194ee8;
        case 0x194eecu: goto label_194eec;
        case 0x194ef0u: goto label_194ef0;
        case 0x194ef4u: goto label_194ef4;
        case 0x194ef8u: goto label_194ef8;
        case 0x194efcu: goto label_194efc;
        case 0x194f00u: goto label_194f00;
        case 0x194f04u: goto label_194f04;
        case 0x194f08u: goto label_194f08;
        case 0x194f0cu: goto label_194f0c;
        case 0x194f10u: goto label_194f10;
        case 0x194f14u: goto label_194f14;
        case 0x194f18u: goto label_194f18;
        case 0x194f1cu: goto label_194f1c;
        case 0x194f20u: goto label_194f20;
        case 0x194f24u: goto label_194f24;
        case 0x194f28u: goto label_194f28;
        case 0x194f2cu: goto label_194f2c;
        case 0x194f30u: goto label_194f30;
        case 0x194f34u: goto label_194f34;
        case 0x194f38u: goto label_194f38;
        case 0x194f3cu: goto label_194f3c;
        case 0x194f40u: goto label_194f40;
        case 0x194f44u: goto label_194f44;
        case 0x194f48u: goto label_194f48;
        case 0x194f4cu: goto label_194f4c;
        case 0x194f50u: goto label_194f50;
        case 0x194f54u: goto label_194f54;
        case 0x194f58u: goto label_194f58;
        case 0x194f5cu: goto label_194f5c;
        case 0x194f60u: goto label_194f60;
        case 0x194f64u: goto label_194f64;
        case 0x194f68u: goto label_194f68;
        case 0x194f6cu: goto label_194f6c;
        case 0x194f70u: goto label_194f70;
        case 0x194f74u: goto label_194f74;
        case 0x194f78u: goto label_194f78;
        case 0x194f7cu: goto label_194f7c;
        case 0x194f80u: goto label_194f80;
        case 0x194f84u: goto label_194f84;
        case 0x194f88u: goto label_194f88;
        case 0x194f8cu: goto label_194f8c;
        case 0x194f90u: goto label_194f90;
        case 0x194f94u: goto label_194f94;
        case 0x194f98u: goto label_194f98;
        case 0x194f9cu: goto label_194f9c;
        case 0x194fa0u: goto label_194fa0;
        case 0x194fa4u: goto label_194fa4;
        case 0x194fa8u: goto label_194fa8;
        case 0x194facu: goto label_194fac;
        case 0x194fb0u: goto label_194fb0;
        case 0x194fb4u: goto label_194fb4;
        case 0x194fb8u: goto label_194fb8;
        case 0x194fbcu: goto label_194fbc;
        case 0x194fc0u: goto label_194fc0;
        case 0x194fc4u: goto label_194fc4;
        case 0x194fc8u: goto label_194fc8;
        case 0x194fccu: goto label_194fcc;
        case 0x194fd0u: goto label_194fd0;
        case 0x194fd4u: goto label_194fd4;
        case 0x194fd8u: goto label_194fd8;
        case 0x194fdcu: goto label_194fdc;
        case 0x194fe0u: goto label_194fe0;
        case 0x194fe4u: goto label_194fe4;
        case 0x194fe8u: goto label_194fe8;
        case 0x194fecu: goto label_194fec;
        case 0x194ff0u: goto label_194ff0;
        case 0x194ff4u: goto label_194ff4;
        case 0x194ff8u: goto label_194ff8;
        case 0x194ffcu: goto label_194ffc;
        default: break;
    }

    ctx->pc = 0x194d80u;

label_194d80:
    // 0x194d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_194d84:
    // 0x194d84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x194d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_194d88:
    // 0x194d88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x194d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_194d8c:
    // 0x194d8c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x194d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_194d90:
    // 0x194d90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x194d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_194d94:
    // 0x194d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194d98:
    // 0x194d98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x194d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_194d9c:
    // 0x194d9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x194d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194da0:
    // 0x194da0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x194da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_194da4:
    // 0x194da4: 0x263303ac  addiu       $s3, $s1, 0x3AC
    ctx->pc = 0x194da4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
label_194da8:
    // 0x194da8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_194dac:
    // 0x194dac: 0x263001dc  addiu       $s0, $s1, 0x1DC
    ctx->pc = 0x194dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 476));
label_194db0:
    // 0x194db0: 0xae2203d8  sw          $v0, 0x3D8($s1)
    ctx->pc = 0x194db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 984), GPR_U32(ctx, 2));
label_194db4:
    // 0x194db4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194db8:
    // 0x194db8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_194dbc:
    // 0x194dbc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x194dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_194dc0:
    // 0x194dc0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x194dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_194dc4:
    // 0x194dc4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x194dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194dc8:
    // 0x194dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x194dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_194dcc:
    // 0x194dcc: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x194dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_194dd0:
    // 0x194dd0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x194dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_194dd4:
    // 0x194dd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194dd8:
    // 0x194dd8: 0xae20041c  sw          $zero, 0x41C($s1)
    ctx->pc = 0x194dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
label_194ddc:
    // 0x194ddc: 0xae200420  sw          $zero, 0x420($s1)
    ctx->pc = 0x194ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 0));
label_194de0:
    // 0x194de0: 0x40f809  jalr        $v0
label_194de4:
    if (ctx->pc == 0x194DE4u) {
        ctx->pc = 0x194DE4u;
            // 0x194de4: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x194DE8u;
        goto label_194de8;
    }
    ctx->pc = 0x194DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194DE8u);
        ctx->pc = 0x194DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194DE0u;
            // 0x194de4: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194DE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194DE8u; }
            if (ctx->pc != 0x194DE8u) { return; }
        }
        }
    }
    ctx->pc = 0x194DE8u;
label_194de8:
    // 0x194de8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x194de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_194dec:
    // 0x194dec: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x194decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_194df0:
    // 0x194df0: 0x625024  and         $t2, $v1, $v0
    ctx->pc = 0x194df0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_194df4:
    // 0x194df4: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x194df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_194df8:
    // 0x194df8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x194df8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_194dfc:
    // 0x194dfc: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x194dfcu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194e00:
    // 0x194e00: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194e00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194e04:
    // 0x194e04: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x194e04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194e08:
    // 0x194e08: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194e08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194e0c:
    // 0x194e0c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x194e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_194e10:
    // 0x194e10: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x194e10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194e14:
    // 0x194e14: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x194e14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_194e18:
    // 0x194e18: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194e18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194e1c:
    // 0x194e1c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x194e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_194e20:
    // 0x194e20: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x194e20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194e24:
    // 0x194e24: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x194e24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_194e28:
    // 0x194e28: 0x358c0  sll         $t3, $v1, 3
    ctx->pc = 0x194e28u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194e2c:
    // 0x194e2c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_194e30:
    // 0x194e30: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194e30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194e34:
    // 0x194e34: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x194e34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_194e38:
    // 0x194e38: 0x39630000  xori        $v1, $t3, 0x0
    ctx->pc = 0x194e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)0);
label_194e3c:
    // 0x194e3c: 0x1691004  sllv        $v0, $t1, $t3
    ctx->pc = 0x194e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
label_194e40:
    // 0x194e40: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x194e40u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_194e44:
    // 0x194e44: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x194e44u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194e48:
    // 0x194e48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194e48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194e4c:
    // 0x194e4c: 0x43600b  movn        $t4, $v0, $v1
    ctx->pc = 0x194e4cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
label_194e50:
    // 0x194e50: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x194e50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194e54:
    // 0x194e54: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x194e54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_194e58:
    // 0x194e58: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194e58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194e5c:
    // 0x194e5c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x194e5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194e60:
    // 0x194e60: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194e60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194e64:
    // 0x194e64: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x194e64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_194e68:
    // 0x194e68: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x194e68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194e6c:
    // 0x194e6c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x194e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_194e70:
    // 0x194e70: 0x29640007  slti        $a0, $t3, 0x7
    ctx->pc = 0x194e70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)7) ? 1 : 0);
label_194e74:
    // 0x194e74: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x194e74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_194e78:
    // 0x194e78: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194e78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194e7c:
    // 0x194e7c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x194e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_194e80:
    // 0x194e80: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_194e84:
    if (ctx->pc == 0x194E84u) {
        ctx->pc = 0x194E84u;
            // 0x194e84: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->pc = 0x194E88u;
        goto label_194e88;
    }
    ctx->pc = 0x194E80u;
    {
        const bool branch_taken_0x194e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x194E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194E80u;
            // 0x194e84: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e80) {
            ctx->pc = 0x194EF8u;
            goto label_194ef8;
        }
    }
    ctx->pc = 0x194E88u;
label_194e88:
    // 0x194e88: 0x256bfff9  addiu       $t3, $t3, -0x7
    ctx->pc = 0x194e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967289));
label_194e8c:
    // 0x194e8c: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
label_194e90:
    if (ctx->pc == 0x194E90u) {
        ctx->pc = 0x194E90u;
            // 0x194e90: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x194E94u;
        goto label_194e94;
    }
    ctx->pc = 0x194E8Cu;
    {
        const bool branch_taken_0x194e8c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194E8Cu;
            // 0x194e90: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e8c) {
            ctx->pc = 0x194EB0u;
            goto label_194eb0;
        }
    }
    ctx->pc = 0x194E94u;
label_194e94:
    // 0x194e94: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x194e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_194e98:
    // 0x194e98: 0x491006  srlv        $v0, $t1, $v0
    ctx->pc = 0x194e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_194e9c:
    // 0x194e9c: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x194e9cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_194ea0:
    // 0x194ea0: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x194ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_194ea4:
    // 0x194ea4: 0x10000004  b           . + 4 + (0x4 << 2)
label_194ea8:
    if (ctx->pc == 0x194EA8u) {
        ctx->pc = 0x194EA8u;
            // 0x194ea8: 0x1696004  sllv        $t4, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
        ctx->pc = 0x194EACu;
        goto label_194eac;
    }
    ctx->pc = 0x194EA4u;
    {
        const bool branch_taken_0x194ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194EA4u;
            // 0x194ea8: 0x1696004  sllv        $t4, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ea4) {
            ctx->pc = 0x194EB8u;
            goto label_194eb8;
        }
    }
    ctx->pc = 0x194EACu;
label_194eac:
    // 0x194eac: 0x0  nop
    ctx->pc = 0x194eacu;
    // NOP
label_194eb0:
    // 0x194eb0: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x194eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_194eb4:
    // 0x194eb4: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x194eb4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_194eb8:
    // 0x194eb8: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x194eb8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194ebc:
    // 0x194ebc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194ebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194ec0:
    // 0x194ec0: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x194ec0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194ec4:
    // 0x194ec4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194ec8:
    // 0x194ec8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x194ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_194ecc:
    // 0x194ecc: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x194eccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194ed0:
    // 0x194ed0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x194ed0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_194ed4:
    // 0x194ed4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194ed4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194ed8:
    // 0x194ed8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x194ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_194edc:
    // 0x194edc: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x194edcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_194ee0:
    // 0x194ee0: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x194ee0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_194ee4:
    // 0x194ee4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x194ee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_194ee8:
    // 0x194ee8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x194ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_194eec:
    // 0x194eec: 0x10000005  b           . + 4 + (0x5 << 2)
label_194ef0:
    if (ctx->pc == 0x194EF0u) {
        ctx->pc = 0x194EF0u;
            // 0x194ef0: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->pc = 0x194EF4u;
        goto label_194ef4;
    }
    ctx->pc = 0x194EECu;
    {
        const bool branch_taken_0x194eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194EECu;
            // 0x194ef0: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194eec) {
            ctx->pc = 0x194F04u;
            goto label_194f04;
        }
    }
    ctx->pc = 0x194EF4u;
label_194ef4:
    // 0x194ef4: 0x0  nop
    ctx->pc = 0x194ef4u;
    // NOP
label_194ef8:
    // 0x194ef8: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x194ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_194efc:
    // 0x194efc: 0xc6640  sll         $t4, $t4, 25
    ctx->pc = 0x194efcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_194f00:
    // 0x194f00: 0x256b0019  addiu       $t3, $t3, 0x19
    ctx->pc = 0x194f00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25));
label_194f04:
    // 0x194f04: 0x3088003f  andi        $t0, $a0, 0x3F
    ctx->pc = 0x194f04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_194f08:
    // 0x194f08: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x194f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_194f0c:
    // 0x194f0c: 0x3087003f  andi        $a3, $a0, 0x3F
    ctx->pc = 0x194f0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_194f10:
    // 0x194f10: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x194f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_194f14:
    // 0x194f14: 0x3086003f  andi        $a2, $a0, 0x3F
    ctx->pc = 0x194f14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_194f18:
    // 0x194f18: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x194f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_194f1c:
    // 0x194f1c: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x194f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_194f20:
    // 0x194f20: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x194f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_194f24:
    // 0x194f24: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x194f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_194f28:
    // 0x194f28: 0xc27c2  srl         $a0, $t4, 31
    ctx->pc = 0x194f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_194f2c:
    // 0x194f2c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x194f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_194f30:
    // 0x194f30: 0xae08002c  sw          $t0, 0x2C($s0)
    ctx->pc = 0x194f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 8));
label_194f34:
    // 0x194f34: 0xae070028  sw          $a3, 0x28($s0)
    ctx->pc = 0x194f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
label_194f38:
    // 0x194f38: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x194f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_194f3c:
    // 0x194f3c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x194f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_194f40:
    // 0x194f40: 0x15650005  bne         $t3, $a1, . + 4 + (0x5 << 2)
label_194f44:
    if (ctx->pc == 0x194F44u) {
        ctx->pc = 0x194F44u;
            // 0x194f44: 0xae2402d4  sw          $a0, 0x2D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 4));
        ctx->pc = 0x194F48u;
        goto label_194f48;
    }
    ctx->pc = 0x194F40u;
    {
        const bool branch_taken_0x194f40 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        ctx->pc = 0x194F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194F40u;
            // 0x194f44: 0xae2402d4  sw          $a0, 0x2D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f40) {
            ctx->pc = 0x194F58u;
            goto label_194f58;
        }
    }
    ctx->pc = 0x194F48u;
label_194f48:
    // 0x194f48: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x194f48u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_194f4c:
    // 0x194f4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x194f4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194f50:
    // 0x194f50: 0x10000003  b           . + 4 + (0x3 << 2)
label_194f54:
    if (ctx->pc == 0x194F54u) {
        ctx->pc = 0x194F54u;
            // 0x194f54: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->pc = 0x194F58u;
        goto label_194f58;
    }
    ctx->pc = 0x194F50u;
    {
        const bool branch_taken_0x194f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194F50u;
            // 0x194f54: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f50) {
            ctx->pc = 0x194F60u;
            goto label_194f60;
        }
    }
    ctx->pc = 0x194F58u;
label_194f58:
    // 0x194f58: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x194f58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_194f5c:
    // 0x194f5c: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x194f5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_194f60:
    // 0x194f60: 0xc17c2  srl         $v0, $t4, 31
    ctx->pc = 0x194f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_194f64:
    // 0x194f64: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x194f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_194f68:
    // 0x194f68: 0x15630005  bne         $t3, $v1, . + 4 + (0x5 << 2)
label_194f6c:
    if (ctx->pc == 0x194F6Cu) {
        ctx->pc = 0x194F6Cu;
            // 0x194f6c: 0xae2202d8  sw          $v0, 0x2D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
        ctx->pc = 0x194F70u;
        goto label_194f70;
    }
    ctx->pc = 0x194F68u;
    {
        const bool branch_taken_0x194f68 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        ctx->pc = 0x194F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194F68u;
            // 0x194f6c: 0xae2202d8  sw          $v0, 0x2D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f68) {
            ctx->pc = 0x194F80u;
            goto label_194f80;
        }
    }
    ctx->pc = 0x194F70u;
label_194f70:
    // 0x194f70: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x194f70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194f74:
    // 0x194f74: 0x10000003  b           . + 4 + (0x3 << 2)
label_194f78:
    if (ctx->pc == 0x194F78u) {
        ctx->pc = 0x194F78u;
            // 0x194f78: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->pc = 0x194F7Cu;
        goto label_194f7c;
    }
    ctx->pc = 0x194F74u;
    {
        const bool branch_taken_0x194f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194F74u;
            // 0x194f78: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f74) {
            ctx->pc = 0x194F84u;
            goto label_194f84;
        }
    }
    ctx->pc = 0x194F7Cu;
label_194f7c:
    // 0x194f7c: 0x0  nop
    ctx->pc = 0x194f7cu;
    // NOP
label_194f80:
    // 0x194f80: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x194f80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_194f84:
    // 0x194f84: 0x25650007  addiu       $a1, $t3, 0x7
    ctx->pc = 0x194f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
label_194f88:
    // 0x194f88: 0x8e2203ac  lw          $v0, 0x3AC($s1)
    ctx->pc = 0x194f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 940)));
label_194f8c:
    // 0x194f8c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x194f8cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_194f90:
    // 0x194f90: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x194f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_194f94:
    // 0x194f94: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x194f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_194f98:
    // 0x194f98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x194f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194f9c:
    // 0x194f9c: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x194f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_194fa0:
    // 0x194fa0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x194fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194fa4:
    // 0x194fa4: 0xc061c20  jal         func_187080
label_194fa8:
    if (ctx->pc == 0x194FA8u) {
        ctx->pc = 0x194FA8u;
            // 0x194fa8: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x194FACu;
        goto label_194fac;
    }
    ctx->pc = 0x194FA4u;
    SET_GPR_U32(ctx, 31, 0x194FACu);
    ctx->pc = 0x194FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194FA4u;
            // 0x194fa8: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194FACu; }
        if (ctx->pc != 0x194FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194FACu; }
        if (ctx->pc != 0x194FACu) { return; }
    }
    ctx->pc = 0x194FACu;
label_194fac:
    // 0x194fac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x194facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_194fb0:
    // 0x194fb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x194fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194fb4:
    // 0x194fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194fb8:
    // 0x194fb8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x194fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_194fbc:
    // 0x194fbc: 0x40f809  jalr        $v0
label_194fc0:
    if (ctx->pc == 0x194FC0u) {
        ctx->pc = 0x194FC0u;
            // 0x194fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194FC4u;
        goto label_194fc4;
    }
    ctx->pc = 0x194FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194FC4u);
        ctx->pc = 0x194FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194FBCu;
            // 0x194fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194FC4u; }
            if (ctx->pc != 0x194FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x194FC4u;
label_194fc4:
    // 0x194fc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x194fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_194fc8:
    // 0x194fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194fcc:
    // 0x194fcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194fd0:
    // 0x194fd0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x194fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_194fd4:
    // 0x194fd4: 0x40f809  jalr        $v0
label_194fd8:
    if (ctx->pc == 0x194FD8u) {
        ctx->pc = 0x194FD8u;
            // 0x194fd8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x194FDCu;
        goto label_194fdc;
    }
    ctx->pc = 0x194FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194FDCu);
        ctx->pc = 0x194FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194FD4u;
            // 0x194fd8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x194FDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x194FDCu; }
            if (ctx->pc != 0x194FDCu) { return; }
        }
        }
    }
    ctx->pc = 0x194FDCu;
label_194fdc:
    // 0x194fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x194fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194fe0:
    // 0x194fe0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x194fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_194fe4:
    // 0x194fe4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x194fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_194fe8:
    // 0x194fe8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x194fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_194fec:
    // 0x194fec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x194fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_194ff0:
    // 0x194ff0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_194ff4:
    // 0x194ff4: 0x3e00008  jr          $ra
label_194ff8:
    if (ctx->pc == 0x194FF8u) {
        ctx->pc = 0x194FF8u;
            // 0x194ff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x194FFCu;
        goto label_194ffc;
    }
    ctx->pc = 0x194FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194FF4u;
            // 0x194ff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194FFCu;
label_194ffc:
    // 0x194ffc: 0x0  nop
    ctx->pc = 0x194ffcu;
    // NOP
}
