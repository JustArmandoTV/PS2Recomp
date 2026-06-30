#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023D990
// Address: 0x23d990 - 0x23dc90
void sub_0023D990_0x23d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D990_0x23d990");
#endif

    switch (ctx->pc) {
        case 0x23d990u: goto label_23d990;
        case 0x23d994u: goto label_23d994;
        case 0x23d998u: goto label_23d998;
        case 0x23d99cu: goto label_23d99c;
        case 0x23d9a0u: goto label_23d9a0;
        case 0x23d9a4u: goto label_23d9a4;
        case 0x23d9a8u: goto label_23d9a8;
        case 0x23d9acu: goto label_23d9ac;
        case 0x23d9b0u: goto label_23d9b0;
        case 0x23d9b4u: goto label_23d9b4;
        case 0x23d9b8u: goto label_23d9b8;
        case 0x23d9bcu: goto label_23d9bc;
        case 0x23d9c0u: goto label_23d9c0;
        case 0x23d9c4u: goto label_23d9c4;
        case 0x23d9c8u: goto label_23d9c8;
        case 0x23d9ccu: goto label_23d9cc;
        case 0x23d9d0u: goto label_23d9d0;
        case 0x23d9d4u: goto label_23d9d4;
        case 0x23d9d8u: goto label_23d9d8;
        case 0x23d9dcu: goto label_23d9dc;
        case 0x23d9e0u: goto label_23d9e0;
        case 0x23d9e4u: goto label_23d9e4;
        case 0x23d9e8u: goto label_23d9e8;
        case 0x23d9ecu: goto label_23d9ec;
        case 0x23d9f0u: goto label_23d9f0;
        case 0x23d9f4u: goto label_23d9f4;
        case 0x23d9f8u: goto label_23d9f8;
        case 0x23d9fcu: goto label_23d9fc;
        case 0x23da00u: goto label_23da00;
        case 0x23da04u: goto label_23da04;
        case 0x23da08u: goto label_23da08;
        case 0x23da0cu: goto label_23da0c;
        case 0x23da10u: goto label_23da10;
        case 0x23da14u: goto label_23da14;
        case 0x23da18u: goto label_23da18;
        case 0x23da1cu: goto label_23da1c;
        case 0x23da20u: goto label_23da20;
        case 0x23da24u: goto label_23da24;
        case 0x23da28u: goto label_23da28;
        case 0x23da2cu: goto label_23da2c;
        case 0x23da30u: goto label_23da30;
        case 0x23da34u: goto label_23da34;
        case 0x23da38u: goto label_23da38;
        case 0x23da3cu: goto label_23da3c;
        case 0x23da40u: goto label_23da40;
        case 0x23da44u: goto label_23da44;
        case 0x23da48u: goto label_23da48;
        case 0x23da4cu: goto label_23da4c;
        case 0x23da50u: goto label_23da50;
        case 0x23da54u: goto label_23da54;
        case 0x23da58u: goto label_23da58;
        case 0x23da5cu: goto label_23da5c;
        case 0x23da60u: goto label_23da60;
        case 0x23da64u: goto label_23da64;
        case 0x23da68u: goto label_23da68;
        case 0x23da6cu: goto label_23da6c;
        case 0x23da70u: goto label_23da70;
        case 0x23da74u: goto label_23da74;
        case 0x23da78u: goto label_23da78;
        case 0x23da7cu: goto label_23da7c;
        case 0x23da80u: goto label_23da80;
        case 0x23da84u: goto label_23da84;
        case 0x23da88u: goto label_23da88;
        case 0x23da8cu: goto label_23da8c;
        case 0x23da90u: goto label_23da90;
        case 0x23da94u: goto label_23da94;
        case 0x23da98u: goto label_23da98;
        case 0x23da9cu: goto label_23da9c;
        case 0x23daa0u: goto label_23daa0;
        case 0x23daa4u: goto label_23daa4;
        case 0x23daa8u: goto label_23daa8;
        case 0x23daacu: goto label_23daac;
        case 0x23dab0u: goto label_23dab0;
        case 0x23dab4u: goto label_23dab4;
        case 0x23dab8u: goto label_23dab8;
        case 0x23dabcu: goto label_23dabc;
        case 0x23dac0u: goto label_23dac0;
        case 0x23dac4u: goto label_23dac4;
        case 0x23dac8u: goto label_23dac8;
        case 0x23daccu: goto label_23dacc;
        case 0x23dad0u: goto label_23dad0;
        case 0x23dad4u: goto label_23dad4;
        case 0x23dad8u: goto label_23dad8;
        case 0x23dadcu: goto label_23dadc;
        case 0x23dae0u: goto label_23dae0;
        case 0x23dae4u: goto label_23dae4;
        case 0x23dae8u: goto label_23dae8;
        case 0x23daecu: goto label_23daec;
        case 0x23daf0u: goto label_23daf0;
        case 0x23daf4u: goto label_23daf4;
        case 0x23daf8u: goto label_23daf8;
        case 0x23dafcu: goto label_23dafc;
        case 0x23db00u: goto label_23db00;
        case 0x23db04u: goto label_23db04;
        case 0x23db08u: goto label_23db08;
        case 0x23db0cu: goto label_23db0c;
        case 0x23db10u: goto label_23db10;
        case 0x23db14u: goto label_23db14;
        case 0x23db18u: goto label_23db18;
        case 0x23db1cu: goto label_23db1c;
        case 0x23db20u: goto label_23db20;
        case 0x23db24u: goto label_23db24;
        case 0x23db28u: goto label_23db28;
        case 0x23db2cu: goto label_23db2c;
        case 0x23db30u: goto label_23db30;
        case 0x23db34u: goto label_23db34;
        case 0x23db38u: goto label_23db38;
        case 0x23db3cu: goto label_23db3c;
        case 0x23db40u: goto label_23db40;
        case 0x23db44u: goto label_23db44;
        case 0x23db48u: goto label_23db48;
        case 0x23db4cu: goto label_23db4c;
        case 0x23db50u: goto label_23db50;
        case 0x23db54u: goto label_23db54;
        case 0x23db58u: goto label_23db58;
        case 0x23db5cu: goto label_23db5c;
        case 0x23db60u: goto label_23db60;
        case 0x23db64u: goto label_23db64;
        case 0x23db68u: goto label_23db68;
        case 0x23db6cu: goto label_23db6c;
        case 0x23db70u: goto label_23db70;
        case 0x23db74u: goto label_23db74;
        case 0x23db78u: goto label_23db78;
        case 0x23db7cu: goto label_23db7c;
        case 0x23db80u: goto label_23db80;
        case 0x23db84u: goto label_23db84;
        case 0x23db88u: goto label_23db88;
        case 0x23db8cu: goto label_23db8c;
        case 0x23db90u: goto label_23db90;
        case 0x23db94u: goto label_23db94;
        case 0x23db98u: goto label_23db98;
        case 0x23db9cu: goto label_23db9c;
        case 0x23dba0u: goto label_23dba0;
        case 0x23dba4u: goto label_23dba4;
        case 0x23dba8u: goto label_23dba8;
        case 0x23dbacu: goto label_23dbac;
        case 0x23dbb0u: goto label_23dbb0;
        case 0x23dbb4u: goto label_23dbb4;
        case 0x23dbb8u: goto label_23dbb8;
        case 0x23dbbcu: goto label_23dbbc;
        case 0x23dbc0u: goto label_23dbc0;
        case 0x23dbc4u: goto label_23dbc4;
        case 0x23dbc8u: goto label_23dbc8;
        case 0x23dbccu: goto label_23dbcc;
        case 0x23dbd0u: goto label_23dbd0;
        case 0x23dbd4u: goto label_23dbd4;
        case 0x23dbd8u: goto label_23dbd8;
        case 0x23dbdcu: goto label_23dbdc;
        case 0x23dbe0u: goto label_23dbe0;
        case 0x23dbe4u: goto label_23dbe4;
        case 0x23dbe8u: goto label_23dbe8;
        case 0x23dbecu: goto label_23dbec;
        case 0x23dbf0u: goto label_23dbf0;
        case 0x23dbf4u: goto label_23dbf4;
        case 0x23dbf8u: goto label_23dbf8;
        case 0x23dbfcu: goto label_23dbfc;
        case 0x23dc00u: goto label_23dc00;
        case 0x23dc04u: goto label_23dc04;
        case 0x23dc08u: goto label_23dc08;
        case 0x23dc0cu: goto label_23dc0c;
        case 0x23dc10u: goto label_23dc10;
        case 0x23dc14u: goto label_23dc14;
        case 0x23dc18u: goto label_23dc18;
        case 0x23dc1cu: goto label_23dc1c;
        case 0x23dc20u: goto label_23dc20;
        case 0x23dc24u: goto label_23dc24;
        case 0x23dc28u: goto label_23dc28;
        case 0x23dc2cu: goto label_23dc2c;
        case 0x23dc30u: goto label_23dc30;
        case 0x23dc34u: goto label_23dc34;
        case 0x23dc38u: goto label_23dc38;
        case 0x23dc3cu: goto label_23dc3c;
        case 0x23dc40u: goto label_23dc40;
        case 0x23dc44u: goto label_23dc44;
        case 0x23dc48u: goto label_23dc48;
        case 0x23dc4cu: goto label_23dc4c;
        case 0x23dc50u: goto label_23dc50;
        case 0x23dc54u: goto label_23dc54;
        case 0x23dc58u: goto label_23dc58;
        case 0x23dc5cu: goto label_23dc5c;
        case 0x23dc60u: goto label_23dc60;
        case 0x23dc64u: goto label_23dc64;
        case 0x23dc68u: goto label_23dc68;
        case 0x23dc6cu: goto label_23dc6c;
        case 0x23dc70u: goto label_23dc70;
        case 0x23dc74u: goto label_23dc74;
        case 0x23dc78u: goto label_23dc78;
        case 0x23dc7cu: goto label_23dc7c;
        case 0x23dc80u: goto label_23dc80;
        case 0x23dc84u: goto label_23dc84;
        case 0x23dc88u: goto label_23dc88;
        case 0x23dc8cu: goto label_23dc8c;
        default: break;
    }

    ctx->pc = 0x23d990u;

label_23d990:
    // 0x23d990: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_23d994:
    // 0x23d994: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23d994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23d998:
    // 0x23d998: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23d998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23d99c:
    // 0x23d99c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23d99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23d9a0:
    // 0x23d9a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23d9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23d9a4:
    // 0x23d9a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23d9a8:
    // 0x23d9a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23d9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23d9ac:
    // 0x23d9ac: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x23d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_23d9b0:
    // 0x23d9b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_23d9b4:
    if (ctx->pc == 0x23D9B4u) {
        ctx->pc = 0x23D9B4u;
            // 0x23d9b4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23D9B8u;
        goto label_23d9b8;
    }
    ctx->pc = 0x23D9B0u;
    {
        const bool branch_taken_0x23d9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D9B0u;
            // 0x23d9b4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9b0) {
            ctx->pc = 0x23D9D4u;
            goto label_23d9d4;
        }
    }
    ctx->pc = 0x23D9B8u;
label_23d9b8:
    // 0x23d9b8: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x23d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
label_23d9bc:
    // 0x23d9bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23d9c0:
    // 0x23d9c0: 0xa3a200a0  sb          $v0, 0xA0($sp)
    ctx->pc = 0x23d9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
label_23d9c4:
    // 0x23d9c4: 0xc08d1cc  jal         func_234730
label_23d9c8:
    if (ctx->pc == 0x23D9C8u) {
        ctx->pc = 0x23D9C8u;
            // 0x23d9c8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x23D9CCu;
        goto label_23d9cc;
    }
    ctx->pc = 0x23D9C4u;
    SET_GPR_U32(ctx, 31, 0x23D9CCu);
    ctx->pc = 0x23D9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D9C4u;
            // 0x23d9c8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D9CCu; }
        if (ctx->pc != 0x23D9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D9CCu; }
        if (ctx->pc != 0x23D9CCu) { return; }
    }
    ctx->pc = 0x23D9CCu;
label_23d9cc:
    // 0x23d9cc: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_23d9d0:
    if (ctx->pc == 0x23D9D0u) {
        ctx->pc = 0x23D9D0u;
            // 0x23d9d0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x23D9D4u;
        goto label_23d9d4;
    }
    ctx->pc = 0x23D9CCu;
    {
        const bool branch_taken_0x23d9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D9CCu;
            // 0x23d9d0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9cc) {
            ctx->pc = 0x23DC74u;
            goto label_23dc74;
        }
    }
    ctx->pc = 0x23D9D4u;
label_23d9d4:
    // 0x23d9d4: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x23d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_23d9d8:
    // 0x23d9d8: 0x24b10010  addiu       $s1, $a1, 0x10
    ctx->pc = 0x23d9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23d9dc:
    // 0x23d9dc: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x23d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_23d9e0:
    // 0x23d9e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23d9e4:
    // 0x23d9e4: 0x10800096  beqz        $a0, . + 4 + (0x96 << 2)
label_23d9e8:
    if (ctx->pc == 0x23D9E8u) {
        ctx->pc = 0x23D9E8u;
            // 0x23d9e8: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x23D9ECu;
        goto label_23d9ec;
    }
    ctx->pc = 0x23D9E4u;
    {
        const bool branch_taken_0x23d9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D9E4u;
            // 0x23d9e8: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9e4) {
            ctx->pc = 0x23DC40u;
            goto label_23dc40;
        }
    }
    ctx->pc = 0x23D9ECu;
label_23d9ec:
    // 0x23d9ec: 0x8e900318  lw          $s0, 0x318($s4)
    ctx->pc = 0x23d9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 792)));
label_23d9f0:
    // 0x23d9f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23d9f4:
    // 0x23d9f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23d9f8:
    // 0x23d9f8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23d9fc:
    // 0x23d9fc: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x23d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_23da00:
    // 0x23da00: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x23da00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_23da04:
    // 0x23da04: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x23da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23da08:
    // 0x23da08: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23da08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23da0c:
    // 0x23da0c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x23da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_23da10:
    // 0x23da10: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x23da10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23da14:
    // 0x23da14: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x23da14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_23da18:
    // 0x23da18: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23da18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23da1c:
    // 0x23da1c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23da20:
    // 0x23da20: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x23da20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23da24:
    // 0x23da24: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23da24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23da28:
    // 0x23da28: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_23da2c:
    if (ctx->pc == 0x23DA2Cu) {
        ctx->pc = 0x23DA2Cu;
            // 0x23da2c: 0x27b30070  addiu       $s3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x23DA30u;
        goto label_23da30;
    }
    ctx->pc = 0x23DA28u;
    {
        const bool branch_taken_0x23da28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA28u;
            // 0x23da2c: 0x27b30070  addiu       $s3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da28) {
            ctx->pc = 0x23DA38u;
            goto label_23da38;
        }
    }
    ctx->pc = 0x23DA30u;
label_23da30:
    // 0x23da30: 0x10000005  b           . + 4 + (0x5 << 2)
label_23da34:
    if (ctx->pc == 0x23DA34u) {
        ctx->pc = 0x23DA34u;
            // 0x23da34: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23DA38u;
        goto label_23da38;
    }
    ctx->pc = 0x23DA30u;
    {
        const bool branch_taken_0x23da30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA30u;
            // 0x23da34: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da30) {
            ctx->pc = 0x23DA48u;
            goto label_23da48;
        }
    }
    ctx->pc = 0x23DA38u;
label_23da38:
    // 0x23da38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23da38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23da3c:
    // 0x23da3c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23da3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23da40:
    // 0x23da40: 0x320f809  jalr        $t9
label_23da44:
    if (ctx->pc == 0x23DA44u) {
        ctx->pc = 0x23DA48u;
        goto label_23da48;
    }
    ctx->pc = 0x23DA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DA48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DA48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DA48u; }
            if (ctx->pc != 0x23DA48u) { return; }
        }
        }
    }
    ctx->pc = 0x23DA48u;
label_23da48:
    // 0x23da48: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23da48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23da4c:
    // 0x23da4c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x23da4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_23da50:
    // 0x23da50: 0x2051025  or          $v0, $s0, $a1
    ctx->pc = 0x23da50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
label_23da54:
    // 0x23da54: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x23da54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_23da58:
    // 0x23da58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x23da58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23da5c:
    // 0x23da5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23da60:
    // 0x23da60: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23da60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23da64:
    // 0x23da64: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x23da64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_23da68:
    // 0x23da68: 0x8e900318  lw          $s0, 0x318($s4)
    ctx->pc = 0x23da68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 792)));
label_23da6c:
    // 0x23da6c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x23da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23da70:
    // 0x23da70: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x23da70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_23da74:
    // 0x23da74: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x23da74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
label_23da78:
    // 0x23da78: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23da78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_23da7c:
    // 0x23da7c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x23da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_23da80:
    // 0x23da80: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x23da80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23da84:
    // 0x23da84: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x23da84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_23da88:
    // 0x23da88: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23da8c:
    // 0x23da8c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23da90:
    // 0x23da90: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x23da90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23da94:
    // 0x23da94: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23da94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23da98:
    // 0x23da98: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_23da9c:
    if (ctx->pc == 0x23DA9Cu) {
        ctx->pc = 0x23DA9Cu;
            // 0x23da9c: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23DAA0u;
        goto label_23daa0;
    }
    ctx->pc = 0x23DA98u;
    {
        const bool branch_taken_0x23da98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA98u;
            // 0x23da9c: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da98) {
            ctx->pc = 0x23DAA8u;
            goto label_23daa8;
        }
    }
    ctx->pc = 0x23DAA0u;
label_23daa0:
    // 0x23daa0: 0x10000005  b           . + 4 + (0x5 << 2)
label_23daa4:
    if (ctx->pc == 0x23DAA4u) {
        ctx->pc = 0x23DAA4u;
            // 0x23daa4: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23DAA8u;
        goto label_23daa8;
    }
    ctx->pc = 0x23DAA0u;
    {
        const bool branch_taken_0x23daa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DAA0u;
            // 0x23daa4: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23daa0) {
            ctx->pc = 0x23DAB8u;
            goto label_23dab8;
        }
    }
    ctx->pc = 0x23DAA8u;
label_23daa8:
    // 0x23daa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23daa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23daac:
    // 0x23daac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23daacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23dab0:
    // 0x23dab0: 0x320f809  jalr        $t9
label_23dab4:
    if (ctx->pc == 0x23DAB4u) {
        ctx->pc = 0x23DAB8u;
        goto label_23dab8;
    }
    ctx->pc = 0x23DAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DAB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DAB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DAB8u; }
            if (ctx->pc != 0x23DAB8u) { return; }
        }
        }
    }
    ctx->pc = 0x23DAB8u;
label_23dab8:
    // 0x23dab8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x23dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_23dabc:
    // 0x23dabc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x23dabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23dac0:
    // 0x23dac0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23dac4:
    // 0x23dac4: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x23dac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_23dac8:
    // 0x23dac8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_23dacc:
    // 0x23dacc: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x23daccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_23dad0:
    // 0x23dad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23dad4:
    // 0x23dad4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23dad8:
    // 0x23dad8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x23dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_23dadc:
    // 0x23dadc: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x23dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_23dae0:
    // 0x23dae0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23dae4:
    // 0x23dae4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x23dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23dae8:
    // 0x23dae8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x23dae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23daec:
    // 0x23daec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23daecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23daf0:
    // 0x23daf0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23daf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23daf4:
    // 0x23daf4: 0x320f809  jalr        $t9
label_23daf8:
    if (ctx->pc == 0x23DAF8u) {
        ctx->pc = 0x23DAF8u;
            // 0x23daf8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x23DAFCu;
        goto label_23dafc;
    }
    ctx->pc = 0x23DAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DAFCu);
        ctx->pc = 0x23DAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DAF4u;
            // 0x23daf8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DAFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DAFCu; }
            if (ctx->pc != 0x23DAFCu) { return; }
        }
        }
    }
    ctx->pc = 0x23DAFCu;
label_23dafc:
    // 0x23dafc: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x23dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_23db00:
    // 0x23db00: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x23db00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_23db04:
    // 0x23db04: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x23db04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_23db08:
    // 0x23db08: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x23db08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23db0c:
    // 0x23db0c: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x23db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_23db10:
    // 0x23db10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23db10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23db14:
    // 0x23db14: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x23db14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23db18:
    // 0x23db18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23db18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23db1c:
    // 0x23db1c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x23db1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_23db20:
    // 0x23db20: 0x320f809  jalr        $t9
label_23db24:
    if (ctx->pc == 0x23DB24u) {
        ctx->pc = 0x23DB24u;
            // 0x23db24: 0x27a90060  addiu       $t1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23DB28u;
        goto label_23db28;
    }
    ctx->pc = 0x23DB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DB28u);
        ctx->pc = 0x23DB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB20u;
            // 0x23db24: 0x27a90060  addiu       $t1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DB28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DB28u; }
            if (ctx->pc != 0x23DB28u) { return; }
        }
        }
    }
    ctx->pc = 0x23DB28u;
label_23db28:
    // 0x23db28: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x23db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_23db2c:
    // 0x23db2c: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x23db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_23db30:
    // 0x23db30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x23db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23db34:
    // 0x23db34: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_23db38:
    if (ctx->pc == 0x23DB38u) {
        ctx->pc = 0x23DB3Cu;
        goto label_23db3c;
    }
    ctx->pc = 0x23DB34u;
    {
        const bool branch_taken_0x23db34 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x23db34) {
            ctx->pc = 0x23DB78u;
            goto label_23db78;
        }
    }
    ctx->pc = 0x23DB3Cu;
label_23db3c:
    // 0x23db3c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x23db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23db40:
    // 0x23db40: 0xc07fb8c  jal         func_1FEE30
label_23db44:
    if (ctx->pc == 0x23DB44u) {
        ctx->pc = 0x23DB44u;
            // 0x23db44: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23DB48u;
        goto label_23db48;
    }
    ctx->pc = 0x23DB40u;
    SET_GPR_U32(ctx, 31, 0x23DB48u);
    ctx->pc = 0x23DB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB40u;
            // 0x23db44: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE30u;
    if (runtime->hasFunction(0x1FEE30u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB48u; }
        if (ctx->pc != 0x23DB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEE30_0x1fee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB48u; }
        if (ctx->pc != 0x23DB48u) { return; }
    }
    ctx->pc = 0x23DB48u;
label_23db48:
    // 0x23db48: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x23db48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_23db4c:
    // 0x23db4c: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x23db4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_23db50:
    // 0x23db50: 0xc07fb6c  jal         func_1FEDB0
label_23db54:
    if (ctx->pc == 0x23DB54u) {
        ctx->pc = 0x23DB54u;
            // 0x23db54: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->pc = 0x23DB58u;
        goto label_23db58;
    }
    ctx->pc = 0x23DB50u;
    SET_GPR_U32(ctx, 31, 0x23DB58u);
    ctx->pc = 0x23DB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB50u;
            // 0x23db54: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDB0u;
    if (runtime->hasFunction(0x1FEDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB58u; }
        if (ctx->pc != 0x23DB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEDB0_0x1fedb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB58u; }
        if (ctx->pc != 0x23DB58u) { return; }
    }
    ctx->pc = 0x23DB58u;
label_23db58:
    // 0x23db58: 0x8e870070  lw          $a3, 0x70($s4)
    ctx->pc = 0x23db58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_23db5c:
    // 0x23db5c: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_23db60:
    if (ctx->pc == 0x23DB60u) {
        ctx->pc = 0x23DB60u;
            // 0x23db60: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->pc = 0x23DB64u;
        goto label_23db64;
    }
    ctx->pc = 0x23DB5Cu;
    {
        const bool branch_taken_0x23db5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db5c) {
            ctx->pc = 0x23DB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB5Cu;
            // 0x23db60: 0x8e840058  lw          $a0, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DB6Cu;
            goto label_23db6c;
        }
    }
    ctx->pc = 0x23DB64u;
label_23db64:
    // 0x23db64: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x23db64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_23db68:
    // 0x23db68: 0x8e840058  lw          $a0, 0x58($s4)
    ctx->pc = 0x23db68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_23db6c:
    // 0x23db6c: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x23db6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_23db70:
    // 0x23db70: 0xc07fb38  jal         func_1FECE0
label_23db74:
    if (ctx->pc == 0x23DB74u) {
        ctx->pc = 0x23DB74u;
            // 0x23db74: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x23DB78u;
        goto label_23db78;
    }
    ctx->pc = 0x23DB70u;
    SET_GPR_U32(ctx, 31, 0x23DB78u);
    ctx->pc = 0x23DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB70u;
            // 0x23db74: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (runtime->hasFunction(0x1FECE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB78u; }
        if (ctx->pc != 0x23DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FECE0_0x1fece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB78u; }
        if (ctx->pc != 0x23DB78u) { return; }
    }
    ctx->pc = 0x23DB78u;
label_23db78:
    // 0x23db78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23db78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23db7c:
    // 0x23db7c: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x23db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_23db80:
    // 0x23db80: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23db80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23db84:
    // 0x23db84: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23db84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23db88:
    // 0x23db88: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23db88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23db8c:
    // 0x23db8c: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_23db90:
    if (ctx->pc == 0x23DB90u) {
        ctx->pc = 0x23DB90u;
            // 0x23db90: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->pc = 0x23DB94u;
        goto label_23db94;
    }
    ctx->pc = 0x23DB8Cu;
    {
        const bool branch_taken_0x23db8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23db8c) {
            ctx->pc = 0x23DB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB8Cu;
            // 0x23db90: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DBA8u;
            goto label_23dba8;
        }
    }
    ctx->pc = 0x23DB94u;
label_23db94:
    // 0x23db94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23db94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23db98:
    // 0x23db98: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23db98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23db9c:
    // 0x23db9c: 0x320f809  jalr        $t9
label_23dba0:
    if (ctx->pc == 0x23DBA0u) {
        ctx->pc = 0x23DBA4u;
        goto label_23dba4;
    }
    ctx->pc = 0x23DB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DBA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DBA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DBA4u; }
            if (ctx->pc != 0x23DBA4u) { return; }
        }
        }
    }
    ctx->pc = 0x23DBA4u;
label_23dba4:
    // 0x23dba4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23dba8:
    // 0x23dba8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23dbac:
    // 0x23dbac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23dbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23dbb0:
    // 0x23dbb0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_23dbb4:
    if (ctx->pc == 0x23DBB4u) {
        ctx->pc = 0x23DBB8u;
        goto label_23dbb8;
    }
    ctx->pc = 0x23DBB0u;
    {
        const bool branch_taken_0x23dbb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dbb0) {
            ctx->pc = 0x23DBDCu;
            goto label_23dbdc;
        }
    }
    ctx->pc = 0x23DBB8u;
label_23dbb8:
    // 0x23dbb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23dbbc:
    // 0x23dbbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23dbc0:
    // 0x23dbc0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23dbc4:
    // 0x23dbc4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23dbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23dbc8:
    // 0x23dbc8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x23dbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_23dbcc:
    // 0x23dbcc: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23dbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23dbd0:
    // 0x23dbd0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23dbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23dbd4:
    // 0x23dbd4: 0xc0a7ab4  jal         func_29EAD0
label_23dbd8:
    if (ctx->pc == 0x23DBD8u) {
        ctx->pc = 0x23DBD8u;
            // 0x23dbd8: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x23DBDCu;
        goto label_23dbdc;
    }
    ctx->pc = 0x23DBD4u;
    SET_GPR_U32(ctx, 31, 0x23DBDCu);
    ctx->pc = 0x23DBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DBD4u;
            // 0x23dbd8: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DBDCu; }
        if (ctx->pc != 0x23DBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DBDCu; }
        if (ctx->pc != 0x23DBDCu) { return; }
    }
    ctx->pc = 0x23DBDCu;
label_23dbdc:
    // 0x23dbdc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23dbe0:
    // 0x23dbe0: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x23dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_23dbe4:
    // 0x23dbe4: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23dbe8:
    // 0x23dbe8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23dbec:
    // 0x23dbec: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23dbf0:
    // 0x23dbf0: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_23dbf4:
    if (ctx->pc == 0x23DBF4u) {
        ctx->pc = 0x23DBF4u;
            // 0x23dbf4: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->pc = 0x23DBF8u;
        goto label_23dbf8;
    }
    ctx->pc = 0x23DBF0u;
    {
        const bool branch_taken_0x23dbf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23dbf0) {
            ctx->pc = 0x23DBF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DBF0u;
            // 0x23dbf4: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DC0Cu;
            goto label_23dc0c;
        }
    }
    ctx->pc = 0x23DBF8u;
label_23dbf8:
    // 0x23dbf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23dbf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23dbfc:
    // 0x23dbfc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23dbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23dc00:
    // 0x23dc00: 0x320f809  jalr        $t9
label_23dc04:
    if (ctx->pc == 0x23DC04u) {
        ctx->pc = 0x23DC08u;
        goto label_23dc08;
    }
    ctx->pc = 0x23DC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DC08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DC08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DC08u; }
            if (ctx->pc != 0x23DC08u) { return; }
        }
        }
    }
    ctx->pc = 0x23DC08u;
label_23dc08:
    // 0x23dc08: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_23dc0c:
    // 0x23dc0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23dc10:
    // 0x23dc10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23dc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23dc14:
    // 0x23dc14: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_23dc18:
    if (ctx->pc == 0x23DC18u) {
        ctx->pc = 0x23DC18u;
            // 0x23dc18: 0x8e830084  lw          $v1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->pc = 0x23DC1Cu;
        goto label_23dc1c;
    }
    ctx->pc = 0x23DC14u;
    {
        const bool branch_taken_0x23dc14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dc14) {
            ctx->pc = 0x23DC18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC14u;
            // 0x23dc18: 0x8e830084  lw          $v1, 0x84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DC44u;
            goto label_23dc44;
        }
    }
    ctx->pc = 0x23DC1Cu;
label_23dc1c:
    // 0x23dc1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23dc20:
    // 0x23dc20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_23dc24:
    // 0x23dc24: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23dc28:
    // 0x23dc28: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23dc2c:
    // 0x23dc2c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x23dc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_23dc30:
    // 0x23dc30: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23dc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23dc34:
    // 0x23dc34: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23dc38:
    // 0x23dc38: 0xc0a7ab4  jal         func_29EAD0
label_23dc3c:
    if (ctx->pc == 0x23DC3Cu) {
        ctx->pc = 0x23DC3Cu;
            // 0x23dc3c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x23DC40u;
        goto label_23dc40;
    }
    ctx->pc = 0x23DC38u;
    SET_GPR_U32(ctx, 31, 0x23DC40u);
    ctx->pc = 0x23DC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC38u;
            // 0x23dc3c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DC40u; }
        if (ctx->pc != 0x23DC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DC40u; }
        if (ctx->pc != 0x23DC40u) { return; }
    }
    ctx->pc = 0x23DC40u;
label_23dc40:
    // 0x23dc40: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x23dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_23dc44:
    // 0x23dc44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23dc48:
    // 0x23dc48: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_23dc4c:
    if (ctx->pc == 0x23DC4Cu) {
        ctx->pc = 0x23DC4Cu;
            // 0x23dc4c: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x23DC50u;
        goto label_23dc50;
    }
    ctx->pc = 0x23DC48u;
    {
        const bool branch_taken_0x23dc48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC48u;
            // 0x23dc4c: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc48) {
            ctx->pc = 0x23DC70u;
            goto label_23dc70;
        }
    }
    ctx->pc = 0x23DC50u;
label_23dc50:
    // 0x23dc50: 0x8e830080  lw          $v1, 0x80($s4)
    ctx->pc = 0x23dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_23dc54:
    // 0x23dc54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_23dc58:
    if (ctx->pc == 0x23DC58u) {
        ctx->pc = 0x23DC5Cu;
        goto label_23dc5c;
    }
    ctx->pc = 0x23DC54u;
    {
        const bool branch_taken_0x23dc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dc54) {
            ctx->pc = 0x23DC70u;
            goto label_23dc70;
        }
    }
    ctx->pc = 0x23DC5Cu;
label_23dc5c:
    // 0x23dc5c: 0x8283008c  lb          $v1, 0x8C($s4)
    ctx->pc = 0x23dc5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_23dc60:
    // 0x23dc60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_23dc64:
    if (ctx->pc == 0x23DC64u) {
        ctx->pc = 0x23DC68u;
        goto label_23dc68;
    }
    ctx->pc = 0x23DC60u;
    {
        const bool branch_taken_0x23dc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dc60) {
            ctx->pc = 0x23DC70u;
            goto label_23dc70;
        }
    }
    ctx->pc = 0x23DC68u;
label_23dc68:
    // 0x23dc68: 0xc08d1c4  jal         func_234710
label_23dc6c:
    if (ctx->pc == 0x23DC6Cu) {
        ctx->pc = 0x23DC6Cu;
            // 0x23dc6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23DC70u;
        goto label_23dc70;
    }
    ctx->pc = 0x23DC68u;
    SET_GPR_U32(ctx, 31, 0x23DC70u);
    ctx->pc = 0x23DC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC68u;
            // 0x23dc6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DC70u; }
        if (ctx->pc != 0x23DC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DC70u; }
        if (ctx->pc != 0x23DC70u) { return; }
    }
    ctx->pc = 0x23DC70u;
label_23dc70:
    // 0x23dc70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23dc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23dc74:
    // 0x23dc74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23dc74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23dc78:
    // 0x23dc78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23dc78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23dc7c:
    // 0x23dc7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23dc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23dc80:
    // 0x23dc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23dc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23dc84:
    // 0x23dc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23dc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23dc88:
    // 0x23dc88: 0x3e00008  jr          $ra
label_23dc8c:
    if (ctx->pc == 0x23DC8Cu) {
        ctx->pc = 0x23DC8Cu;
            // 0x23dc8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x23DC90u;
        goto label_fallthrough_0x23dc88;
    }
    ctx->pc = 0x23DC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC88u;
            // 0x23dc8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23dc88:
    ctx->pc = 0x23DC90u;
}
