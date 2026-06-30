#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002696C0
// Address: 0x2696c0 - 0x2699b0
void sub_002696C0_0x2696c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002696C0_0x2696c0");
#endif

    switch (ctx->pc) {
        case 0x26970cu: goto label_26970c;
        case 0x269730u: goto label_269730;
        case 0x2698e8u: goto label_2698e8;
        case 0x269920u: goto label_269920;
        case 0x269990u: goto label_269990;
        default: break;
    }

    ctx->pc = 0x2696c0u;

    // 0x2696c0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2696c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2696c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2696c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2696c8: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x2696c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2696cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2696ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2696d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2696d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2696d4: 0x27b30058  addiu       $s3, $sp, 0x58
    ctx->pc = 0x2696d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2696d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2696d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2696dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2696dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2696e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2696e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2696e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696e8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2696e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2696ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2696ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2696f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2696f4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2696f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2696f8: 0x34420064  ori         $v0, $v0, 0x64
    ctx->pc = 0x2696f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x2696fc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2696fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269700: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x269700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x269704: 0xc09a4fc  jal         func_2693F0
    ctx->pc = 0x269704u;
    SET_GPR_U32(ctx, 31, 0x26970Cu);
    ctx->pc = 0x269708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269704u;
            // 0x269708: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2693F0u;
    if (runtime->hasFunction(0x2693F0u)) {
        auto targetFn = runtime->lookupFunction(0x2693F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26970Cu; }
        if (ctx->pc != 0x26970Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002693F0_0x2693f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26970Cu; }
        if (ctx->pc != 0x26970Cu) { return; }
    }
    ctx->pc = 0x26970Cu;
label_26970c:
    // 0x26970c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x26970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x269710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269714: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x269714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269718: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
    ctx->pc = 0x269718u;
    {
        const bool branch_taken_0x269718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26971Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269718u;
            // 0x26971c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269718) {
            ctx->pc = 0x2698D0u;
            goto label_2698d0;
        }
    }
    ctx->pc = 0x269720u;
    // 0x269720: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x269720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x269724: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x269724u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269728: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x269728u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x26972c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26972cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269730:
    // 0x269730: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269730u;
    {
        const bool branch_taken_0x269730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x269730) {
            ctx->pc = 0x269740u;
            goto label_269740;
        }
    }
    ctx->pc = 0x269738u;
    // 0x269738: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x269738u;
    {
        const bool branch_taken_0x269738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269738u;
            // 0x26973c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269738) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269740u;
label_269740:
    // 0x269740: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x269740u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269744: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x269744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x269748: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x269748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26974c: 0x10a3021  addu        $a2, $t0, $t2
    ctx->pc = 0x26974cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x269750: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x269750u;
    {
        const bool branch_taken_0x269750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269750u;
            // 0x269754: 0x8ccd0000  lw          $t5, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269750) {
            ctx->pc = 0x269768u;
            goto label_269768;
        }
    }
    ctx->pc = 0x269758u;
    // 0x269758: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x269758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26975c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x26975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x269760: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x269760u;
    {
        const bool branch_taken_0x269760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269760u;
            // 0x269764: 0x8cac0000  lw          $t4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269760) {
            ctx->pc = 0x26976Cu;
            goto label_26976c;
        }
    }
    ctx->pc = 0x269768u;
label_269768:
    // 0x269768: 0x8d0c0000  lw          $t4, 0x0($t0)
    ctx->pc = 0x269768u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_26976c:
    // 0x26976c: 0xadad001c  sw          $t5, 0x1C($t5)
    ctx->pc = 0x26976cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 13));
    // 0x269770: 0x25a50020  addiu       $a1, $t5, 0x20
    ctx->pc = 0x269770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x269774: 0xada50014  sw          $a1, 0x14($t5)
    ctx->pc = 0x269774u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 5));
    // 0x269778: 0x25a90030  addiu       $t1, $t5, 0x30
    ctx->pc = 0x269778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x26977c: 0xadad002c  sw          $t5, 0x2C($t5)
    ctx->pc = 0x26977cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 13));
    // 0x269780: 0x25a80010  addiu       $t0, $t5, 0x10
    ctx->pc = 0x269780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x269784: 0xada90024  sw          $t1, 0x24($t5)
    ctx->pc = 0x269784u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 9));
    // 0x269788: 0x25850020  addiu       $a1, $t4, 0x20
    ctx->pc = 0x269788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x26978c: 0xadad003c  sw          $t5, 0x3C($t5)
    ctx->pc = 0x26978cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 13));
    // 0x269790: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x269790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x269794: 0xada80034  sw          $t0, 0x34($t5)
    ctx->pc = 0x269794u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 8));
    // 0x269798: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x269798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26979c: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x26979cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2697a0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2697a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2697a4: 0xada60010  sw          $a2, 0x10($t5)
    ctx->pc = 0x2697a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 6));
    // 0x2697a8: 0xadab0020  sw          $t3, 0x20($t5)
    ctx->pc = 0x2697a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 11));
    // 0x2697ac: 0xadb00030  sw          $s0, 0x30($t5)
    ctx->pc = 0x2697acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 16));
    // 0x2697b0: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x2697b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x2697b4: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2697b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2697b8: 0xad890028  sw          $t1, 0x28($t4)
    ctx->pc = 0x2697b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 9));
    // 0x2697bc: 0xada50038  sw          $a1, 0x38($t5)
    ctx->pc = 0x2697bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 5));
    // 0x2697c0: 0xc5670008  lwc1        $f7, 0x8($t3)
    ctx->pc = 0x2697c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2697c4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2697c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2697c8: 0xc5680004  lwc1        $f8, 0x4($t3)
    ctx->pc = 0x2697c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2697cc: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x2697ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2697d0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2697d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2697d4: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x2697d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2697d8: 0xc5690000  lwc1        $f9, 0x0($t3)
    ctx->pc = 0x2697d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2697dc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2697dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2697e0: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x2697e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2697e4: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x2697e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x2697e8: 0x46082ac1  sub.s       $f11, $f5, $f8
    ctx->pc = 0x2697e8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x2697ec: 0x46014041  sub.s       $f1, $f8, $f1
    ctx->pc = 0x2697ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x2697f0: 0x460719c1  sub.s       $f7, $f3, $f7
    ctx->pc = 0x2697f0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x2697f4: 0x4600581a  mula.s      $f11, $f0
    ctx->pc = 0x2697f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2697f8: 0x46024881  sub.s       $f2, $f9, $f2
    ctx->pc = 0x2697f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x2697fc: 0x46013a1d  msub.s      $f8, $f7, $f1
    ctx->pc = 0x2697fcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x269800: 0x46092301  sub.s       $f12, $f4, $f9
    ctx->pc = 0x269800u;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x269804: 0x4602381a  mula.s      $f7, $f2
    ctx->pc = 0x269804u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x269808: 0x460061dd  msub.s      $f7, $f12, $f0
    ctx->pc = 0x269808u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[0]));
    // 0x26980c: 0x4601601a  mula.s      $f12, $f1
    ctx->pc = 0x26980cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x269810: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x269810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x269814: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x269814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x269818: 0x4602589d  msub.s      $f2, $f11, $f2
    ctx->pc = 0x269818u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[2]));
    // 0x26981c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x26981cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269820: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x269820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x269824: 0x46005032  c.eq.s      $f10, $f0
    ctx->pc = 0x269824u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269828: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x269828u;
    {
        const bool branch_taken_0x269828 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26982Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269828u;
            // 0x26982c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269828) {
            ctx->pc = 0x269838u;
            goto label_269838;
        }
    }
    ctx->pc = 0x269830u;
    // 0x269830: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x269830u;
    {
        const bool branch_taken_0x269830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269830) {
            ctx->pc = 0x2698A0u;
            goto label_2698a0;
        }
    }
    ctx->pc = 0x269838u;
label_269838:
    // 0x269838: 0x460a0032  c.eq.s      $f0, $f10
    ctx->pc = 0x269838u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26983c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x26983Cu;
    {
        const bool branch_taken_0x26983c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26983c) {
            ctx->pc = 0x269860u;
            goto label_269860;
        }
    }
    ctx->pc = 0x269844u;
    // 0x269844: 0x0  nop
    ctx->pc = 0x269844u;
    // NOP
    // 0x269848: 0x0  nop
    ctx->pc = 0x269848u;
    // NOP
    // 0x26984c: 0x46003256  rsqrt.s     $f9, $f6, $f0
    ctx->pc = 0x26984cu;
    ctx->f[9] = 1.0f / sqrtf(ctx->f[6]);
    // 0x269850: 0x0  nop
    ctx->pc = 0x269850u;
    // NOP
    // 0x269854: 0x0  nop
    ctx->pc = 0x269854u;
    // NOP
    // 0x269858: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x269858u;
    {
        const bool branch_taken_0x269858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269858) {
            ctx->pc = 0x269868u;
            goto label_269868;
        }
    }
    ctx->pc = 0x269860u;
label_269860:
    // 0x269860: 0x46005246  mov.s       $f9, $f10
    ctx->pc = 0x269860u;
    ctx->f[9] = FPU_MOV_S(ctx->f[10]);
    // 0x269864: 0x0  nop
    ctx->pc = 0x269864u;
    // NOP
label_269868:
    // 0x269868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x269868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26986c: 0x46094202  mul.s       $f8, $f8, $f9
    ctx->pc = 0x26986cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x269870: 0x460939c2  mul.s       $f7, $f7, $f9
    ctx->pc = 0x269870u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x269874: 0x46044042  mul.s       $f1, $f8, $f4
    ctx->pc = 0x269874u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x269878: 0x46053802  mul.s       $f0, $f7, $f5
    ctx->pc = 0x269878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x26987c: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x26987cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x269880: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x269880u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x269884: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x269884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x269888: 0xe5a00040  swc1        $f0, 0x40($t5)
    ctx->pc = 0x269888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x26988c: 0xe5a80000  swc1        $f8, 0x0($t5)
    ctx->pc = 0x26988cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x269890: 0xe5a70004  swc1        $f7, 0x4($t5)
    ctx->pc = 0x269890u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x269894: 0x46095282  mul.s       $f10, $f10, $f9
    ctx->pc = 0x269894u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x269898: 0xe5a20008  swc1        $f2, 0x8($t5)
    ctx->pc = 0x269898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x26989c: 0xe5aa000c  swc1        $f10, 0xC($t5)
    ctx->pc = 0x26989cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
label_2698a0:
    // 0x2698a0: 0x14a70003  bne         $a1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2698A0u;
    {
        const bool branch_taken_0x2698a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x2698a0) {
            ctx->pc = 0x2698B0u;
            goto label_2698b0;
        }
    }
    ctx->pc = 0x2698A8u;
    // 0x2698a8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2698A8u;
    {
        const bool branch_taken_0x2698a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2698ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2698A8u;
            // 0x2698ac: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698a8) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x2698B0u;
label_2698b0:
    // 0x2698b0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2698b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2698b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2698b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2698b8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2698b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2698bc: 0x43282a  slt         $a1, $v0, $v1
    ctx->pc = 0x2698bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2698c0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2698c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2698c4: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x2698c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2698c8: 0x14a0ff99  bnez        $a1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x2698C8u;
    {
        const bool branch_taken_0x2698c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2698CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2698C8u;
            // 0x2698cc: 0xacc00030  sw          $zero, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698c8) {
            ctx->pc = 0x269730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269730;
        }
    }
    ctx->pc = 0x2698D0u;
label_2698d0:
    // 0x2698d0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2698d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2698d4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2698d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2698d8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2698D8u;
    {
        const bool branch_taken_0x2698d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2698DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2698D8u;
            // 0x2698dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698d8) {
            ctx->pc = 0x269908u;
            goto label_269908;
        }
    }
    ctx->pc = 0x2698E0u;
    // 0x2698e0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2698e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2698e4: 0x0  nop
    ctx->pc = 0x2698e4u;
    // NOP
label_2698e8:
    // 0x2698e8: 0xac600fb4  sw          $zero, 0xFB4($v1)
    ctx->pc = 0x2698e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4020), GPR_U32(ctx, 0));
    // 0x2698ec: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2698ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2698f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2698f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2698f4: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x2698f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2698f8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2698f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2698fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2698FCu;
    {
        const bool branch_taken_0x2698fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2698fc) {
            ctx->pc = 0x2698E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2698e8;
        }
    }
    ctx->pc = 0x269904u;
    // 0x269904: 0x0  nop
    ctx->pc = 0x269904u;
    // NOP
label_269908:
    // 0x269908: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x269908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26990c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x26990cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x269910: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x269910u;
    {
        const bool branch_taken_0x269910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269910u;
            // 0x269914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269910) {
            ctx->pc = 0x269940u;
            goto label_269940;
        }
    }
    ctx->pc = 0x269918u;
    // 0x269918: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x269918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26991c: 0x0  nop
    ctx->pc = 0x26991cu;
    // NOP
label_269920:
    // 0x269920: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x269920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x269924: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x269924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x269928: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x269928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26992c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x26992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x269930: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x269930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x269934: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x269934u;
    {
        const bool branch_taken_0x269934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269934) {
            ctx->pc = 0x269920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269920;
        }
    }
    ctx->pc = 0x26993Cu;
    // 0x26993c: 0x0  nop
    ctx->pc = 0x26993cu;
    // NOP
label_269940:
    // 0x269940: 0x12240003  beq         $s1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269940u;
    {
        const bool branch_taken_0x269940 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x269944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269940u;
            // 0x269944: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269940) {
            ctx->pc = 0x269950u;
            goto label_269950;
        }
    }
    ctx->pc = 0x269948u;
    // 0x269948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x269948u;
    {
        const bool branch_taken_0x269948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269948) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269950u;
label_269950:
    // 0x269950: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x269950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269954: 0x0  nop
    ctx->pc = 0x269954u;
    // NOP
label_269958:
    // 0x269958: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x269958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26995c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x269960: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x269960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269964: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x269964u;
    {
        const bool branch_taken_0x269964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269964) {
            ctx->pc = 0x269990u;
            goto label_269990;
        }
    }
    ctx->pc = 0x26996Cu;
    // 0x26996c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x269970: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x269970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x269974: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x269974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x269978: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x269978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x26997c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x26997cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269980: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x269980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x269984: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x269984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x269988: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x269988u;
    SET_GPR_U32(ctx, 31, 0x269990u);
    ctx->pc = 0x26998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269988u;
            // 0x26998c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269990u; }
        if (ctx->pc != 0x269990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269990u; }
        if (ctx->pc != 0x269990u) { return; }
    }
    ctx->pc = 0x269990u;
label_269990:
    // 0x269990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x269990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269994: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x269994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269998: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x269998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26999c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26999cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2699a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2699a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2699a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2699a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2699a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2699A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2699ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2699A8u;
            // 0x2699ac: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2699B0u;
}
