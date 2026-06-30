#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031DA40
// Address: 0x31da40 - 0x31ddd0
void sub_0031DA40_0x31da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DA40_0x31da40");
#endif

    switch (ctx->pc) {
        case 0x31dab8u: goto label_31dab8;
        case 0x31db4cu: goto label_31db4c;
        case 0x31dc14u: goto label_31dc14;
        case 0x31dc70u: goto label_31dc70;
        case 0x31dcbcu: goto label_31dcbc;
        case 0x31dd08u: goto label_31dd08;
        case 0x31dd50u: goto label_31dd50;
        case 0x31ddacu: goto label_31ddac;
        default: break;
    }

    ctx->pc = 0x31da40u;

    // 0x31da40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31da40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31da44: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x31da44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x31da48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31da4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31da4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31da50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31da50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31da54: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x31da54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31da58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31da5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31da5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31da60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31da64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31da64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31da68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31da6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x31da6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31da70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31da74: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x31da74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da78: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x31da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
    // 0x31da7c: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x31da7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x31da80: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31DA80u;
    {
        const bool branch_taken_0x31da80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DA80u;
            // 0x31da84: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da80) {
            ctx->pc = 0x31DA8Cu;
            goto label_31da8c;
        }
    }
    ctx->pc = 0x31DA88u;
    // 0x31da88: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x31da88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_31da8c:
    // 0x31da8c: 0x52a000c8  beql        $s5, $zero, . + 4 + (0xC8 << 2)
    ctx->pc = 0x31DA8Cu;
    {
        const bool branch_taken_0x31da8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x31da8c) {
            ctx->pc = 0x31DA90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DA8Cu;
            // 0x31da90: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DDB0u;
            goto label_31ddb0;
        }
    }
    ctx->pc = 0x31DA94u;
    // 0x31da94: 0x91843  sra         $v1, $t1, 1
    ctx->pc = 0x31da94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 1));
    // 0x31da98: 0xa1043  sra         $v0, $t2, 1
    ctx->pc = 0x31da98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 1));
    // 0x31da9c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x31da9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31daa0: 0x2432823  subu        $a1, $s2, $v1
    ctx->pc = 0x31daa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x31daa4: 0x2223023  subu        $a2, $s1, $v0
    ctx->pc = 0x31daa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x31daa8: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x31daa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31daac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31daacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dab0: 0xc0c7774  jal         func_31DDD0
    ctx->pc = 0x31DAB0u;
    SET_GPR_U32(ctx, 31, 0x31DAB8u);
    ctx->pc = 0x31DAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DAB0u;
            // 0x31dab4: 0x160482d  daddu       $t1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DDD0u;
    if (runtime->hasFunction(0x31DDD0u)) {
        auto targetFn = runtime->lookupFunction(0x31DDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DAB8u; }
        if (ctx->pc != 0x31DAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031DDD0_0x31ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DAB8u; }
        if (ctx->pc != 0x31DAB8u) { return; }
    }
    ctx->pc = 0x31DAB8u;
label_31dab8:
    // 0x31dab8: 0x2ea10008  sltiu       $at, $s5, 0x8
    ctx->pc = 0x31dab8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x31dabc: 0x102000bb  beqz        $at, . + 4 + (0xBB << 2)
    ctx->pc = 0x31DABCu;
    {
        const bool branch_taken_0x31dabc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dabc) {
            ctx->pc = 0x31DDACu;
            goto label_31ddac;
        }
    }
    ctx->pc = 0x31DAC4u;
    // 0x31dac4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x31dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x31dac8: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x31dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x31dacc: 0x2484c3b0  addiu       $a0, $a0, -0x3C50
    ctx->pc = 0x31daccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951856));
    // 0x31dad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31dad4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31dad8: 0x600008  jr          $v1
    ctx->pc = 0x31DAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31DAE0u: goto label_31dae0;
            case 0x31DB54u: goto label_31db54;
            case 0x31DC1Cu: goto label_31dc1c;
            case 0x31DC78u: goto label_31dc78;
            case 0x31DCC4u: goto label_31dcc4;
            case 0x31DD10u: goto label_31dd10;
            case 0x31DD58u: goto label_31dd58;
            case 0x31DDACu: goto label_31ddac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x31DAE0u;
label_31dae0:
    // 0x31dae0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31dae4: 0x5262000d  beql        $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31DAE4u;
    {
        const bool branch_taken_0x31dae4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dae4) {
            ctx->pc = 0x31DAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DAE4u;
            // 0x31dae8: 0x240600e3  addiu       $a2, $zero, 0xE3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DB1Cu;
            goto label_31db1c;
        }
    }
    ctx->pc = 0x31DAECu;
    // 0x31daec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31daf0: 0x5262000a  beql        $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31DAF0u;
    {
        const bool branch_taken_0x31daf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31daf0) {
            ctx->pc = 0x31DAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DAF0u;
            // 0x31daf4: 0x240600a3  addiu       $a2, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DB1Cu;
            goto label_31db1c;
        }
    }
    ctx->pc = 0x31DAF8u;
    // 0x31daf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31dafc: 0x52620007  beql        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DAFCu;
    {
        const bool branch_taken_0x31dafc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dafc) {
            ctx->pc = 0x31DB00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DAFCu;
            // 0x31db00: 0x240600a1  addiu       $a2, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DB1Cu;
            goto label_31db1c;
        }
    }
    ctx->pc = 0x31DB04u;
    // 0x31db04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31db04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31db08: 0x52620004  beql        $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DB08u;
    {
        const bool branch_taken_0x31db08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31db08) {
            ctx->pc = 0x31DB0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DB08u;
            // 0x31db0c: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DB1Cu;
            goto label_31db1c;
        }
    }
    ctx->pc = 0x31DB10u;
    // 0x31db10: 0x52600002  beql        $s3, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31DB10u;
    {
        const bool branch_taken_0x31db10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31db10) {
            ctx->pc = 0x31DB14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DB10u;
            // 0x31db14: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DB1Cu;
            goto label_31db1c;
        }
    }
    ctx->pc = 0x31DB18u;
    // 0x31db18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31db18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31db1c:
    // 0x31db1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31db20: 0x2304023  subu        $t0, $s1, $s0
    ctx->pc = 0x31db20u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x31db24: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x31db24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x31db28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31db28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31db2c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x31db2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31db30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31db30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31db34: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x31db34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x31db38: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x31db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x31db3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31db3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31db40: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x31db44: 0xc0c8530  jal         func_3214C0
    ctx->pc = 0x31DB44u;
    SET_GPR_U32(ctx, 31, 0x31DB4Cu);
    ctx->pc = 0x31DB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DB44u;
            // 0x31db48: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3214C0u;
    if (runtime->hasFunction(0x3214C0u)) {
        auto targetFn = runtime->lookupFunction(0x3214C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DB4Cu; }
        if (ctx->pc != 0x31DB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003214C0_0x3214c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DB4Cu; }
        if (ctx->pc != 0x31DB4Cu) { return; }
    }
    ctx->pc = 0x31DB4Cu;
label_31db4c:
    // 0x31db4c: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x31DB4Cu;
    {
        const bool branch_taken_0x31db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31db4c) {
            ctx->pc = 0x31DDACu;
            goto label_31ddac;
        }
    }
    ctx->pc = 0x31DB54u;
label_31db54:
    // 0x31db54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31db54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31db58: 0x1262001d  beq         $s3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x31DB58u;
    {
        const bool branch_taken_0x31db58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31db58) {
            ctx->pc = 0x31DBD0u;
            goto label_31dbd0;
        }
    }
    ctx->pc = 0x31DB60u;
    // 0x31db60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31db60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31db64: 0x12620014  beq         $s3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31DB64u;
    {
        const bool branch_taken_0x31db64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31db64) {
            ctx->pc = 0x31DBB8u;
            goto label_31dbb8;
        }
    }
    ctx->pc = 0x31DB6Cu;
    // 0x31db6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31db70: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31DB70u;
    {
        const bool branch_taken_0x31db70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31db70) {
            ctx->pc = 0x31DBA0u;
            goto label_31dba0;
        }
    }
    ctx->pc = 0x31DB78u;
    // 0x31db78: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DB78u;
    {
        const bool branch_taken_0x31db78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31db78) {
            ctx->pc = 0x31DB88u;
            goto label_31db88;
        }
    }
    ctx->pc = 0x31DB80u;
    // 0x31db80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31DB80u;
    {
        const bool branch_taken_0x31db80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DB80u;
            // 0x31db84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db80) {
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DB88u;
label_31db88:
    // 0x31db88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31db88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x31db8c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x31db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31db90: 0x8c420e68  lw          $v0, 0xE68($v0)
    ctx->pc = 0x31db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
    // 0x31db94: 0x240600a5  addiu       $a2, $zero, 0xA5
    ctx->pc = 0x31db94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x31db98: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31DB98u;
    {
        const bool branch_taken_0x31db98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DB98u;
            // 0x31db9c: 0xac4303cc  sw          $v1, 0x3CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 972), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db98) {
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DBA0u;
label_31dba0:
    // 0x31dba0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x31dba4: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x31dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x31dba8: 0x8c420e68  lw          $v0, 0xE68($v0)
    ctx->pc = 0x31dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
    // 0x31dbac: 0x240600a5  addiu       $a2, $zero, 0xA5
    ctx->pc = 0x31dbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x31dbb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31DBB0u;
    {
        const bool branch_taken_0x31dbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DBB0u;
            // 0x31dbb4: 0xac4303cc  sw          $v1, 0x3CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 972), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbb0) {
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DBB8u;
label_31dbb8:
    // 0x31dbb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x31dbbc: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x31dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x31dbc0: 0x8c420e68  lw          $v0, 0xE68($v0)
    ctx->pc = 0x31dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
    // 0x31dbc4: 0x240600a5  addiu       $a2, $zero, 0xA5
    ctx->pc = 0x31dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x31dbc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31DBC8u;
    {
        const bool branch_taken_0x31dbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DBC8u;
            // 0x31dbcc: 0xac4303cc  sw          $v1, 0x3CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 972), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbc8) {
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DBD0u;
label_31dbd0:
    // 0x31dbd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x31dbd4: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x31dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x31dbd8: 0x8c420e68  lw          $v0, 0xE68($v0)
    ctx->pc = 0x31dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
    // 0x31dbdc: 0x240600a5  addiu       $a2, $zero, 0xA5
    ctx->pc = 0x31dbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x31dbe0: 0xac4303cc  sw          $v1, 0x3CC($v0)
    ctx->pc = 0x31dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 972), GPR_U32(ctx, 3));
label_31dbe4:
    // 0x31dbe4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31dbe8: 0x2304023  subu        $t0, $s1, $s0
    ctx->pc = 0x31dbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x31dbec: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x31dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x31dbf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31dbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dbf4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x31dbf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dbf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31dbf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dbfc: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x31dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x31dc00: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x31dc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x31dc04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31dc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31dc08: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x31dc0c: 0xc0c8530  jal         func_3214C0
    ctx->pc = 0x31DC0Cu;
    SET_GPR_U32(ctx, 31, 0x31DC14u);
    ctx->pc = 0x31DC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DC0Cu;
            // 0x31dc10: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3214C0u;
    if (runtime->hasFunction(0x3214C0u)) {
        auto targetFn = runtime->lookupFunction(0x3214C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DC14u; }
        if (ctx->pc != 0x31DC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003214C0_0x3214c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DC14u; }
        if (ctx->pc != 0x31DC14u) { return; }
    }
    ctx->pc = 0x31DC14u;
label_31dc14:
    // 0x31dc14: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x31DC14u;
    {
        const bool branch_taken_0x31dc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dc14) {
            ctx->pc = 0x31DDACu;
            goto label_31ddac;
        }
    }
    ctx->pc = 0x31DC1Cu;
label_31dc1c:
    // 0x31dc1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31dc20: 0x52620007  beql        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DC20u;
    {
        const bool branch_taken_0x31dc20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dc20) {
            ctx->pc = 0x31DC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DC20u;
            // 0x31dc24: 0x240600a7  addiu       $a2, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DC40u;
            goto label_31dc40;
        }
    }
    ctx->pc = 0x31DC28u;
    // 0x31dc28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dc2c: 0x52620004  beql        $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DC2Cu;
    {
        const bool branch_taken_0x31dc2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dc2c) {
            ctx->pc = 0x31DC30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DC2Cu;
            // 0x31dc30: 0x240600a8  addiu       $a2, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DC40u;
            goto label_31dc40;
        }
    }
    ctx->pc = 0x31DC34u;
    // 0x31dc34: 0x52600002  beql        $s3, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31DC34u;
    {
        const bool branch_taken_0x31dc34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dc34) {
            ctx->pc = 0x31DC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DC34u;
            // 0x31dc38: 0x240600e4  addiu       $a2, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DC40u;
            goto label_31dc40;
        }
    }
    ctx->pc = 0x31DC3Cu;
    // 0x31dc3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31dc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dc40:
    // 0x31dc40: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31dc44: 0x2304023  subu        $t0, $s1, $s0
    ctx->pc = 0x31dc44u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x31dc48: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x31dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x31dc4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31dc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc50: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x31dc50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31dc54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc58: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x31dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x31dc5c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x31dc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x31dc60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31dc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31dc64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x31dc68: 0xc0c8530  jal         func_3214C0
    ctx->pc = 0x31DC68u;
    SET_GPR_U32(ctx, 31, 0x31DC70u);
    ctx->pc = 0x31DC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DC68u;
            // 0x31dc6c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3214C0u;
    if (runtime->hasFunction(0x3214C0u)) {
        auto targetFn = runtime->lookupFunction(0x3214C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DC70u; }
        if (ctx->pc != 0x31DC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003214C0_0x3214c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DC70u; }
        if (ctx->pc != 0x31DC70u) { return; }
    }
    ctx->pc = 0x31DC70u;
label_31dc70:
    // 0x31dc70: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x31DC70u;
    {
        const bool branch_taken_0x31dc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dc70) {
            ctx->pc = 0x31DDACu;
            goto label_31ddac;
        }
    }
    ctx->pc = 0x31DC78u;
label_31dc78:
    // 0x31dc78: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x31dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x31dc7c: 0x266a0001  addiu       $t2, $s3, 0x1
    ctx->pc = 0x31dc7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31dc80: 0x8c650e68  lw          $a1, 0xE68($v1)
    ctx->pc = 0x31dc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
    // 0x31dc84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31dc88: 0x2304023  subu        $t0, $s1, $s0
    ctx->pc = 0x31dc88u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x31dc8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31dc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc90: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x31dc90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc94: 0x240600a4  addiu       $a2, $zero, 0xA4
    ctx->pc = 0x31dc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x31dc98: 0xacaa03cc  sw          $t2, 0x3CC($a1)
    ctx->pc = 0x31dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 972), GPR_U32(ctx, 10));
    // 0x31dc9c: 0x3c033f26  lui         $v1, 0x3F26
    ctx->pc = 0x31dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16166 << 16));
    // 0x31dca0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x31dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x31dca4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31dca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31dca8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31dca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31dcac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31dcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcb0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x31dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x31dcb4: 0xc0c8530  jal         func_3214C0
    ctx->pc = 0x31DCB4u;
    SET_GPR_U32(ctx, 31, 0x31DCBCu);
    ctx->pc = 0x31DCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DCB4u;
            // 0x31dcb8: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3214C0u;
    if (runtime->hasFunction(0x3214C0u)) {
        auto targetFn = runtime->lookupFunction(0x3214C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DCBCu; }
        if (ctx->pc != 0x31DCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003214C0_0x3214c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DCBCu; }
        if (ctx->pc != 0x31DCBCu) { return; }
    }
    ctx->pc = 0x31DCBCu;
label_31dcbc:
    // 0x31dcbc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x31DCBCu;
    {
        const bool branch_taken_0x31dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dcbc) {
            ctx->pc = 0x31DDACu;
            goto label_31ddac;
        }
    }
    ctx->pc = 0x31DCC4u;
label_31dcc4:
    // 0x31dcc4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x31dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x31dcc8: 0x266a0001  addiu       $t2, $s3, 0x1
    ctx->pc = 0x31dcc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31dccc: 0x8c650e68  lw          $a1, 0xE68($v1)
    ctx->pc = 0x31dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
    // 0x31dcd0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31dcd4: 0x2304023  subu        $t0, $s1, $s0
    ctx->pc = 0x31dcd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x31dcd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31dcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcdc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x31dcdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dce0: 0x240600a9  addiu       $a2, $zero, 0xA9
    ctx->pc = 0x31dce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x31dce4: 0xacaa03cc  sw          $t2, 0x3CC($a1)
    ctx->pc = 0x31dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 972), GPR_U32(ctx, 10));
    // 0x31dce8: 0x3c033f26  lui         $v1, 0x3F26
    ctx->pc = 0x31dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16166 << 16));
    // 0x31dcec: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x31dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x31dcf0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31dcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31dcf4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31dcf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31dcf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31dcf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcfc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x31dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x31dd00: 0xc0c8530  jal         func_3214C0
    ctx->pc = 0x31DD00u;
    SET_GPR_U32(ctx, 31, 0x31DD08u);
    ctx->pc = 0x31DD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DD00u;
            // 0x31dd04: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3214C0u;
    if (runtime->hasFunction(0x3214C0u)) {
        auto targetFn = runtime->lookupFunction(0x3214C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DD08u; }
        if (ctx->pc != 0x31DD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003214C0_0x3214c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DD08u; }
        if (ctx->pc != 0x31DD08u) { return; }
    }
    ctx->pc = 0x31DD08u;
label_31dd08:
    // 0x31dd08: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x31DD08u;
    {
        const bool branch_taken_0x31dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd08) {
            ctx->pc = 0x31DDACu;
            goto label_31ddac;
        }
    }
    ctx->pc = 0x31DD10u;
label_31dd10:
    // 0x31dd10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x31dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x31dd14: 0x3c033f26  lui         $v1, 0x3F26
    ctx->pc = 0x31dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16166 << 16));
    // 0x31dd18: 0x8c450e68  lw          $a1, 0xE68($v0)
    ctx->pc = 0x31dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
    // 0x31dd1c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31dd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x31dd20: 0x2304023  subu        $t0, $s1, $s0
    ctx->pc = 0x31dd20u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x31dd24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd28: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x31dd28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd2c: 0x240600a6  addiu       $a2, $zero, 0xA6
    ctx->pc = 0x31dd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x31dd30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31dd34: 0xacb303cc  sw          $s3, 0x3CC($a1)
    ctx->pc = 0x31dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 972), GPR_U32(ctx, 19));
    // 0x31dd38: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x31dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x31dd3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31dd3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd40: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31dd40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31dd44: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x31dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x31dd48: 0xc0c8530  jal         func_3214C0
    ctx->pc = 0x31DD48u;
    SET_GPR_U32(ctx, 31, 0x31DD50u);
    ctx->pc = 0x31DD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DD48u;
            // 0x31dd4c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3214C0u;
    if (runtime->hasFunction(0x3214C0u)) {
        auto targetFn = runtime->lookupFunction(0x3214C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DD50u; }
        if (ctx->pc != 0x31DD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003214C0_0x3214c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DD50u; }
        if (ctx->pc != 0x31DD50u) { return; }
    }
    ctx->pc = 0x31DD50u;
label_31dd50:
    // 0x31dd50: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31DD50u;
    {
        const bool branch_taken_0x31dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd50) {
            ctx->pc = 0x31DDACu;
            goto label_31ddac;
        }
    }
    ctx->pc = 0x31DD58u;
label_31dd58:
    // 0x31dd58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31dd5c: 0x52620007  beql        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DD5Cu;
    {
        const bool branch_taken_0x31dd5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dd5c) {
            ctx->pc = 0x31DD60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DD5Cu;
            // 0x31dd60: 0x240600ad  addiu       $a2, $zero, 0xAD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DD7Cu;
            goto label_31dd7c;
        }
    }
    ctx->pc = 0x31DD64u;
    // 0x31dd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dd68: 0x52620004  beql        $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DD68u;
    {
        const bool branch_taken_0x31dd68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dd68) {
            ctx->pc = 0x31DD6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DD68u;
            // 0x31dd6c: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DD7Cu;
            goto label_31dd7c;
        }
    }
    ctx->pc = 0x31DD70u;
    // 0x31dd70: 0x52600002  beql        $s3, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x31DD70u;
    {
        const bool branch_taken_0x31dd70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd70) {
            ctx->pc = 0x31DD74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31DD70u;
            // 0x31dd74: 0x240600ab  addiu       $a2, $zero, 0xAB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31DD7Cu;
            goto label_31dd7c;
        }
    }
    ctx->pc = 0x31DD78u;
    // 0x31dd78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31dd78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dd7c:
    // 0x31dd7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x31dd80: 0x2304023  subu        $t0, $s1, $s0
    ctx->pc = 0x31dd80u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x31dd84: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x31dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x31dd88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31dd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd8c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x31dd8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31dd90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd94: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x31dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
    // 0x31dd98: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x31dd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x31dd9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31dd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31dda0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x31dda4: 0xc0c8530  jal         func_3214C0
    ctx->pc = 0x31DDA4u;
    SET_GPR_U32(ctx, 31, 0x31DDACu);
    ctx->pc = 0x31DDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31DDA4u;
            // 0x31dda8: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3214C0u;
    if (runtime->hasFunction(0x3214C0u)) {
        auto targetFn = runtime->lookupFunction(0x3214C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DDACu; }
        if (ctx->pc != 0x31DDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003214C0_0x3214c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DDACu; }
        if (ctx->pc != 0x31DDACu) { return; }
    }
    ctx->pc = 0x31DDACu;
label_31ddac:
    // 0x31ddac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31ddacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_31ddb0:
    // 0x31ddb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31ddb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31ddb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31ddb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ddb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31ddb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ddbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31ddbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ddc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ddc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ddc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ddc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ddc8: 0x3e00008  jr          $ra
    ctx->pc = 0x31DDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DDC8u;
            // 0x31ddcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31DDD0u;
}
