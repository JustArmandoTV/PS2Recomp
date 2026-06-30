#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00104CB0
// Address: 0x104cb0 - 0x105138
void sub_00104CB0_0x104cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104CB0_0x104cb0");
#endif

    ctx->pc = 0x104cb0u;

    // 0x104cb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x104cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x104cb4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x104cb4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cb8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x104cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x104cbc: 0x25e306cc  addiu       $v1, $t7, 0x6CC
    ctx->pc = 0x104cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 1740));
    // 0x104cc0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x104cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x104cc4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x104cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104cc8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x104cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x104ccc: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x104cccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cd0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x104cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x104cd4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x104cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cd8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x104cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x104cdc: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x104cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ce0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x104ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x104ce4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x104ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ce8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x104ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x104cec: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x104cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x104cf0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x104cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x104cf4: 0x8df30820  lw          $s3, 0x820($t7)
    ctx->pc = 0x104cf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x104cf8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x104cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x104cfc: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x104cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x104d00: 0x8fbe00b0  lw          $fp, 0xB0($sp)
    ctx->pc = 0x104d00u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x104d04: 0x8de40830  lw          $a0, 0x830($t7)
    ctx->pc = 0x104d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2096)));
    // 0x104d08: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x104d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x104d0c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x104d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x104d10: 0x1e5043  sra         $t2, $fp, 1
    ctx->pc = 0x104d10u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 30), 1));
    // 0x104d14: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x104d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x104d18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x104d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x104d1c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x104d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x104d20: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x104d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x104d24: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x104d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104d28: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x104d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x104d2c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x104d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x104d30: 0x3242018  mult        $a0, $t9, $a0
    ctx->pc = 0x104d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104d34: 0x8fb800c0  lw          $t8, 0xC0($sp)
    ctx->pc = 0x104d34u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x104d38: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x104d38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x104d3c: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x104d3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x104d40: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x104d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x104d44: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x104d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x104d48: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x104d48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104d4c: 0x13000005  beqz        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x104D4Cu;
    {
        const bool branch_taken_0x104d4c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104D4Cu;
            // 0x104d50: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d4c) {
            ctx->pc = 0x104D64u;
            goto label_104d64;
        }
    }
    ctx->pc = 0x104D54u;
    // 0x104d54: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x104d54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x104d58: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x104d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x104d5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104D5Cu;
    {
        const bool branch_taken_0x104d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104D5Cu;
            // 0x104d60: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d5c) {
            ctx->pc = 0x104D6Cu;
            goto label_104d6c;
        }
    }
    ctx->pc = 0x104D64u;
label_104d64:
    // 0x104d64: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x104d64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x104d68: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x104d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_104d6c:
    // 0x104d6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x104d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x104d70: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x104d70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104d74: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x104d74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x104d78: 0xab103  sra         $s6, $t2, 4
    ctx->pc = 0x104d78u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 10), 4));
    // 0x104d7c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x104d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104d80: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x104d80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104d84: 0x2c71818  mult        $v1, $s6, $a3
    ctx->pc = 0x104d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104d88: 0x72621018  mult1       $v0, $s3, $v0
    ctx->pc = 0x104d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x104d8c: 0xbb903  sra         $s7, $t3, 4
    ctx->pc = 0x104d8cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 11), 4));
    // 0x104d90: 0x194080  sll         $t0, $t9, 2
    ctx->pc = 0x104d90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x104d94: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x104d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x104d98: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x104d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x104d9c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x104d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104da0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x104da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x104da4: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x104da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x104da8: 0x664018  mult        $t0, $v1, $a2
    ctx->pc = 0x104da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x104dac: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x104dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x104db0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x104db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x104db4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x104db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x104db8: 0x663818  mult        $a3, $v1, $a2
    ctx->pc = 0x104db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x104dbc: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x104dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x104dc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x104dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104dc4: 0x1452823  subu        $a1, $t2, $a1
    ctx->pc = 0x104dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x104dc8: 0x1289821  addu        $s3, $t1, $t0
    ctx->pc = 0x104dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x104dcc: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x104dccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x104dd0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x104dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x104dd4: 0xad850004  sw          $a1, 0x4($t4)
    ctx->pc = 0x104dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 5));
    // 0x104dd8: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x104dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x104ddc: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x104ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x104de0: 0x1e23821  addu        $a3, $t7, $v0
    ctx->pc = 0x104de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x104de4: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x104de4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x104de8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x104de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104dec: 0xacf305a8  sw          $s3, 0x5A8($a3)
    ctx->pc = 0x104decu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 19));
    // 0x104df0: 0x33c70001  andi        $a3, $fp, 0x1
    ctx->pc = 0x104df0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x104df4: 0xac5405b8  sw          $s4, 0x5B8($v0)
    ctx->pc = 0x104df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1464), GPR_U32(ctx, 20));
    // 0x104df8: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x104DF8u;
    {
        const bool branch_taken_0x104df8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104DF8u;
            // 0x104dfc: 0xad840000  sw          $a0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104df8) {
            ctx->pc = 0x104E38u;
            goto label_104e38;
        }
    }
    ctx->pc = 0x104E00u;
    // 0x104e00: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x104e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x104e04: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x104e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x104e08: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x104e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x104e0c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x104E0Cu;
    {
        const bool branch_taken_0x104e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104e0c) {
            ctx->pc = 0x104E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104E0Cu;
            // 0x104e10: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104E6Cu;
            goto label_104e6c;
        }
    }
    ctx->pc = 0x104E14u;
    // 0x104e14: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x104e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104e18: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x104e18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x104e1c: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x104e1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x104e20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x104e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104e24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x104e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x104e28: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x104e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x104e2c: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x104e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x104e30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x104E30u;
    {
        const bool branch_taken_0x104e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104E30u;
            // 0x104e34: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e30) {
            ctx->pc = 0x104E70u;
            goto label_104e70;
        }
    }
    ctx->pc = 0x104E38u;
label_104e38:
    // 0x104e38: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x104e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x104e3c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x104e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x104e40: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x104e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x104e44: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x104E44u;
    {
        const bool branch_taken_0x104e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104e44) {
            ctx->pc = 0x104E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104E44u;
            // 0x104e48: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x104E6Cu;
            goto label_104e6c;
        }
    }
    ctx->pc = 0x104E4Cu;
    // 0x104e4c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x104e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104e50: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x104e50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x104e54: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x104e54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x104e58: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x104e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104e5c: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x104e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x104e60: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x104e60u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x104e64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104E64u;
    {
        const bool branch_taken_0x104e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104E64u;
            // 0x104e68: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e64) {
            ctx->pc = 0x104E70u;
            goto label_104e70;
        }
    }
    ctx->pc = 0x104E6Cu;
label_104e6c:
    // 0x104e6c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x104e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_104e70:
    // 0x104e70: 0x8de2087c  lw          $v0, 0x87C($t7)
    ctx->pc = 0x104e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x104e74: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x104E74u;
    {
        const bool branch_taken_0x104e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104E74u;
            // 0x104e78: 0xb1100  sll         $v0, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e74) {
            ctx->pc = 0x104EB8u;
            goto label_104eb8;
        }
    }
    ctx->pc = 0x104E7Cu;
    // 0x104e7c: 0x8de60820  lw          $a2, 0x820($t7)
    ctx->pc = 0x104e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x104e80: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x104e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104e84: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x104e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x104e88: 0xb2900  sll         $a1, $t3, 4
    ctx->pc = 0x104e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x104e8c: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x104e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x104e90: 0x3231818  mult        $v1, $t9, $v1
    ctx->pc = 0x104e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x104e94: 0x8f3021  addu        $a2, $a0, $t7
    ctx->pc = 0x104e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x104e98: 0x8cc205a0  lw          $v0, 0x5A0($a2)
    ctx->pc = 0x104e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1440)));
    // 0x104e9c: 0x24a40300  addiu       $a0, $a1, 0x300
    ctx->pc = 0x104e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x104ea0: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x104ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104ea4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x104ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x104ea8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x104ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x104eac: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x104eacu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
    // 0x104eb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x104EB0u;
    {
        const bool branch_taken_0x104eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104EB0u;
            // 0x104eb4: 0xad840018  sw          $a0, 0x18($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104eb0) {
            ctx->pc = 0x104ECCu;
            goto label_104ecc;
        }
    }
    ctx->pc = 0x104EB8u;
label_104eb8:
    // 0x104eb8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x104eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ebc: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x104ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x104ec0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x104ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x104ec4: 0xad830018  sw          $v1, 0x18($t4)
    ctx->pc = 0x104ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 3));
    // 0x104ec8: 0xad820014  sw          $v0, 0x14($t4)
    ctx->pc = 0x104ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
label_104ecc:
    // 0x104ecc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x104eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x104ed0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x104ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x104ed4: 0x1e27c2  srl         $a0, $fp, 31
    ctx->pc = 0x104ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
    // 0x104ed8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x104ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104edc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x104edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104ee0: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x104ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x104ee4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x104ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x104ee8: 0x4c843  sra         $t9, $a0, 1
    ctx->pc = 0x104ee8u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 4), 1));
    // 0x104eec: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x104eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x104ef0: 0x3052804  sllv        $a1, $a1, $t8
    ctx->pc = 0x104ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x104ef4: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x104ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x104ef8: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x104ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x104efc: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x104efcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x104f00: 0x6a843  sra         $s5, $a2, 1
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 1));
    // 0x104f04: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x104f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x104f08: 0xe4843  sra         $t1, $t6, 1
    ctx->pc = 0x104f08u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
    // 0x104f0c: 0x6af025  or          $fp, $v1, $t2
    ctx->pc = 0x104f0cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x104f10: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x104f10u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x104f14: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x104f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x104f18: 0xad850010  sw          $a1, 0x10($t4)
    ctx->pc = 0x104f18u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 5));
    // 0x104f1c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x104f1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x104f20: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x104F20u;
    {
        const bool branch_taken_0x104f20 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104F20u;
            // 0x104f24: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f20) {
            ctx->pc = 0x104F44u;
            goto label_104f44;
        }
    }
    ctx->pc = 0x104F28u;
    // 0x104f28: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x104f28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x104f2c: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x104f2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x104f30: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x104f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x104f34: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x104f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x104f38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x104f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x104f3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x104F3Cu;
    {
        const bool branch_taken_0x104f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104F3Cu;
            // 0x104f40: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f3c) {
            ctx->pc = 0x104F58u;
            goto label_104f58;
        }
    }
    ctx->pc = 0x104F44u;
label_104f44:
    // 0x104f44: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x104f44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x104f48: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x104f48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x104f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104f50: 0xf22021  addu        $a0, $a3, $s2
    ctx->pc = 0x104f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x104f54: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x104f54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_104f58:
    // 0x104f58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x104f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104f5c: 0xa30c3  sra         $a2, $t2, 3
    ctx->pc = 0x104f5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 10), 3));
    // 0x104f60: 0xb28c3  sra         $a1, $t3, 3
    ctx->pc = 0x104f60u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 3));
    // 0x104f64: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x104f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x104f68: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x104f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x104f6c: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x104f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x104f70: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x104f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104f74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x104f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x104f78: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x104f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x104f7c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x104f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x104f80: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x104f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x104f84: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x104f84u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x104f88: 0x33270001  andi        $a3, $t9, 0x1
    ctx->pc = 0x104f88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x104f8c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x104f8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x104f90: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x104f90u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x104f94: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x104F94u;
    {
        const bool branch_taken_0x104f94 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104F94u;
            // 0x104f98: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f94) {
            ctx->pc = 0x104FD4u;
            goto label_104fd4;
        }
    }
    ctx->pc = 0x104F9Cu;
    // 0x104f9c: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x104f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x104fa0: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x104fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x104fa4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x104fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x104fa8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x104FA8u;
    {
        const bool branch_taken_0x104fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104fa8) {
            ctx->pc = 0x104FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104FA8u;
            // 0x104fac: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105008u;
            goto label_105008;
        }
    }
    ctx->pc = 0x104FB0u;
    // 0x104fb0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x104fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104fb4: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x104fb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x104fb8: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x104fb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x104fbc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x104fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104fc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x104fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x104fc4: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x104fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x104fc8: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x104fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x104fcc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x104FCCu;
    {
        const bool branch_taken_0x104fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104FCCu;
            // 0x104fd0: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fcc) {
            ctx->pc = 0x10500Cu;
            goto label_10500c;
        }
    }
    ctx->pc = 0x104FD4u;
label_104fd4:
    // 0x104fd4: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x104fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x104fd8: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x104fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x104fdc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x104fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x104fe0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x104FE0u;
    {
        const bool branch_taken_0x104fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104fe0) {
            ctx->pc = 0x104FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x104FE0u;
            // 0x104fe4: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105008u;
            goto label_105008;
        }
    }
    ctx->pc = 0x104FE8u;
    // 0x104fe8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x104fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104fec: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x104fecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x104ff0: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x104ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x104ff4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x104ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104ff8: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x104ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x104ffc: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x104ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x105000: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105000u;
    {
        const bool branch_taken_0x105000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105000u;
            // 0x105004: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105000) {
            ctx->pc = 0x10500Cu;
            goto label_10500c;
        }
    }
    ctx->pc = 0x105008u;
label_105008:
    // 0x105008: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x105008u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_10500c:
    // 0x10500c: 0xd61023  subu        $v0, $a2, $s6
    ctx->pc = 0x10500cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x105010: 0xb71823  subu        $v1, $a1, $s7
    ctx->pc = 0x105010u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x105014: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x105014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x105018: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x105018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10501c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105020: 0x8de5087c  lw          $a1, 0x87C($t7)
    ctx->pc = 0x105020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x105024: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x105024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x105028: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x105028u;
    {
        const bool branch_taken_0x105028 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105028u;
            // 0x10502c: 0x1032021  addu        $a0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105028) {
            ctx->pc = 0x105050u;
            goto label_105050;
        }
    }
    ctx->pc = 0x105030u;
    // 0x105030: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x105030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x105034: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x105034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x105038: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x105038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x10503c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x105040: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x105040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x105044: 0xada30018  sw          $v1, 0x18($t5)
    ctx->pc = 0x105044u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 3));
    // 0x105048: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x105048u;
    {
        const bool branch_taken_0x105048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105048u;
            // 0x10504c: 0xada20014  sw          $v0, 0x14($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105048) {
            ctx->pc = 0x105090u;
            goto label_105090;
        }
    }
    ctx->pc = 0x105050u;
label_105050:
    // 0x105050: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x105050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x105054: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x105054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x105058: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x105058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10505c: 0x2c420301  sltiu       $v0, $v0, 0x301
    ctx->pc = 0x10505cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)769) ? 1 : 0);
    // 0x105060: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105060u;
    {
        const bool branch_taken_0x105060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105060u;
            // 0x105064: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105060) {
            ctx->pc = 0x105074u;
            goto label_105074;
        }
    }
    ctx->pc = 0x105068u;
    // 0x105068: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x105068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10506c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10506Cu;
    {
        const bool branch_taken_0x10506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10506Cu;
            // 0x105070: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10506c) {
            ctx->pc = 0x105080u;
            goto label_105080;
        }
    }
    ctx->pc = 0x105074u;
label_105074:
    // 0x105074: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x105074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x105078: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x105078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10507c: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x10507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_105080:
    // 0x105080: 0xada20014  sw          $v0, 0x14($t5)
    ctx->pc = 0x105080u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
    // 0x105084: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x105084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x105088: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x105088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10508c: 0xada20018  sw          $v0, 0x18($t5)
    ctx->pc = 0x10508cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 2));
label_105090:
    // 0x105090: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x105090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x105094: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x105094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x105098: 0x3021004  sllv        $v0, $v0, $t8
    ctx->pc = 0x105098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x10509c: 0x2484e1d8  addiu       $a0, $a0, -0x1E28
    ctx->pc = 0x10509cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959576));
    // 0x1050a0: 0xada20010  sw          $v0, 0x10($t5)
    ctx->pc = 0x1050a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
    // 0x1050a4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1050a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1050a8: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x1050a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1050ac: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x1050acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1050b0: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x1050b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1050b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1050b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1050b8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1050b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1050bc: 0x8de50820  lw          $a1, 0x820($t7)
    ctx->pc = 0x1050bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x1050c0: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x1050c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1050c4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1050c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1050c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1050c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1050cc: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x1050ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1050d0: 0x2442e1f8  addiu       $v0, $v0, -0x1E08
    ctx->pc = 0x1050d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959608));
    // 0x1050d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1050d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1050d8: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1050d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1050dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1050dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1050e0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1050e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1050e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1050e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1050e8: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1050e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1050ec: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1050ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1050f0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1050f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1050f4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1050f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1050f8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1050f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1050fc: 0x1e43021  addu        $a2, $t7, $a0
    ctx->pc = 0x1050fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x105100: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x105100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105104: 0xacc705c8  sw          $a3, 0x5C8($a2)
    ctx->pc = 0x105104u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1480), GPR_U32(ctx, 7));
    // 0x105108: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x105108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10510c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105110: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x105110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105114: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x105114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105118: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x105118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10511c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10511cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105120: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x105120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105124: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x105124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105128: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x105128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10512c: 0xac8605d8  sw          $a2, 0x5D8($a0)
    ctx->pc = 0x10512cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1496), GPR_U32(ctx, 6));
    // 0x105130: 0x3e00008  jr          $ra
    ctx->pc = 0x105130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105130u;
            // 0x105134: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105138u;
}
