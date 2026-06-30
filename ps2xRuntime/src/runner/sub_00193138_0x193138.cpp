#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193138
// Address: 0x193138 - 0x1935e0
void sub_00193138_0x193138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193138_0x193138");
#endif

    switch (ctx->pc) {
        case 0x193410u: goto label_193410;
        default: break;
    }

    ctx->pc = 0x193138u;

    // 0x193138: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x193138u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19313c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x19313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x193140: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x193140u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x193144: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x193144u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193148: 0x1881023  subu        $v0, $t4, $t0
    ctx->pc = 0x193148u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x19314c: 0x810a0000  lb          $t2, 0x0($t0)
    ctx->pc = 0x19314cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193150: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193154: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x193154u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x193158: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x193158u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19315c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19315cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193160: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x193160u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193164: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193168: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x193168u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19316c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19316cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193170: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x193170u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193174: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193178: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193178u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19317c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19317cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193180: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x193180u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x193184: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193184u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193188: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x193188u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x19318c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x19318cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193190: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x193194: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x193194u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x193198: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19319c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19319cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1931a0: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x1931a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x1931a4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1931a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1931a8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1931a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1931ac: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1931acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1931b0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1931b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1931b4: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1931b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1931b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1931b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1931bc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1931bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1931c0: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1931C0u;
    {
        const bool branch_taken_0x1931c0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1931C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1931C0u;
            // 0x1931c4: 0x12a5004  sllv        $t2, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1931c0) {
            ctx->pc = 0x1931E0u;
            goto label_1931e0;
        }
    }
    ctx->pc = 0x1931C8u;
    // 0x1931c8: 0x91023  negu        $v0, $t1
    ctx->pc = 0x1931c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x1931cc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1931ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1931d0: 0x1422825  or          $a1, $t2, $v0
    ctx->pc = 0x1931d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1931d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1931D4u;
    {
        const bool branch_taken_0x1931d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1931D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1931D4u;
            // 0x1931d8: 0x1275004  sllv        $t2, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1931d4) {
            ctx->pc = 0x1931E8u;
            goto label_1931e8;
        }
    }
    ctx->pc = 0x1931DCu;
    // 0x1931dc: 0x0  nop
    ctx->pc = 0x1931dcu;
    // NOP
label_1931e0:
    // 0x1931e0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1931e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931e4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1931e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1931e8:
    // 0x1931e8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1931e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1931ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1931ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1931f0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1931f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1931f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1931f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1931f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1931f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1931fc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1931fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193200: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193200u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x193204: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193208: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193208u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x19320c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19320cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193210: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x193210u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x193214: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x193214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x193218: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193218u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x19321c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19321cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193220: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x193224: 0x14a400eb  bne         $a1, $a0, . + 4 + (0xEB << 2)
    ctx->pc = 0x193224u;
    {
        const bool branch_taken_0x193224 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x193228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193224u;
            // 0x193228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193224) {
            ctx->pc = 0x1935D4u;
            goto label_1935d4;
        }
    }
    ctx->pc = 0x19322Cu;
    // 0x19322c: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x19322cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x193230: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x193230u;
    {
        const bool branch_taken_0x193230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193230) {
            ctx->pc = 0x193234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193230u;
            // 0x193234: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193288u;
            goto label_193288;
        }
    }
    ctx->pc = 0x193238u;
    // 0x193238: 0x2529ffe5  addiu       $t1, $t1, -0x1B
    ctx->pc = 0x193238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x19323c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x19323cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193240: 0x1271804  sllv        $v1, $a3, $t1
    ctx->pc = 0x193240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x193244: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x193244u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193248: 0x39220000  xori        $v0, $t1, 0x0
    ctx->pc = 0x193248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)0);
    // 0x19324c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19324cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193250: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x193250u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x193254: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193254u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193258: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193258u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x19325c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19325cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193260: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x193260u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193264: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193268: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x19326c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19326cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193270: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193270u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193274: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193278: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x193278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x19327c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x19327cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x193280u;
    {
        const bool branch_taken_0x193280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193280u;
            // 0x193284: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193280) {
            ctx->pc = 0x19328Cu;
            goto label_19328c;
        }
    }
    ctx->pc = 0x193288u;
label_193288:
    // 0x193288: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x193288u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_19328c:
    // 0x19328c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x19328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x193290: 0x15220013  bne         $t1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x193290u;
    {
        const bool branch_taken_0x193290 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x193294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193290u;
            // 0x193294: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193290) {
            ctx->pc = 0x1932E0u;
            goto label_1932e0;
        }
    }
    ctx->pc = 0x193298u;
    // 0x193298: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x193298u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19329c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x19329cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1932a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1932a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1932a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1932a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932a8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1932a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1932ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1932acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1932b0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1932b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1932b4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1932b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1932b8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1932b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1932bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1932bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1932c0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1932c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1932c4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1932c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1932c8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1932c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1932cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1932ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1932d0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1932d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1932d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1932D4u;
    {
        const bool branch_taken_0x1932d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1932D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1932D4u;
            // 0x1932d8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932d4) {
            ctx->pc = 0x1932E8u;
            goto label_1932e8;
        }
    }
    ctx->pc = 0x1932DCu;
    // 0x1932dc: 0x0  nop
    ctx->pc = 0x1932dcu;
    // NOP
label_1932e0:
    // 0x1932e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1932e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1932e4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1932e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1932e8:
    // 0x1932e8: 0x14a000ba  bnez        $a1, . + 4 + (0xBA << 2)
    ctx->pc = 0x1932E8u;
    {
        const bool branch_taken_0x1932e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1932ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1932E8u;
            // 0x1932ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932e8) {
            ctx->pc = 0x1935D4u;
            goto label_1935d4;
        }
    }
    ctx->pc = 0x1932F0u;
    // 0x1932f0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1932f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1932f4: 0x15220012  bne         $t1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1932F4u;
    {
        const bool branch_taken_0x1932f4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1932F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1932F4u;
            // 0x1932f8: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932f4) {
            ctx->pc = 0x193340u;
            goto label_193340;
        }
    }
    ctx->pc = 0x1932FCu;
    // 0x1932fc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1932fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193300: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x193300u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193304: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193308: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19330c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19330cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193310: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193314: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193314u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193318: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x193318u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19331c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x19331cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x193320: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193324: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193324u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193328: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193328u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19332c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x19332cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x193330: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193334: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193334u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193338: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x193338u;
    {
        const bool branch_taken_0x193338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19333Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193338u;
            // 0x19333c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193338) {
            ctx->pc = 0x193348u;
            goto label_193348;
        }
    }
    ctx->pc = 0x193340u;
label_193340:
    // 0x193340: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x193340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x193344: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x193344u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_193348:
    // 0x193348: 0x10a000a2  beqz        $a1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x193348u;
    {
        const bool branch_taken_0x193348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19334Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193348u;
            // 0x19334c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193348) {
            ctx->pc = 0x1935D4u;
            goto label_1935d4;
        }
    }
    ctx->pc = 0x193350u;
    // 0x193350: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x193350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x193354: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x193354u;
    {
        const bool branch_taken_0x193354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193354u;
            // 0x193358: 0xa2e82  srl         $a1, $t2, 26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193354) {
            ctx->pc = 0x19336Cu;
            goto label_19336c;
        }
    }
    ctx->pc = 0x19335Cu;
    // 0x19335c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x19335cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x193360: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x193360u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x193364: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x193364u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x193368: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x193368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_19336c:
    // 0x19336c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x19336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x193370: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x193370u;
    {
        const bool branch_taken_0x193370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x193374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193370u;
            // 0x193374: 0x2ca2000b  sltiu       $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193370) {
            ctx->pc = 0x1933B0u;
            goto label_1933b0;
        }
    }
    ctx->pc = 0x193378u;
    // 0x193378: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x193378u;
    {
        const bool branch_taken_0x193378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193378) {
            ctx->pc = 0x1935B0u;
            goto label_1935b0;
        }
    }
    ctx->pc = 0x193380u;
    // 0x193380: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x193380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x193384: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x193384u;
    {
        const bool branch_taken_0x193384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193384) {
            ctx->pc = 0x1935B0u;
            goto label_1935b0;
        }
    }
    ctx->pc = 0x19338Cu;
    // 0x19338c: 0x2ca20016  sltiu       $v0, $a1, 0x16
    ctx->pc = 0x19338cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x193390: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x193390u;
    {
        const bool branch_taken_0x193390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193390u;
            // 0x193394: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193390) {
            ctx->pc = 0x1935B0u;
            goto label_1935b0;
        }
    }
    ctx->pc = 0x193398u;
    // 0x193398: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x193398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19339c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x19339Cu;
    {
        const bool branch_taken_0x19339c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19339c) {
            ctx->pc = 0x1933A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19339Cu;
            // 0x1933a0: 0x2529ffe0  addiu       $t1, $t1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1933C4u;
            goto label_1933c4;
        }
    }
    ctx->pc = 0x1933A4u;
    // 0x1933a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1933A4u;
    {
        const bool branch_taken_0x1933a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1933A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1933A4u;
            // 0x1933a8: 0xa5140  sll         $t2, $t2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933a4) {
            ctx->pc = 0x193400u;
            goto label_193400;
        }
    }
    ctx->pc = 0x1933ACu;
    // 0x1933ac: 0x0  nop
    ctx->pc = 0x1933acu;
    // NOP
label_1933b0:
    // 0x1933b0: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x1933b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x1933b4: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1933b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1933b8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1933B8u;
    {
        const bool branch_taken_0x1933b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1933b8) {
            ctx->pc = 0x1933BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1933B8u;
            // 0x1933bc: 0xa5180  sll         $t2, $t2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193400u;
            goto label_193400;
        }
    }
    ctx->pc = 0x1933C0u;
    // 0x1933c0: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1933c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
label_1933c4:
    // 0x1933c4: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1933c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1933c8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1933c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1933cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1933ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1933d0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1933d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1933d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1933d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1933d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1933d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1933dc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1933dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1933e0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1933e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1933e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1933e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1933e8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1933e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1933ec: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1933ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1933f0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1933f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1933f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1933f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1933f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1933f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1933fc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1933fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_193400:
    // 0x193400: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x193400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x193404: 0x240b0035  addiu       $t3, $zero, 0x35
    ctx->pc = 0x193404u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x193408: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x193408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19340c: 0x29220016  slti        $v0, $t1, 0x16
    ctx->pc = 0x19340cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
label_193410:
    // 0x193410: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193410u;
    {
        const bool branch_taken_0x193410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193410u;
            // 0x193414: 0xa2d42  srl         $a1, $t2, 21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193410) {
            ctx->pc = 0x193424u;
            goto label_193424;
        }
    }
    ctx->pc = 0x193418u;
    // 0x193418: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x193418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x19341c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x19341cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x193420: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x193420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_193424:
    // 0x193424: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x193424u;
    {
        const bool branch_taken_0x193424 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x193428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193424u;
            // 0x193428: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193424) {
            ctx->pc = 0x193490u;
            goto label_193490;
        }
    }
    ctx->pc = 0x19342Cu;
    // 0x19342c: 0x2529000b  addiu       $t1, $t1, 0xB
    ctx->pc = 0x19342cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11));
    // 0x193430: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x193430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x193434: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x193434u;
    {
        const bool branch_taken_0x193434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193434) {
            ctx->pc = 0x193438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193434u;
            // 0x193438: 0xa52c0  sll         $t2, $t2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19347Cu;
            goto label_19347c;
        }
    }
    ctx->pc = 0x19343Cu;
    // 0x19343c: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x19343cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x193440: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x193440u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x193444: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x193444u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193448: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19344c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19344cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193450: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193454: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193454u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193458: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x193458u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19345c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x19345cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x193460: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193464: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193464u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193468: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x193468u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19346c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x19346cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x193470: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193474: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193474u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x193478: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193478u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19347c:
    // 0x19347c: 0x24c6ffdf  addiu       $a2, $a2, -0x21
    ctx->pc = 0x19347cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967263));
    // 0x193480: 0x28c20022  slti        $v0, $a2, 0x22
    ctx->pc = 0x193480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x193484: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x193484u;
    {
        const bool branch_taken_0x193484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193484u;
            // 0x193488: 0x29220016  slti        $v0, $t1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193484) {
            ctx->pc = 0x193410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193410;
        }
    }
    ctx->pc = 0x19348Cu;
    // 0x19348c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x19348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_193490:
    // 0x193490: 0x2c630021  sltiu       $v1, $v1, 0x21
    ctx->pc = 0x193490u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x193494: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x193494u;
    {
        const bool branch_taken_0x193494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193494u;
            // 0x193498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193494) {
            ctx->pc = 0x1935D4u;
            goto label_1935d4;
        }
    }
    ctx->pc = 0x19349Cu;
    // 0x19349c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x19349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1934a0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1934a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1934a4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1934a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1934a8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1934a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1934ac: 0x84c68338  lh          $a2, -0x7CC8($a2)
    ctx->pc = 0x1934acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294935352)));
    // 0x1934b0: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1934b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1934b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1934b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1934b8: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x1934b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1934bc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1934BCu;
    {
        const bool branch_taken_0x1934bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1934C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1934BCu;
            // 0x1934c0: 0x6a2806  srlv        $a1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934bc) {
            ctx->pc = 0x193528u;
            goto label_193528;
        }
    }
    ctx->pc = 0x1934C4u;
    // 0x1934c4: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x1934c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1934c8: 0x2449ffe0  addiu       $t1, $v0, -0x20
    ctx->pc = 0x1934c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1934cc: 0x51200006  beql        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1934CCu;
    {
        const bool branch_taken_0x1934cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1934cc) {
            ctx->pc = 0x1934D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1934CCu;
            // 0x1934d0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1934E8u;
            goto label_1934e8;
        }
    }
    ctx->pc = 0x1934D4u;
    // 0x1934d4: 0x891023  subu        $v0, $a0, $t1
    ctx->pc = 0x1934d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1934d8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1934d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1934dc: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1934dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1934e0: 0x6a2806  srlv        $a1, $t2, $v1
    ctx->pc = 0x1934e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x1934e4: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1934e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
label_1934e8:
    // 0x1934e8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1934e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1934ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1934ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1934f0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1934f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1934f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1934f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1934f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1934f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1934fc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1934fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193500: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x193500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x193504: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193508: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193508u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x19350c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19350cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x193510: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x193510u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x193514: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193518: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x193518u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x19351c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19351Cu;
    {
        const bool branch_taken_0x19351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19351Cu;
            // 0x193520: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19351c) {
            ctx->pc = 0x193530u;
            goto label_193530;
        }
    }
    ctx->pc = 0x193524u;
    // 0x193524: 0x0  nop
    ctx->pc = 0x193524u;
    // NOP
label_193528:
    // 0x193528: 0x8a5004  sllv        $t2, $t2, $a0
    ctx->pc = 0x193528u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x19352c: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x19352cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_193530:
    // 0x193530: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x193530u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x193534: 0x14a30027  bne         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x193534u;
    {
        const bool branch_taken_0x193534 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x193538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193534u;
            // 0x193538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193534) {
            ctx->pc = 0x1935D4u;
            goto label_1935d4;
        }
    }
    ctx->pc = 0x19353Cu;
    // 0x19353c: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x19353cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x193540: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x193540u;
    {
        const bool branch_taken_0x193540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193540u;
            // 0x193544: 0xa2e82  srl         $a1, $t2, 26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193540) {
            ctx->pc = 0x193558u;
            goto label_193558;
        }
    }
    ctx->pc = 0x193548u;
    // 0x193548: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x193548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19354c: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x19354cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x193550: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x193550u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x193554: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x193554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_193558:
    // 0x193558: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x193558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19355c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19355Cu;
    {
        const bool branch_taken_0x19355c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x193560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19355Cu;
            // 0x193560: 0x2ca2000b  sltiu       $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19355c) {
            ctx->pc = 0x193590u;
            goto label_193590;
        }
    }
    ctx->pc = 0x193564u;
    // 0x193564: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x193564u;
    {
        const bool branch_taken_0x193564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193564) {
            ctx->pc = 0x1935B0u;
            goto label_1935b0;
        }
    }
    ctx->pc = 0x19356Cu;
    // 0x19356c: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x19356cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x193570: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x193570u;
    {
        const bool branch_taken_0x193570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193570) {
            ctx->pc = 0x1935B0u;
            goto label_1935b0;
        }
    }
    ctx->pc = 0x193578u;
    // 0x193578: 0x2ca20016  sltiu       $v0, $a1, 0x16
    ctx->pc = 0x193578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x19357c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19357Cu;
    {
        const bool branch_taken_0x19357c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19357Cu;
            // 0x193580: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19357c) {
            ctx->pc = 0x1935B0u;
            goto label_1935b0;
        }
    }
    ctx->pc = 0x193584u;
    // 0x193584: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x193584u;
    {
        const bool branch_taken_0x193584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193584u;
            // 0x193588: 0x29220020  slti        $v0, $t1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193584) {
            ctx->pc = 0x193598u;
            goto label_193598;
        }
    }
    ctx->pc = 0x19358Cu;
    // 0x19358c: 0x0  nop
    ctx->pc = 0x19358cu;
    // NOP
label_193590:
    // 0x193590: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x193590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x193594: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x193594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
label_193598:
    // 0x193598: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x193598u;
    {
        const bool branch_taken_0x193598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193598) {
            ctx->pc = 0x19359Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193598u;
            // 0x19359c: 0x25220007  addiu       $v0, $t1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1935BCu;
            goto label_1935bc;
        }
    }
    ctx->pc = 0x1935A0u;
    // 0x1935a0: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1935a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1935a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1935A4u;
    {
        const bool branch_taken_0x1935a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1935A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1935A4u;
            // 0x1935a8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935a4) {
            ctx->pc = 0x1935B8u;
            goto label_1935b8;
        }
    }
    ctx->pc = 0x1935ACu;
    // 0x1935ac: 0x0  nop
    ctx->pc = 0x1935acu;
    // NOP
label_1935b0:
    // 0x1935b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1935B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1935B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1935B0u;
            // 0x1935b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1935B8u;
label_1935b8:
    // 0x1935b8: 0x25220007  addiu       $v0, $t1, 0x7
    ctx->pc = 0x1935b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1935bc:
    // 0x1935bc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1935bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1935c0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1935c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1935c4: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1935c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1935c8: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x1935c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1935cc: 0x1a2102a  slt         $v0, $t5, $v0
    ctx->pc = 0x1935ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1935d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1935d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1935d4:
    // 0x1935d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1935D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1935DCu;
    // 0x1935dc: 0x0  nop
    ctx->pc = 0x1935dcu;
    // NOP
}
