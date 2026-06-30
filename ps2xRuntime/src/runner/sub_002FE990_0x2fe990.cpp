#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE990
// Address: 0x2fe990 - 0x2fec60
void sub_002FE990_0x2fe990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE990_0x2fe990");
#endif

    switch (ctx->pc) {
        case 0x2fe990u: goto label_2fe990;
        case 0x2fe994u: goto label_2fe994;
        case 0x2fe998u: goto label_2fe998;
        case 0x2fe99cu: goto label_2fe99c;
        case 0x2fe9a0u: goto label_2fe9a0;
        case 0x2fe9a4u: goto label_2fe9a4;
        case 0x2fe9a8u: goto label_2fe9a8;
        case 0x2fe9acu: goto label_2fe9ac;
        case 0x2fe9b0u: goto label_2fe9b0;
        case 0x2fe9b4u: goto label_2fe9b4;
        case 0x2fe9b8u: goto label_2fe9b8;
        case 0x2fe9bcu: goto label_2fe9bc;
        case 0x2fe9c0u: goto label_2fe9c0;
        case 0x2fe9c4u: goto label_2fe9c4;
        case 0x2fe9c8u: goto label_2fe9c8;
        case 0x2fe9ccu: goto label_2fe9cc;
        case 0x2fe9d0u: goto label_2fe9d0;
        case 0x2fe9d4u: goto label_2fe9d4;
        case 0x2fe9d8u: goto label_2fe9d8;
        case 0x2fe9dcu: goto label_2fe9dc;
        case 0x2fe9e0u: goto label_2fe9e0;
        case 0x2fe9e4u: goto label_2fe9e4;
        case 0x2fe9e8u: goto label_2fe9e8;
        case 0x2fe9ecu: goto label_2fe9ec;
        case 0x2fe9f0u: goto label_2fe9f0;
        case 0x2fe9f4u: goto label_2fe9f4;
        case 0x2fe9f8u: goto label_2fe9f8;
        case 0x2fe9fcu: goto label_2fe9fc;
        case 0x2fea00u: goto label_2fea00;
        case 0x2fea04u: goto label_2fea04;
        case 0x2fea08u: goto label_2fea08;
        case 0x2fea0cu: goto label_2fea0c;
        case 0x2fea10u: goto label_2fea10;
        case 0x2fea14u: goto label_2fea14;
        case 0x2fea18u: goto label_2fea18;
        case 0x2fea1cu: goto label_2fea1c;
        case 0x2fea20u: goto label_2fea20;
        case 0x2fea24u: goto label_2fea24;
        case 0x2fea28u: goto label_2fea28;
        case 0x2fea2cu: goto label_2fea2c;
        case 0x2fea30u: goto label_2fea30;
        case 0x2fea34u: goto label_2fea34;
        case 0x2fea38u: goto label_2fea38;
        case 0x2fea3cu: goto label_2fea3c;
        case 0x2fea40u: goto label_2fea40;
        case 0x2fea44u: goto label_2fea44;
        case 0x2fea48u: goto label_2fea48;
        case 0x2fea4cu: goto label_2fea4c;
        case 0x2fea50u: goto label_2fea50;
        case 0x2fea54u: goto label_2fea54;
        case 0x2fea58u: goto label_2fea58;
        case 0x2fea5cu: goto label_2fea5c;
        case 0x2fea60u: goto label_2fea60;
        case 0x2fea64u: goto label_2fea64;
        case 0x2fea68u: goto label_2fea68;
        case 0x2fea6cu: goto label_2fea6c;
        case 0x2fea70u: goto label_2fea70;
        case 0x2fea74u: goto label_2fea74;
        case 0x2fea78u: goto label_2fea78;
        case 0x2fea7cu: goto label_2fea7c;
        case 0x2fea80u: goto label_2fea80;
        case 0x2fea84u: goto label_2fea84;
        case 0x2fea88u: goto label_2fea88;
        case 0x2fea8cu: goto label_2fea8c;
        case 0x2fea90u: goto label_2fea90;
        case 0x2fea94u: goto label_2fea94;
        case 0x2fea98u: goto label_2fea98;
        case 0x2fea9cu: goto label_2fea9c;
        case 0x2feaa0u: goto label_2feaa0;
        case 0x2feaa4u: goto label_2feaa4;
        case 0x2feaa8u: goto label_2feaa8;
        case 0x2feaacu: goto label_2feaac;
        case 0x2feab0u: goto label_2feab0;
        case 0x2feab4u: goto label_2feab4;
        case 0x2feab8u: goto label_2feab8;
        case 0x2feabcu: goto label_2feabc;
        case 0x2feac0u: goto label_2feac0;
        case 0x2feac4u: goto label_2feac4;
        case 0x2feac8u: goto label_2feac8;
        case 0x2feaccu: goto label_2feacc;
        case 0x2fead0u: goto label_2fead0;
        case 0x2fead4u: goto label_2fead4;
        case 0x2fead8u: goto label_2fead8;
        case 0x2feadcu: goto label_2feadc;
        case 0x2feae0u: goto label_2feae0;
        case 0x2feae4u: goto label_2feae4;
        case 0x2feae8u: goto label_2feae8;
        case 0x2feaecu: goto label_2feaec;
        case 0x2feaf0u: goto label_2feaf0;
        case 0x2feaf4u: goto label_2feaf4;
        case 0x2feaf8u: goto label_2feaf8;
        case 0x2feafcu: goto label_2feafc;
        case 0x2feb00u: goto label_2feb00;
        case 0x2feb04u: goto label_2feb04;
        case 0x2feb08u: goto label_2feb08;
        case 0x2feb0cu: goto label_2feb0c;
        case 0x2feb10u: goto label_2feb10;
        case 0x2feb14u: goto label_2feb14;
        case 0x2feb18u: goto label_2feb18;
        case 0x2feb1cu: goto label_2feb1c;
        case 0x2feb20u: goto label_2feb20;
        case 0x2feb24u: goto label_2feb24;
        case 0x2feb28u: goto label_2feb28;
        case 0x2feb2cu: goto label_2feb2c;
        case 0x2feb30u: goto label_2feb30;
        case 0x2feb34u: goto label_2feb34;
        case 0x2feb38u: goto label_2feb38;
        case 0x2feb3cu: goto label_2feb3c;
        case 0x2feb40u: goto label_2feb40;
        case 0x2feb44u: goto label_2feb44;
        case 0x2feb48u: goto label_2feb48;
        case 0x2feb4cu: goto label_2feb4c;
        case 0x2feb50u: goto label_2feb50;
        case 0x2feb54u: goto label_2feb54;
        case 0x2feb58u: goto label_2feb58;
        case 0x2feb5cu: goto label_2feb5c;
        case 0x2feb60u: goto label_2feb60;
        case 0x2feb64u: goto label_2feb64;
        case 0x2feb68u: goto label_2feb68;
        case 0x2feb6cu: goto label_2feb6c;
        case 0x2feb70u: goto label_2feb70;
        case 0x2feb74u: goto label_2feb74;
        case 0x2feb78u: goto label_2feb78;
        case 0x2feb7cu: goto label_2feb7c;
        case 0x2feb80u: goto label_2feb80;
        case 0x2feb84u: goto label_2feb84;
        case 0x2feb88u: goto label_2feb88;
        case 0x2feb8cu: goto label_2feb8c;
        case 0x2feb90u: goto label_2feb90;
        case 0x2feb94u: goto label_2feb94;
        case 0x2feb98u: goto label_2feb98;
        case 0x2feb9cu: goto label_2feb9c;
        case 0x2feba0u: goto label_2feba0;
        case 0x2feba4u: goto label_2feba4;
        case 0x2feba8u: goto label_2feba8;
        case 0x2febacu: goto label_2febac;
        case 0x2febb0u: goto label_2febb0;
        case 0x2febb4u: goto label_2febb4;
        case 0x2febb8u: goto label_2febb8;
        case 0x2febbcu: goto label_2febbc;
        case 0x2febc0u: goto label_2febc0;
        case 0x2febc4u: goto label_2febc4;
        case 0x2febc8u: goto label_2febc8;
        case 0x2febccu: goto label_2febcc;
        case 0x2febd0u: goto label_2febd0;
        case 0x2febd4u: goto label_2febd4;
        case 0x2febd8u: goto label_2febd8;
        case 0x2febdcu: goto label_2febdc;
        case 0x2febe0u: goto label_2febe0;
        case 0x2febe4u: goto label_2febe4;
        case 0x2febe8u: goto label_2febe8;
        case 0x2febecu: goto label_2febec;
        case 0x2febf0u: goto label_2febf0;
        case 0x2febf4u: goto label_2febf4;
        case 0x2febf8u: goto label_2febf8;
        case 0x2febfcu: goto label_2febfc;
        case 0x2fec00u: goto label_2fec00;
        case 0x2fec04u: goto label_2fec04;
        case 0x2fec08u: goto label_2fec08;
        case 0x2fec0cu: goto label_2fec0c;
        case 0x2fec10u: goto label_2fec10;
        case 0x2fec14u: goto label_2fec14;
        case 0x2fec18u: goto label_2fec18;
        case 0x2fec1cu: goto label_2fec1c;
        case 0x2fec20u: goto label_2fec20;
        case 0x2fec24u: goto label_2fec24;
        case 0x2fec28u: goto label_2fec28;
        case 0x2fec2cu: goto label_2fec2c;
        case 0x2fec30u: goto label_2fec30;
        case 0x2fec34u: goto label_2fec34;
        case 0x2fec38u: goto label_2fec38;
        case 0x2fec3cu: goto label_2fec3c;
        case 0x2fec40u: goto label_2fec40;
        case 0x2fec44u: goto label_2fec44;
        case 0x2fec48u: goto label_2fec48;
        case 0x2fec4cu: goto label_2fec4c;
        case 0x2fec50u: goto label_2fec50;
        case 0x2fec54u: goto label_2fec54;
        case 0x2fec58u: goto label_2fec58;
        case 0x2fec5cu: goto label_2fec5c;
        default: break;
    }

    ctx->pc = 0x2fe990u;

label_2fe990:
    // 0x2fe990: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2fe990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_2fe994:
    // 0x2fe994: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fe994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2fe998:
    // 0x2fe998: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2fe998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_2fe99c:
    // 0x2fe99c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2fe99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_2fe9a0:
    // 0x2fe9a0: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x2fe9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_2fe9a4:
    // 0x2fe9a4: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x2fe9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_2fe9a8:
    // 0x2fe9a8: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x2fe9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
label_2fe9ac:
    // 0x2fe9ac: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2fe9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2fe9b0:
    // 0x2fe9b0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2fe9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_2fe9b4:
    // 0x2fe9b4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2fe9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_2fe9b8:
    // 0x2fe9b8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2fe9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2fe9bc:
    // 0x2fe9bc: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fe9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_2fe9c0:
    // 0x2fe9c0: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x2fe9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
label_2fe9c4:
    // 0x2fe9c4: 0x3e00008  jr          $ra
label_2fe9c8:
    if (ctx->pc == 0x2FE9C8u) {
        ctx->pc = 0x2FE9C8u;
            // 0x2fe9c8: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x2FE9CCu;
        goto label_2fe9cc;
    }
    ctx->pc = 0x2FE9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE9C4u;
            // 0x2fe9c8: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE9CCu;
label_2fe9cc:
    // 0x2fe9cc: 0x0  nop
    ctx->pc = 0x2fe9ccu;
    // NOP
label_2fe9d0:
    // 0x2fe9d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fe9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2fe9d4:
    // 0x2fe9d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2fe9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2fe9d8:
    // 0x2fe9d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fe9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2fe9dc:
    // 0x2fe9dc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2fe9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2fe9e0:
    // 0x2fe9e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fe9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fe9e4:
    // 0x2fe9e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fe9e8:
    // 0x2fe9e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fe9ec:
    // 0x2fe9ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fe9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2fe9f0:
    // 0x2fe9f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe9f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe9f4:
    // 0x2fe9f4: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2fe9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2fe9f8:
    // 0x2fe9f8: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x2fe9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_2fe9fc:
    // 0x2fe9fc: 0xc0fe54c  jal         func_3F9530
label_2fea00:
    if (ctx->pc == 0x2FEA00u) {
        ctx->pc = 0x2FEA00u;
            // 0x2fea00: 0x32980  sll         $a1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->pc = 0x2FEA04u;
        goto label_2fea04;
    }
    ctx->pc = 0x2FE9FCu;
    SET_GPR_U32(ctx, 31, 0x2FEA04u);
    ctx->pc = 0x2FEA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE9FCu;
            // 0x2fea00: 0x32980  sll         $a1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA04u; }
        if (ctx->pc != 0x2FEA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA04u; }
        if (ctx->pc != 0x2FEA04u) { return; }
    }
    ctx->pc = 0x2FEA04u;
label_2fea04:
    // 0x2fea04: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2fea04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2fea08:
    // 0x2fea08: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2fea08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2fea0c:
    // 0x2fea0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2fea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2fea10:
    // 0x2fea10: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x2fea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_2fea14:
    // 0x2fea14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fea18:
    // 0x2fea18: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2fea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2fea1c:
    // 0x2fea1c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2fea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2fea20:
    // 0x2fea20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fea24:
    // 0x2fea24: 0xc0fe54c  jal         func_3F9530
label_2fea28:
    if (ctx->pc == 0x2FEA28u) {
        ctx->pc = 0x2FEA28u;
            // 0x2fea28: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2FEA2Cu;
        goto label_2fea2c;
    }
    ctx->pc = 0x2FEA24u;
    SET_GPR_U32(ctx, 31, 0x2FEA2Cu);
    ctx->pc = 0x2FEA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA24u;
            // 0x2fea28: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA2Cu; }
        if (ctx->pc != 0x2FEA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA2Cu; }
        if (ctx->pc != 0x2FEA2Cu) { return; }
    }
    ctx->pc = 0x2FEA2Cu;
label_2fea2c:
    // 0x2fea2c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2fea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2fea30:
    // 0x2fea30: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2fea30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2fea34:
    // 0x2fea34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2fea34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2fea38:
    // 0x2fea38: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x2fea38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_2fea3c:
    // 0x2fea3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fea40:
    // 0x2fea40: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x2fea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2fea44:
    // 0x2fea44: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2fea44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2fea48:
    // 0x2fea48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fea4c:
    // 0x2fea4c: 0xc0fe54c  jal         func_3F9530
label_2fea50:
    if (ctx->pc == 0x2FEA50u) {
        ctx->pc = 0x2FEA50u;
            // 0x2fea50: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2FEA54u;
        goto label_2fea54;
    }
    ctx->pc = 0x2FEA4Cu;
    SET_GPR_U32(ctx, 31, 0x2FEA54u);
    ctx->pc = 0x2FEA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA4Cu;
            // 0x2fea50: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA54u; }
        if (ctx->pc != 0x2FEA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA54u; }
        if (ctx->pc != 0x2FEA54u) { return; }
    }
    ctx->pc = 0x2FEA54u;
label_2fea54:
    // 0x2fea54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2fea54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2fea58:
    // 0x2fea58: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2fea58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2fea5c:
    // 0x2fea5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2fea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2fea60:
    // 0x2fea60: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x2fea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_2fea64:
    // 0x2fea64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fea68:
    // 0x2fea68: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2fea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2fea6c:
    // 0x2fea6c: 0xc0fe54c  jal         func_3F9530
label_2fea70:
    if (ctx->pc == 0x2FEA70u) {
        ctx->pc = 0x2FEA70u;
            // 0x2fea70: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2FEA74u;
        goto label_2fea74;
    }
    ctx->pc = 0x2FEA6Cu;
    SET_GPR_U32(ctx, 31, 0x2FEA74u);
    ctx->pc = 0x2FEA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA6Cu;
            // 0x2fea70: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA74u; }
        if (ctx->pc != 0x2FEA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA74u; }
        if (ctx->pc != 0x2FEA74u) { return; }
    }
    ctx->pc = 0x2FEA74u;
label_2fea74:
    // 0x2fea74: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2fea74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2fea78:
    // 0x2fea78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fea7c:
    // 0x2fea7c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x2fea7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2fea80:
    // 0x2fea80: 0x8c520028  lw          $s2, 0x28($v0)
    ctx->pc = 0x2fea80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2fea84:
    // 0x2fea84: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x2fea84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2fea88:
    // 0x2fea88: 0xc04c968  jal         func_1325A0
label_2fea8c:
    if (ctx->pc == 0x2FEA8Cu) {
        ctx->pc = 0x2FEA8Cu;
            // 0x2fea8c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x2FEA90u;
        goto label_2fea90;
    }
    ctx->pc = 0x2FEA88u;
    SET_GPR_U32(ctx, 31, 0x2FEA90u);
    ctx->pc = 0x2FEA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA88u;
            // 0x2fea8c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA90u; }
        if (ctx->pc != 0x2FEA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA90u; }
        if (ctx->pc != 0x2FEA90u) { return; }
    }
    ctx->pc = 0x2FEA90u;
label_2fea90:
    // 0x2fea90: 0xc04c968  jal         func_1325A0
label_2fea94:
    if (ctx->pc == 0x2FEA94u) {
        ctx->pc = 0x2FEA94u;
            // 0x2fea94: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2FEA98u;
        goto label_2fea98;
    }
    ctx->pc = 0x2FEA90u;
    SET_GPR_U32(ctx, 31, 0x2FEA98u);
    ctx->pc = 0x2FEA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEA90u;
            // 0x2fea94: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA98u; }
        if (ctx->pc != 0x2FEA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEA98u; }
        if (ctx->pc != 0x2FEA98u) { return; }
    }
    ctx->pc = 0x2FEA98u;
label_2fea98:
    // 0x2fea98: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2fea98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2fea9c:
    // 0x2fea9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2feaa0:
    // 0x2feaa0: 0xc04cc04  jal         func_133010
label_2feaa4:
    if (ctx->pc == 0x2FEAA4u) {
        ctx->pc = 0x2FEAA4u;
            // 0x2feaa4: 0x24a52460  addiu       $a1, $a1, 0x2460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9312));
        ctx->pc = 0x2FEAA8u;
        goto label_2feaa8;
    }
    ctx->pc = 0x2FEAA0u;
    SET_GPR_U32(ctx, 31, 0x2FEAA8u);
    ctx->pc = 0x2FEAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAA0u;
            // 0x2feaa4: 0x24a52460  addiu       $a1, $a1, 0x2460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAA8u; }
        if (ctx->pc != 0x2FEAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAA8u; }
        if (ctx->pc != 0x2FEAA8u) { return; }
    }
    ctx->pc = 0x2FEAA8u;
label_2feaa8:
    // 0x2feaa8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2feaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2feaac:
    // 0x2feaac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2feaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2feab0:
    // 0x2feab0: 0xc04cc04  jal         func_133010
label_2feab4:
    if (ctx->pc == 0x2FEAB4u) {
        ctx->pc = 0x2FEAB4u;
            // 0x2feab4: 0x24a52460  addiu       $a1, $a1, 0x2460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9312));
        ctx->pc = 0x2FEAB8u;
        goto label_2feab8;
    }
    ctx->pc = 0x2FEAB0u;
    SET_GPR_U32(ctx, 31, 0x2FEAB8u);
    ctx->pc = 0x2FEAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAB0u;
            // 0x2feab4: 0x24a52460  addiu       $a1, $a1, 0x2460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAB8u; }
        if (ctx->pc != 0x2FEAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAB8u; }
        if (ctx->pc != 0x2FEAB8u) { return; }
    }
    ctx->pc = 0x2FEAB8u;
label_2feab8:
    // 0x2feab8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2feab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2feabc:
    // 0x2feabc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2feabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2feac0:
    // 0x2feac0: 0xc04cc04  jal         func_133010
label_2feac4:
    if (ctx->pc == 0x2FEAC4u) {
        ctx->pc = 0x2FEAC4u;
            // 0x2feac4: 0x24a52450  addiu       $a1, $a1, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9296));
        ctx->pc = 0x2FEAC8u;
        goto label_2feac8;
    }
    ctx->pc = 0x2FEAC0u;
    SET_GPR_U32(ctx, 31, 0x2FEAC8u);
    ctx->pc = 0x2FEAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAC0u;
            // 0x2feac4: 0x24a52450  addiu       $a1, $a1, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAC8u; }
        if (ctx->pc != 0x2FEAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAC8u; }
        if (ctx->pc != 0x2FEAC8u) { return; }
    }
    ctx->pc = 0x2FEAC8u;
label_2feac8:
    // 0x2feac8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2feac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_2feacc:
    // 0x2feacc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2feaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2fead0:
    // 0x2fead0: 0xc04cc04  jal         func_133010
label_2fead4:
    if (ctx->pc == 0x2FEAD4u) {
        ctx->pc = 0x2FEAD4u;
            // 0x2fead4: 0x24a52450  addiu       $a1, $a1, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9296));
        ctx->pc = 0x2FEAD8u;
        goto label_2fead8;
    }
    ctx->pc = 0x2FEAD0u;
    SET_GPR_U32(ctx, 31, 0x2FEAD8u);
    ctx->pc = 0x2FEAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAD0u;
            // 0x2fead4: 0x24a52450  addiu       $a1, $a1, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAD8u; }
        if (ctx->pc != 0x2FEAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEAD8u; }
        if (ctx->pc != 0x2FEAD8u) { return; }
    }
    ctx->pc = 0x2FEAD8u;
label_2fead8:
    // 0x2fead8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2fead8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2feadc:
    // 0x2feadc: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x2feadcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2feae0:
    // 0x2feae0: 0x1640ffe9  bnez        $s2, . + 4 + (-0x17 << 2)
label_2feae4:
    if (ctx->pc == 0x2FEAE4u) {
        ctx->pc = 0x2FEAE4u;
            // 0x2feae4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x2FEAE8u;
        goto label_2feae8;
    }
    ctx->pc = 0x2FEAE0u;
    {
        const bool branch_taken_0x2feae0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAE0u;
            // 0x2feae4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feae0) {
            ctx->pc = 0x2FEA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fea88;
        }
    }
    ctx->pc = 0x2FEAE8u;
label_2feae8:
    // 0x2feae8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2feae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2feaec:
    // 0x2feaec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2feaecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2feaf0:
    // 0x2feaf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2feaf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2feaf4:
    // 0x2feaf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2feaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2feaf8:
    // 0x2feaf8: 0x3e00008  jr          $ra
label_2feafc:
    if (ctx->pc == 0x2FEAFCu) {
        ctx->pc = 0x2FEAFCu;
            // 0x2feafc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2FEB00u;
        goto label_2feb00;
    }
    ctx->pc = 0x2FEAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEAF8u;
            // 0x2feafc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FEB00u;
label_2feb00:
    // 0x2feb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2feb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2feb04:
    // 0x2feb04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2feb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2feb08:
    // 0x2feb08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2feb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2feb0c:
    // 0x2feb0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2feb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2feb10:
    // 0x2feb10: 0x8c830e30  lw          $v1, 0xE30($a0)
    ctx->pc = 0x2feb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3632)));
label_2feb14:
    // 0x2feb14: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x2feb14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2feb18:
    // 0x2feb18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2feb1c:
    if (ctx->pc == 0x2FEB1Cu) {
        ctx->pc = 0x2FEB1Cu;
            // 0x2feb1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB20u;
        goto label_2feb20;
    }
    ctx->pc = 0x2FEB18u;
    {
        const bool branch_taken_0x2feb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB18u;
            // 0x2feb1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb18) {
            ctx->pc = 0x2FEB28u;
            goto label_2feb28;
        }
    }
    ctx->pc = 0x2FEB20u;
label_2feb20:
    // 0x2feb20: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2feb24:
    if (ctx->pc == 0x2FEB24u) {
        ctx->pc = 0x2FEB24u;
            // 0x2feb24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2FEB28u;
        goto label_2feb28;
    }
    ctx->pc = 0x2FEB20u;
    {
        const bool branch_taken_0x2feb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB20u;
            // 0x2feb24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb20) {
            ctx->pc = 0x2FEB94u;
            goto label_2feb94;
        }
    }
    ctx->pc = 0x2FEB28u;
label_2feb28:
    // 0x2feb28: 0x8203010c  lb          $v1, 0x10C($s0)
    ctx->pc = 0x2feb28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_2feb2c:
    // 0x2feb2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2feb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2feb30:
    // 0x2feb30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2feb30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2feb34:
    // 0x2feb34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2feb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2feb38:
    // 0x2feb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2feb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2feb3c:
    // 0x2feb3c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2feb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2feb40:
    // 0x2feb40: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2feb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2feb44:
    // 0x2feb44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2feb44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2feb48:
    // 0x2feb48: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2feb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2feb4c:
    // 0x2feb4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2feb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2feb50:
    // 0x2feb50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2feb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2feb54:
    // 0x2feb54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2feb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2feb58:
    // 0x2feb58: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x2feb58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_2feb5c:
    // 0x2feb5c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2feb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2feb60:
    // 0x2feb60: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2feb60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2feb64:
    // 0x2feb64: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2feb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2feb68:
    // 0x2feb68: 0x320f809  jalr        $t9
label_2feb6c:
    if (ctx->pc == 0x2FEB6Cu) {
        ctx->pc = 0x2FEB6Cu;
            // 0x2feb6c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2FEB70u;
        goto label_2feb70;
    }
    ctx->pc = 0x2FEB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEB70u);
        ctx->pc = 0x2FEB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB68u;
            // 0x2feb6c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEB70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB70u; }
            if (ctx->pc != 0x2FEB70u) { return; }
        }
        }
    }
    ctx->pc = 0x2FEB70u;
label_2feb70:
    // 0x2feb70: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2feb70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2feb74:
    // 0x2feb74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2feb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2feb78:
    // 0x2feb78: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2feb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2feb7c:
    // 0x2feb7c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2feb7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2feb80:
    // 0x2feb80: 0x320f809  jalr        $t9
label_2feb84:
    if (ctx->pc == 0x2FEB84u) {
        ctx->pc = 0x2FEB84u;
            // 0x2feb84: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FEB88u;
        goto label_2feb88;
    }
    ctx->pc = 0x2FEB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEB88u);
        ctx->pc = 0x2FEB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB80u;
            // 0x2feb84: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEB88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEB88u; }
            if (ctx->pc != 0x2FEB88u) { return; }
        }
        }
    }
    ctx->pc = 0x2FEB88u;
label_2feb88:
    // 0x2feb88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2feb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2feb8c:
    // 0x2feb8c: 0xae230e30  sw          $v1, 0xE30($s1)
    ctx->pc = 0x2feb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 3));
label_2feb90:
    // 0x2feb90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2feb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2feb94:
    // 0x2feb94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2feb94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2feb98:
    // 0x2feb98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2feb98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2feb9c:
    // 0x2feb9c: 0x3e00008  jr          $ra
label_2feba0:
    if (ctx->pc == 0x2FEBA0u) {
        ctx->pc = 0x2FEBA0u;
            // 0x2feba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FEBA4u;
        goto label_2feba4;
    }
    ctx->pc = 0x2FEB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEB9Cu;
            // 0x2feba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FEBA4u;
label_2feba4:
    // 0x2feba4: 0x0  nop
    ctx->pc = 0x2feba4u;
    // NOP
label_2feba8:
    // 0x2feba8: 0x0  nop
    ctx->pc = 0x2feba8u;
    // NOP
label_2febac:
    // 0x2febac: 0x0  nop
    ctx->pc = 0x2febacu;
    // NOP
label_2febb0:
    // 0x2febb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2febb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2febb4:
    // 0x2febb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2febb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2febb8:
    // 0x2febb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2febb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2febbc:
    // 0x2febbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2febbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2febc0:
    // 0x2febc0: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x2febc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_2febc4:
    // 0x2febc4: 0xc0c15dc  jal         func_305770
label_2febc8:
    if (ctx->pc == 0x2FEBC8u) {
        ctx->pc = 0x2FEBC8u;
            // 0x2febc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEBCCu;
        goto label_2febcc;
    }
    ctx->pc = 0x2FEBC4u;
    SET_GPR_U32(ctx, 31, 0x2FEBCCu);
    ctx->pc = 0x2FEBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEBC4u;
            // 0x2febc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305770u;
    if (runtime->hasFunction(0x305770u)) {
        auto targetFn = runtime->lookupFunction(0x305770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBCCu; }
        if (ctx->pc != 0x2FEBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305770_0x305770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEBCCu; }
        if (ctx->pc != 0x2FEBCCu) { return; }
    }
    ctx->pc = 0x2FEBCCu;
label_2febcc:
    // 0x2febcc: 0xae200dc4  sw          $zero, 0xDC4($s1)
    ctx->pc = 0x2febccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3524), GPR_U32(ctx, 0));
label_2febd0:
    // 0x2febd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2febd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2febd4:
    // 0x2febd4: 0x8203010c  lb          $v1, 0x10C($s0)
    ctx->pc = 0x2febd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_2febd8:
    // 0x2febd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2febd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2febdc:
    // 0x2febdc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2febdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2febe0:
    // 0x2febe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2febe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2febe4:
    // 0x2febe4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2febe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2febe8:
    // 0x2febe8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2febe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2febec:
    // 0x2febec: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2febecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2febf0:
    // 0x2febf0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2febf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2febf4:
    // 0x2febf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2febf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2febf8:
    // 0x2febf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2febf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2febfc:
    // 0x2febfc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2febfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2fec00:
    // 0x2fec00: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x2fec00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_2fec04:
    // 0x2fec04: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2fec04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2fec08:
    // 0x2fec08: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x2fec08u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_2fec0c:
    // 0x2fec0c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2fec0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2fec10:
    // 0x2fec10: 0x320f809  jalr        $t9
label_2fec14:
    if (ctx->pc == 0x2FEC14u) {
        ctx->pc = 0x2FEC14u;
            // 0x2fec14: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2FEC18u;
        goto label_2fec18;
    }
    ctx->pc = 0x2FEC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEC18u);
        ctx->pc = 0x2FEC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC10u;
            // 0x2fec14: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEC18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC18u; }
            if (ctx->pc != 0x2FEC18u) { return; }
        }
        }
    }
    ctx->pc = 0x2FEC18u;
label_2fec18:
    // 0x2fec18: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x2fec18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2fec1c:
    // 0x2fec1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fec20:
    // 0x2fec20: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2fec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2fec24:
    // 0x2fec24: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2fec24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2fec28:
    // 0x2fec28: 0x320f809  jalr        $t9
label_2fec2c:
    if (ctx->pc == 0x2FEC2Cu) {
        ctx->pc = 0x2FEC2Cu;
            // 0x2fec2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FEC30u;
        goto label_2fec30;
    }
    ctx->pc = 0x2FEC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FEC30u);
        ctx->pc = 0x2FEC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC28u;
            // 0x2fec2c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FEC30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC30u; }
            if (ctx->pc != 0x2FEC30u) { return; }
        }
        }
    }
    ctx->pc = 0x2FEC30u;
label_2fec30:
    // 0x2fec30: 0xc0c0f64  jal         func_303D90
label_2fec34:
    if (ctx->pc == 0x2FEC34u) {
        ctx->pc = 0x2FEC34u;
            // 0x2fec34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC38u;
        goto label_2fec38;
    }
    ctx->pc = 0x2FEC30u;
    SET_GPR_U32(ctx, 31, 0x2FEC38u);
    ctx->pc = 0x2FEC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC30u;
            // 0x2fec34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303D90u;
    if (runtime->hasFunction(0x303D90u)) {
        auto targetFn = runtime->lookupFunction(0x303D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC38u; }
        if (ctx->pc != 0x2FEC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303D90_0x303d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FEC38u; }
        if (ctx->pc != 0x2FEC38u) { return; }
    }
    ctx->pc = 0x2FEC38u;
label_2fec38:
    // 0x2fec38: 0x8e230d60  lw          $v1, 0xD60($s1)
    ctx->pc = 0x2fec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_2fec3c:
    // 0x2fec3c: 0xa060001c  sb          $zero, 0x1C($v1)
    ctx->pc = 0x2fec3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 0));
label_2fec40:
    // 0x2fec40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fec44:
    // 0x2fec44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fec44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fec48:
    // 0x2fec48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fec48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fec4c:
    // 0x2fec4c: 0x3e00008  jr          $ra
label_2fec50:
    if (ctx->pc == 0x2FEC50u) {
        ctx->pc = 0x2FEC50u;
            // 0x2fec50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FEC54u;
        goto label_2fec54;
    }
    ctx->pc = 0x2FEC4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FEC4Cu;
            // 0x2fec50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FEC54u;
label_2fec54:
    // 0x2fec54: 0x0  nop
    ctx->pc = 0x2fec54u;
    // NOP
label_2fec58:
    // 0x2fec58: 0x0  nop
    ctx->pc = 0x2fec58u;
    // NOP
label_2fec5c:
    // 0x2fec5c: 0x0  nop
    ctx->pc = 0x2fec5cu;
    // NOP
}
