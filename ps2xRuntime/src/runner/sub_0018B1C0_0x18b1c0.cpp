#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B1C0
// Address: 0x18b1c0 - 0x18b998
void sub_0018B1C0_0x18b1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B1C0_0x18b1c0");
#endif

    switch (ctx->pc) {
        case 0x18b234u: goto label_18b234;
        case 0x18b7f8u: goto label_18b7f8;
        case 0x18b8a8u: goto label_18b8a8;
        case 0x18b8d4u: goto label_18b8d4;
        case 0x18b8dcu: goto label_18b8dc;
        default: break;
    }

    ctx->pc = 0x18b1c0u;

    // 0x18b1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b1c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b1c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18b1cc: 0x24920180  addiu       $s2, $a0, 0x180
    ctx->pc = 0x18b1ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x18b1d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18b1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18b1d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18b1d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18b1dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18b1e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18b1e4: 0xae430420  sw          $v1, 0x420($s2)
    ctx->pc = 0x18b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 3));
    // 0x18b1e8: 0x8e42042c  lw          $v0, 0x42C($s2)
    ctx->pc = 0x18b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1068)));
    // 0x18b1ec: 0x8e440308  lw          $a0, 0x308($s2)
    ctx->pc = 0x18b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
    // 0x18b1f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b1f4: 0xae4004a4  sw          $zero, 0x4A4($s2)
    ctx->pc = 0x18b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1188), GPR_U32(ctx, 0));
    // 0x18b1f8: 0xae42042c  sw          $v0, 0x42C($s2)
    ctx->pc = 0x18b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1068), GPR_U32(ctx, 2));
    // 0x18b1fc: 0xae4004a8  sw          $zero, 0x4A8($s2)
    ctx->pc = 0x18b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1192), GPR_U32(ctx, 0));
    // 0x18b200: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B200u;
    {
        const bool branch_taken_0x18b200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B200u;
            // 0x18b204: 0xae4004ac  sw          $zero, 0x4AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b200) {
            ctx->pc = 0x18B214u;
            goto label_18b214;
        }
    }
    ctx->pc = 0x18B208u;
    // 0x18b208: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x18b208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18b20c: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B20Cu;
    {
        const bool branch_taken_0x18b20c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b20c) {
            ctx->pc = 0x18B210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B20Cu;
            // 0x18b210: 0x8e420494  lw          $v0, 0x494($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B224u;
            goto label_18b224;
        }
    }
    ctx->pc = 0x18B214u;
label_18b214:
    // 0x18b214: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x18b214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x18b218: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B218u;
    {
        const bool branch_taken_0x18b218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b218) {
            ctx->pc = 0x18B22Cu;
            goto label_18b22c;
        }
    }
    ctx->pc = 0x18B220u;
    // 0x18b220: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x18b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
label_18b224:
    // 0x18b224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b228: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x18b228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
label_18b22c:
    // 0x18b22c: 0xc062c10  jal         func_18B040
    ctx->pc = 0x18B22Cu;
    SET_GPR_U32(ctx, 31, 0x18B234u);
    ctx->pc = 0x18B230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B22Cu;
            // 0x18b230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B040u;
    if (runtime->hasFunction(0x18B040u)) {
        auto targetFn = runtime->lookupFunction(0x18B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B234u; }
        if (ctx->pc != 0x18B234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B040_0x18b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B234u; }
        if (ctx->pc != 0x18B234u) { return; }
    }
    ctx->pc = 0x18B234u;
label_18b234:
    // 0x18b234: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x18b234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x18b238: 0x2628024  and         $s0, $s3, $v0
    ctx->pc = 0x18b238u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x18b23c: 0x2701823  subu        $v1, $s3, $s0
    ctx->pc = 0x18b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x18b240: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x18b240u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b244: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b248: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x18b248u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b24c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x18b24cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b250: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b254: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x18b254u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b258: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b25c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x18b25cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b260: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b264: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b264u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b268: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b26c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b26cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b274: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x18b274u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x18b278: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b278u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b27c: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x18b27cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x18b280: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b280u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b284: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b284u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b288: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b28c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x18b28cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x18b290: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b294: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x18b294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x18b298: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b298u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b29c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b29cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b2a0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x18b2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x18b2a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b2a8: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x18b2a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x18b2ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b2b0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b2b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b2b4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B2B4u;
    {
        const bool branch_taken_0x18b2b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2B4u;
            // 0x18b2b8: 0x2284004  sllv        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2b4) {
            ctx->pc = 0x18B2D8u;
            goto label_18b2d8;
        }
    }
    ctx->pc = 0x18B2BCu;
    // 0x18b2bc: 0x111023  negu        $v0, $s1
    ctx->pc = 0x18b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x18b2c0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b2c4: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x18b2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b2c8: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b2cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B2CCu;
    {
        const bool branch_taken_0x18b2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2CCu;
            // 0x18b2d0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2cc) {
            ctx->pc = 0x18B2E0u;
            goto label_18b2e0;
        }
    }
    ctx->pc = 0x18B2D4u;
    // 0x18b2d4: 0x0  nop
    ctx->pc = 0x18b2d4u;
    // NOP
label_18b2d8:
    // 0x18b2d8: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x18b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x18b2dc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18b2dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18b2e0:
    // 0x18b2e0: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b2e0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b2e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b2e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b2e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b2ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b2f0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b2f4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b2f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b2f8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b2f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b2fc: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x18b2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x18b300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b304: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b304u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b308: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x18b308u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b30c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b310: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b310u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b314: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b314u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b318: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B318u;
    {
        const bool branch_taken_0x18b318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B318u;
            // 0x18b31c: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b318) {
            ctx->pc = 0x18B390u;
            goto label_18b390;
        }
    }
    ctx->pc = 0x18B320u;
    // 0x18b320: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x18b320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x18b324: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B324u;
    {
        const bool branch_taken_0x18b324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B324u;
            // 0x18b328: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b324) {
            ctx->pc = 0x18B348u;
            goto label_18b348;
        }
    }
    ctx->pc = 0x18B32Cu;
    // 0x18b32c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x18b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b330: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b330u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b334: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18b334u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b338: 0x81d02  srl         $v1, $t0, 20
    ctx->pc = 0x18b338u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x18b33c: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b33cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B340u;
    {
        const bool branch_taken_0x18b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B340u;
            // 0x18b344: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b340) {
            ctx->pc = 0x18B354u;
            goto label_18b354;
        }
    }
    ctx->pc = 0x18B348u;
label_18b348:
    // 0x18b348: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x18b348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x18b34c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18b34cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b350: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x18b350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_18b354:
    // 0x18b354: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b354u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b358: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b35c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b35cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b364: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b364u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b368: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b368u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b36c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b36cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b370: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b374: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b374u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b378: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b378u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b37c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b37cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b384: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b384u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b388: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18B388u;
    {
        const bool branch_taken_0x18b388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B388u;
            // 0x18b38c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b388) {
            ctx->pc = 0x18B3A0u;
            goto label_18b3a0;
        }
    }
    ctx->pc = 0x18B390u;
label_18b390:
    // 0x18b390: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x18b390u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x18b394: 0x84300  sll         $t0, $t0, 12
    ctx->pc = 0x18b394u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x18b398: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x18b398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x18b39c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x18b39cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_18b3a0:
    // 0x18b3a0: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x18b3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x18b3a4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18B3A4u;
    {
        const bool branch_taken_0x18b3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3A4u;
            // 0x18b3a8: 0x81502  srl         $v0, $t0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3a4) {
            ctx->pc = 0x18B420u;
            goto label_18b420;
        }
    }
    ctx->pc = 0x18B3ACu;
    // 0x18b3ac: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x18b3acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x18b3b0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B3B0u;
    {
        const bool branch_taken_0x18b3b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3B0u;
            // 0x18b3b4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3b0) {
            ctx->pc = 0x18B3D8u;
            goto label_18b3d8;
        }
    }
    ctx->pc = 0x18B3B8u;
    // 0x18b3b8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x18b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b3bc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b3c0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18b3c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b3c4: 0x81d02  srl         $v1, $t0, 20
    ctx->pc = 0x18b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x18b3c8: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b3cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18B3CCu;
    {
        const bool branch_taken_0x18b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B3CCu;
            // 0x18b3d0: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3cc) {
            ctx->pc = 0x18B3E4u;
            goto label_18b3e4;
        }
    }
    ctx->pc = 0x18B3D4u;
    // 0x18b3d4: 0x0  nop
    ctx->pc = 0x18b3d4u;
    // NOP
label_18b3d8:
    // 0x18b3d8: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x18b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x18b3dc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18b3dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3e0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x18b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_18b3e4:
    // 0x18b3e4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b3e4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b3e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b3ec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b3ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b3f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b3f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b3f8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b3f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b3fc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b400: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b404: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b404u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b408: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b408u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b40c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b40cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b414: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b414u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B418u;
    {
        const bool branch_taken_0x18b418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B418u;
            // 0x18b41c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b418) {
            ctx->pc = 0x18B42Cu;
            goto label_18b42c;
        }
    }
    ctx->pc = 0x18B420u;
label_18b420:
    // 0x18b420: 0x84300  sll         $t0, $t0, 12
    ctx->pc = 0x18b420u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x18b424: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x18b424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x18b428: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x18b428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_18b42c:
    // 0x18b42c: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x18b42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x18b430: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B430u;
    {
        const bool branch_taken_0x18b430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B430u;
            // 0x18b434: 0x81702  srl         $v0, $t0, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b430) {
            ctx->pc = 0x18B4A8u;
            goto label_18b4a8;
        }
    }
    ctx->pc = 0x18B438u;
    // 0x18b438: 0x2631ffe4  addiu       $s1, $s1, -0x1C
    ctx->pc = 0x18b438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967268));
    // 0x18b43c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B43Cu;
    {
        const bool branch_taken_0x18b43c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B43Cu;
            // 0x18b440: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b43c) {
            ctx->pc = 0x18B460u;
            goto label_18b460;
        }
    }
    ctx->pc = 0x18B444u;
    // 0x18b444: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x18b444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b448: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b448u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b44c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18b44cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b450: 0x81f02  srl         $v1, $t0, 28
    ctx->pc = 0x18b450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x18b454: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b454u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b458: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B458u;
    {
        const bool branch_taken_0x18b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B458u;
            // 0x18b45c: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b458) {
            ctx->pc = 0x18B46Cu;
            goto label_18b46c;
        }
    }
    ctx->pc = 0x18B460u;
label_18b460:
    // 0x18b460: 0x81702  srl         $v0, $t0, 28
    ctx->pc = 0x18b460u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x18b464: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18b464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b468: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x18b468u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_18b46c:
    // 0x18b46c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b46cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b470: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b474: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b474u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b478: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b47c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b47cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b480: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b480u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b484: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b484u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b488: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b48c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b48cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b490: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b494: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b498: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b49c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b49cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b4a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B4A0u;
    {
        const bool branch_taken_0x18b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4A0u;
            // 0x18b4a4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4a0) {
            ctx->pc = 0x18B4B4u;
            goto label_18b4b4;
        }
    }
    ctx->pc = 0x18B4A8u;
label_18b4a8:
    // 0x18b4a8: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x18b4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x18b4ac: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x18b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x18b4b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x18b4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_18b4b4:
    // 0x18b4b4: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x18b4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x18b4b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B4B8u;
    {
        const bool branch_taken_0x18b4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4B8u;
            // 0x18b4bc: 0x81702  srl         $v0, $t0, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4b8) {
            ctx->pc = 0x18B530u;
            goto label_18b530;
        }
    }
    ctx->pc = 0x18B4C0u;
    // 0x18b4c0: 0x2631ffe4  addiu       $s1, $s1, -0x1C
    ctx->pc = 0x18b4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967268));
    // 0x18b4c4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B4C4u;
    {
        const bool branch_taken_0x18b4c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4C4u;
            // 0x18b4c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4c4) {
            ctx->pc = 0x18B4E8u;
            goto label_18b4e8;
        }
    }
    ctx->pc = 0x18B4CCu;
    // 0x18b4cc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x18b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b4d0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b4d4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18b4d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b4d8: 0x81f02  srl         $v1, $t0, 28
    ctx->pc = 0x18b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x18b4dc: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b4e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B4E0u;
    {
        const bool branch_taken_0x18b4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B4E0u;
            // 0x18b4e4: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4e0) {
            ctx->pc = 0x18B4F4u;
            goto label_18b4f4;
        }
    }
    ctx->pc = 0x18B4E8u;
label_18b4e8:
    // 0x18b4e8: 0x81702  srl         $v0, $t0, 28
    ctx->pc = 0x18b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x18b4ec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18b4ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4f0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x18b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_18b4f4:
    // 0x18b4f4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b4f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b4f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b4fc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b4fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b500: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b504: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b504u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b508: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b50c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b50cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b510: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b514: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b514u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b518: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b518u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b51c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b51cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b520: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b524: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b524u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B528u;
    {
        const bool branch_taken_0x18b528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B528u;
            // 0x18b52c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b528) {
            ctx->pc = 0x18B53Cu;
            goto label_18b53c;
        }
    }
    ctx->pc = 0x18B530u;
label_18b530:
    // 0x18b530: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x18b530u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x18b534: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x18b534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x18b538: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x18b538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_18b53c:
    // 0x18b53c: 0x2a22000e  slti        $v0, $s1, 0xE
    ctx->pc = 0x18b53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x18b540: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B540u;
    {
        const bool branch_taken_0x18b540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B540u;
            // 0x18b544: 0x81382  srl         $v0, $t0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b540) {
            ctx->pc = 0x18B5B8u;
            goto label_18b5b8;
        }
    }
    ctx->pc = 0x18B548u;
    // 0x18b548: 0x2631fff2  addiu       $s1, $s1, -0xE
    ctx->pc = 0x18b548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967282));
    // 0x18b54c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B54Cu;
    {
        const bool branch_taken_0x18b54c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B54Cu;
            // 0x18b550: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b54c) {
            ctx->pc = 0x18B570u;
            goto label_18b570;
        }
    }
    ctx->pc = 0x18B554u;
    // 0x18b554: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x18b554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b558: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b558u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b55c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18b55cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b560: 0x81b82  srl         $v1, $t0, 14
    ctx->pc = 0x18b560u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x18b564: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b564u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b568: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B568u;
    {
        const bool branch_taken_0x18b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B568u;
            // 0x18b56c: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b568) {
            ctx->pc = 0x18B57Cu;
            goto label_18b57c;
        }
    }
    ctx->pc = 0x18B570u;
label_18b570:
    // 0x18b570: 0x81382  srl         $v0, $t0, 14
    ctx->pc = 0x18b570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x18b574: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18b574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b578: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x18b578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_18b57c:
    // 0x18b57c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b57cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b580: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b584: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b584u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b58c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b58cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b590: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b590u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b594: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b594u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b598: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b59c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b59cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b5a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b5a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b5a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b5a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b5a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b5ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b5acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b5b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B5B0u;
    {
        const bool branch_taken_0x18b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5B0u;
            // 0x18b5b4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5b0) {
            ctx->pc = 0x18B5C4u;
            goto label_18b5c4;
        }
    }
    ctx->pc = 0x18B5B8u;
label_18b5b8:
    // 0x18b5b8: 0x84480  sll         $t0, $t0, 18
    ctx->pc = 0x18b5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 18));
    // 0x18b5bc: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x18b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x18b5c0: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x18b5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_18b5c4:
    // 0x18b5c4: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x18b5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18b5c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B5C8u;
    {
        const bool branch_taken_0x18b5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5C8u;
            // 0x18b5cc: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5c8) {
            ctx->pc = 0x18B640u;
            goto label_18b640;
        }
    }
    ctx->pc = 0x18B5D0u;
    // 0x18b5d0: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x18b5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x18b5d4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B5D4u;
    {
        const bool branch_taken_0x18b5d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5D4u;
            // 0x18b5d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5d4) {
            ctx->pc = 0x18B5F8u;
            goto label_18b5f8;
        }
    }
    ctx->pc = 0x18B5DCu;
    // 0x18b5dc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x18b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b5e0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b5e4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18b5e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b5e8: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x18b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x18b5ec: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b5f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B5F0u;
    {
        const bool branch_taken_0x18b5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5F0u;
            // 0x18b5f4: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5f0) {
            ctx->pc = 0x18B604u;
            goto label_18b604;
        }
    }
    ctx->pc = 0x18B5F8u;
label_18b5f8:
    // 0x18b5f8: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x18b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x18b5fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18b5fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b600: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x18b600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_18b604:
    // 0x18b604: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b604u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b608: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b60c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b60cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b614: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b614u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b618: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b618u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b61c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b61cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b620: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b624: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b624u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b628: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b628u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b62c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b62cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b630: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b634: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b634u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B638u;
    {
        const bool branch_taken_0x18b638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B638u;
            // 0x18b63c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b638) {
            ctx->pc = 0x18B64Cu;
            goto label_18b64c;
        }
    }
    ctx->pc = 0x18B640u;
label_18b640:
    // 0x18b640: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x18b640u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x18b644: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x18b644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x18b648: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18b64c:
    // 0x18b64c: 0x2a220016  slti        $v0, $s1, 0x16
    ctx->pc = 0x18b64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x18b650: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B650u;
    {
        const bool branch_taken_0x18b650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B650u;
            // 0x18b654: 0x81582  srl         $v0, $t0, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b650) {
            ctx->pc = 0x18B6C8u;
            goto label_18b6c8;
        }
    }
    ctx->pc = 0x18B658u;
    // 0x18b658: 0x2631ffea  addiu       $s1, $s1, -0x16
    ctx->pc = 0x18b658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967274));
    // 0x18b65c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B65Cu;
    {
        const bool branch_taken_0x18b65c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B65Cu;
            // 0x18b660: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b65c) {
            ctx->pc = 0x18B680u;
            goto label_18b680;
        }
    }
    ctx->pc = 0x18B664u;
    // 0x18b664: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x18b664u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b668: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b668u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b66c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18b66cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b670: 0x81d82  srl         $v1, $t0, 22
    ctx->pc = 0x18b670u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
    // 0x18b674: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b674u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b678: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B678u;
    {
        const bool branch_taken_0x18b678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B678u;
            // 0x18b67c: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b678) {
            ctx->pc = 0x18B68Cu;
            goto label_18b68c;
        }
    }
    ctx->pc = 0x18B680u;
label_18b680:
    // 0x18b680: 0x81582  srl         $v0, $t0, 22
    ctx->pc = 0x18b680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
    // 0x18b684: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18b684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b688: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x18b688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_18b68c:
    // 0x18b68c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b68cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b690: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b694: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b694u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b698: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b69c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b69cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b6a0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b6a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b6a4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b6a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b6a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b6ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b6acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b6b0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b6b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b6b4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b6b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b6b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b6bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b6c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B6C0u;
    {
        const bool branch_taken_0x18b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6C0u;
            // 0x18b6c4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6c0) {
            ctx->pc = 0x18B6D4u;
            goto label_18b6d4;
        }
    }
    ctx->pc = 0x18B6C8u;
label_18b6c8:
    // 0x18b6c8: 0x84280  sll         $t0, $t0, 10
    ctx->pc = 0x18b6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 10));
    // 0x18b6cc: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x18b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x18b6d0: 0x2631000a  addiu       $s1, $s1, 0xA
    ctx->pc = 0x18b6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_18b6d4:
    // 0x18b6d4: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x18b6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18b6d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B6D8u;
    {
        const bool branch_taken_0x18b6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6D8u;
            // 0x18b6dc: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6d8) {
            ctx->pc = 0x18B750u;
            goto label_18b750;
        }
    }
    ctx->pc = 0x18B6E0u;
    // 0x18b6e0: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x18b6e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x18b6e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B6E4u;
    {
        const bool branch_taken_0x18b6e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6E4u;
            // 0x18b6e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6e4) {
            ctx->pc = 0x18B708u;
            goto label_18b708;
        }
    }
    ctx->pc = 0x18B6ECu;
    // 0x18b6ec: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x18b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b6f0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b6f4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18b6f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b6f8: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x18b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x18b6fc: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b700: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B700u;
    {
        const bool branch_taken_0x18b700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B700u;
            // 0x18b704: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b700) {
            ctx->pc = 0x18B714u;
            goto label_18b714;
        }
    }
    ctx->pc = 0x18B708u;
label_18b708:
    // 0x18b708: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x18b708u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x18b70c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18b70cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b710: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x18b710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_18b714:
    // 0x18b714: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b714u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b718: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b71c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b71cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b720: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b724: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b724u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b728: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b728u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b72c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b72cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b730: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b734: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b734u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b738: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b738u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b73c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b73cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b744: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b744u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b748: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B748u;
    {
        const bool branch_taken_0x18b748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B748u;
            // 0x18b74c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b748) {
            ctx->pc = 0x18B75Cu;
            goto label_18b75c;
        }
    }
    ctx->pc = 0x18B750u;
label_18b750:
    // 0x18b750: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x18b750u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x18b754: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x18b754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x18b758: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18b75c:
    // 0x18b75c: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x18b75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x18b760: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B760u;
    {
        const bool branch_taken_0x18b760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B760u;
            // 0x18b764: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b760) {
            ctx->pc = 0x18B7D8u;
            goto label_18b7d8;
        }
    }
    ctx->pc = 0x18B768u;
    // 0x18b768: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x18b768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x18b76c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B76Cu;
    {
        const bool branch_taken_0x18b76c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B76Cu;
            // 0x18b770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b76c) {
            ctx->pc = 0x18B790u;
            goto label_18b790;
        }
    }
    ctx->pc = 0x18B774u;
    // 0x18b774: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x18b774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b778: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b77c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18b77cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b780: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x18b780u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x18b784: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b784u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B788u;
    {
        const bool branch_taken_0x18b788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B788u;
            // 0x18b78c: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b788) {
            ctx->pc = 0x18B79Cu;
            goto label_18b79c;
        }
    }
    ctx->pc = 0x18B790u;
label_18b790:
    // 0x18b790: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x18b790u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x18b794: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x18b794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b798: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x18b798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_18b79c:
    // 0x18b79c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b79cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b7a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b7a4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b7a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b7a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b7ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b7acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b7b0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b7b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b7b4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b7b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b7b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b7bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b7c0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b7c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b7c4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b7c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b7c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b7cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b7d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B7D0u;
    {
        const bool branch_taken_0x18b7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7D0u;
            // 0x18b7d4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7d0) {
            ctx->pc = 0x18B7E4u;
            goto label_18b7e4;
        }
    }
    ctx->pc = 0x18B7D8u;
label_18b7d8:
    // 0x18b7d8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x18b7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x18b7dc: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x18b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x18b7e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b7e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18b7e4:
    // 0x18b7e4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x18b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x18b7e8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18B7E8u;
    {
        const bool branch_taken_0x18b7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7E8u;
            // 0x18b7ec: 0x2a22001f  slti        $v0, $s1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7e8) {
            ctx->pc = 0x18B854u;
            goto label_18b854;
        }
    }
    ctx->pc = 0x18B7F0u;
    // 0x18b7f0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x18b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x18b7f4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x18b7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_18b7f8:
    // 0x18b7f8: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x18b7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18b7fc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x18B7FCu;
    {
        const bool branch_taken_0x18b7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b7fc) {
            ctx->pc = 0x18B800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7FCu;
            // 0x18b800: 0x84200  sll         $t0, $t0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B844u;
            goto label_18b844;
        }
    }
    ctx->pc = 0x18B804u;
    // 0x18b804: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x18b804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x18b808: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x18b808u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x18b80c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x18b80cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b810: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b814: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b814u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b81c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b81cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b820: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18b820u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b824: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x18b828: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b82c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b82cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b830: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x18b830u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b834: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x18b834u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x18b838: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b83c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x18b83cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x18b840: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x18b840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_18b844:
    // 0x18b844: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18b844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18b848: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18B848u;
    {
        const bool branch_taken_0x18b848 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x18b848) {
            ctx->pc = 0x18B84Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B848u;
            // 0x18b84c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b7f8;
        }
    }
    ctx->pc = 0x18B850u;
    // 0x18b850: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x18b850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
label_18b854:
    // 0x18b854: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18B854u;
    {
        const bool branch_taken_0x18b854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B854u;
            // 0x18b858: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b854) {
            ctx->pc = 0x18B890u;
            goto label_18b890;
        }
    }
    ctx->pc = 0x18B85Cu;
    // 0x18b85c: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x18b85cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x18b860: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18B860u;
    {
        const bool branch_taken_0x18b860 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B860u;
            // 0x18b864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b860) {
            ctx->pc = 0x18B880u;
            goto label_18b880;
        }
    }
    ctx->pc = 0x18B868u;
    // 0x18b868: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x18b868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b86c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x18b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18b870: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18b870u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18b874: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x18b874u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x18b878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18B878u;
    {
        const bool branch_taken_0x18b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B878u;
            // 0x18b87c: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b878) {
            ctx->pc = 0x18B888u;
            goto label_18b888;
        }
    }
    ctx->pc = 0x18B880u;
label_18b880:
    // 0x18b880: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x18b880u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x18b884: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x18b884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_18b888:
    // 0x18b888: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18B888u;
    {
        const bool branch_taken_0x18b888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B888u;
            // 0x18b88c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b888) {
            ctx->pc = 0x18B898u;
            goto label_18b898;
        }
    }
    ctx->pc = 0x18B890u;
label_18b890:
    // 0x18b890: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18b894: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x18b894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_18b898:
    // 0x18b898: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x18b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x18b89c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18B89Cu;
    {
        const bool branch_taken_0x18b89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B89Cu;
            // 0x18b8a0: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b89c) {
            ctx->pc = 0x18B8CCu;
            goto label_18b8cc;
        }
    }
    ctx->pc = 0x18B8A4u;
    // 0x18b8a4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x18b8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_18b8a8:
    // 0x18b8a8: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x18b8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18b8ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B8ACu;
    {
        const bool branch_taken_0x18b8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8ACu;
            // 0x18b8b0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8ac) {
            ctx->pc = 0x18B8BCu;
            goto label_18b8bc;
        }
    }
    ctx->pc = 0x18B8B4u;
    // 0x18b8b4: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x18b8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x18b8b8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x18b8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_18b8bc:
    // 0x18b8bc: 0x0  nop
    ctx->pc = 0x18b8bcu;
    // NOP
    // 0x18b8c0: 0x0  nop
    ctx->pc = 0x18b8c0u;
    // NOP
    // 0x18b8c4: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18B8C4u;
    {
        const bool branch_taken_0x18b8c4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b8c4) {
            ctx->pc = 0x18B8C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8C4u;
            // 0x18b8c8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B8A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b8a8;
        }
    }
    ctx->pc = 0x18B8CCu;
label_18b8cc:
    // 0x18b8cc: 0xc062c12  jal         func_18B048
    ctx->pc = 0x18B8CCu;
    SET_GPR_U32(ctx, 31, 0x18B8D4u);
    ctx->pc = 0x18B8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8CCu;
            // 0x18b8d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B048u;
    if (runtime->hasFunction(0x18B048u)) {
        auto targetFn = runtime->lookupFunction(0x18B048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B8D4u; }
        if (ctx->pc != 0x18B8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B048_0x18b048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B8D4u; }
        if (ctx->pc != 0x18B8D4u) { return; }
    }
    ctx->pc = 0x18B8D4u;
label_18b8d4:
    // 0x18b8d4: 0xc062c6e  jal         func_18B1B8
    ctx->pc = 0x18B8D4u;
    SET_GPR_U32(ctx, 31, 0x18B8DCu);
    ctx->pc = 0x18B8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8D4u;
            // 0x18b8d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B1B8u;
    if (runtime->hasFunction(0x18B1B8u)) {
        auto targetFn = runtime->lookupFunction(0x18B1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B8DCu; }
        if (ctx->pc != 0x18B8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B1B8_0x18b1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B8DCu; }
        if (ctx->pc != 0x18B8DCu) { return; }
    }
    ctx->pc = 0x18B8DCu;
label_18b8dc:
    // 0x18b8dc: 0x8e4202c4  lw          $v0, 0x2C4($s2)
    ctx->pc = 0x18b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 708)));
    // 0x18b8e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B8E0u;
    {
        const bool branch_taken_0x18b8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b8e0) {
            ctx->pc = 0x18B8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8E0u;
            // 0x18b8e4: 0x8e4202c8  lw          $v0, 0x2C8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B8F8u;
            goto label_18b8f8;
        }
    }
    ctx->pc = 0x18B8E8u;
    // 0x18b8e8: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x18b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x18b8ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b8f0: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x18b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x18b8f4: 0x8e4202c8  lw          $v0, 0x2C8($s2)
    ctx->pc = 0x18b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_18b8f8:
    // 0x18b8f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B8F8u;
    {
        const bool branch_taken_0x18b8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b8f8) {
            ctx->pc = 0x18B8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B8F8u;
            // 0x18b8fc: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B910u;
            goto label_18b910;
        }
    }
    ctx->pc = 0x18B900u;
    // 0x18b900: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x18b900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x18b904: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b908: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x18b908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x18b90c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x18b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18b910:
    // 0x18b910: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18b914: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x18b914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18b918: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B918u;
    {
        const bool branch_taken_0x18b918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b918) {
            ctx->pc = 0x18B91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B918u;
            // 0x18b91c: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B930u;
            goto label_18b930;
        }
    }
    ctx->pc = 0x18B920u;
    // 0x18b920: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x18b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x18b924: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b928: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x18b928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x18b92c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x18b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_18b930:
    // 0x18b930: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18b934: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x18b934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b938: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B938u;
    {
        const bool branch_taken_0x18b938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B938u;
            // 0x18b93c: 0x2131823  subu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b938) {
            ctx->pc = 0x18B94Cu;
            goto label_18b94c;
        }
    }
    ctx->pc = 0x18B940u;
    // 0x18b940: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x18b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x18b944: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b948: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x18b948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
label_18b94c:
    // 0x18b94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18b94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b950: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18b950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b958: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18b958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18b95c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18b95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18b960: 0xae42030c  sw          $v0, 0x30C($s2)
    ctx->pc = 0x18b960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 780), GPR_U32(ctx, 2));
    // 0x18b964: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x18b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x18b968: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x18b968u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18b96c: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x18b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x18b970: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x18b970u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x18b974: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x18b974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18b978: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x18b978u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18b97c: 0xae450308  sw          $a1, 0x308($s2)
    ctx->pc = 0x18b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 776), GPR_U32(ctx, 5));
    // 0x18b980: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x18b980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18b984: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18b984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b988: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18b988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18b98c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b990: 0x3e00008  jr          $ra
    ctx->pc = 0x18B990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B990u;
            // 0x18b994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B998u;
}
