#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190200
// Address: 0x190200 - 0x190490
void sub_00190200_0x190200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190200_0x190200");
#endif

    switch (ctx->pc) {
        case 0x190218u: goto label_190218;
        case 0x190230u: goto label_190230;
        case 0x190248u: goto label_190248;
        case 0x1902c0u: goto label_1902c0;
        case 0x1902d0u: goto label_1902d0;
        case 0x1902f8u: goto label_1902f8;
        default: break;
    }

    ctx->pc = 0x190200u;

label_190200:
    // 0x190200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19020c: 0x804a508  j           func_129420
    ctx->pc = 0x19020Cu;
    ctx->pc = 0x190210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19020Cu;
            // 0x190210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x190214u;
    // 0x190214: 0x0  nop
    ctx->pc = 0x190214u;
    // NOP
label_190218:
    // 0x190218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19021c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19021cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190224: 0x804a508  j           func_129420
    ctx->pc = 0x190224u;
    ctx->pc = 0x190228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190224u;
            // 0x190228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19022Cu;
    // 0x19022c: 0x0  nop
    ctx->pc = 0x19022cu;
    // NOP
label_190230:
    // 0x190230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19023c: 0x804a508  j           func_129420
    ctx->pc = 0x19023Cu;
    ctx->pc = 0x190240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19023Cu;
            // 0x190240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x190244u;
    // 0x190244: 0x0  nop
    ctx->pc = 0x190244u;
    // NOP
label_190248:
    // 0x190248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19024c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190254: 0x804a508  j           func_129420
    ctx->pc = 0x190254u;
    ctx->pc = 0x190258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190254u;
            // 0x190258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00129420_0x129420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19025Cu;
    // 0x19025c: 0x0  nop
    ctx->pc = 0x19025cu;
    // NOP
    // 0x190260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19026c: 0x8064080  j           func_190200
    ctx->pc = 0x19026Cu;
    ctx->pc = 0x190270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19026Cu;
            // 0x190270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_190200;
    ctx->pc = 0x190274u;
    // 0x190274: 0x0  nop
    ctx->pc = 0x190274u;
    // NOP
    // 0x190278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19027c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190284: 0x8064086  j           func_190218
    ctx->pc = 0x190284u;
    ctx->pc = 0x190288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190284u;
            // 0x190288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190218u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_190218;
    ctx->pc = 0x19028Cu;
    // 0x19028c: 0x0  nop
    ctx->pc = 0x19028cu;
    // NOP
    // 0x190290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19029c: 0x806408c  j           func_190230
    ctx->pc = 0x19029Cu;
    ctx->pc = 0x1902A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19029Cu;
            // 0x1902a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190230u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_190230;
    ctx->pc = 0x1902A4u;
    // 0x1902a4: 0x0  nop
    ctx->pc = 0x1902a4u;
    // NOP
    // 0x1902a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1902a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1902ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1902acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1902b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1902b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1902b4: 0x8064092  j           func_190248
    ctx->pc = 0x1902B4u;
    ctx->pc = 0x1902B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1902B4u;
            // 0x1902b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190248u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_190248;
    ctx->pc = 0x1902BCu;
    // 0x1902bc: 0x0  nop
    ctx->pc = 0x1902bcu;
    // NOP
label_1902c0:
    // 0x1902c0: 0x30c3001f  andi        $v1, $a2, 0x1F
    ctx->pc = 0x1902c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x1902c4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1902C4u;
    {
        const bool branch_taken_0x1902c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902c4) {
            ctx->pc = 0x1902C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1902C4u;
            // 0x1902c8: 0x63142  srl         $a2, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1902F0u;
            goto label_1902f0;
        }
    }
    ctx->pc = 0x1902CCu;
    // 0x1902cc: 0x0  nop
    ctx->pc = 0x1902ccu;
    // NOP
label_1902d0:
    // 0x1902d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1902d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1902d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1902d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1902d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1902d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1902dc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1902dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1902e0: 0x0  nop
    ctx->pc = 0x1902e0u;
    // NOP
    // 0x1902e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1902E4u;
    {
        const bool branch_taken_0x1902e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1902E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1902E4u;
            // 0x1902e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902e4) {
            ctx->pc = 0x1902D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1902d0;
        }
    }
    ctx->pc = 0x1902ECu;
    // 0x1902ec: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x1902ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
label_1902f0:
    // 0x1902f0: 0x10c00065  beqz        $a2, . + 4 + (0x65 << 2)
    ctx->pc = 0x1902F0u;
    {
        const bool branch_taken_0x1902f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902f0) {
            ctx->pc = 0x190488u;
            goto label_190488;
        }
    }
    ctx->pc = 0x1902F8u;
label_1902f8:
    // 0x1902f8: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1902f8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1902fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1902fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190300: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x190300u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190304: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190308: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x190308u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19030c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190310: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x190310u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190314: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190318: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x190318u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x19031c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19031cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x190320: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x190320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x190324: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x190324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x190328: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x190328u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x19032c: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x19032cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190330: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190334: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x190334u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190338: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19033c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x19033cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190340: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190344: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x190344u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190348: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19034c: 0xa0880004  sb          $t0, 0x4($a0)
    ctx->pc = 0x19034cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x190350: 0xa0870005  sb          $a3, 0x5($a0)
    ctx->pc = 0x190350u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x190354: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x190354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x190358: 0xa0820007  sb          $v0, 0x7($a0)
    ctx->pc = 0x190358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x19035c: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x19035cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190360: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190364: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x190364u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190368: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19036c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x19036cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190370: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190374: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x190374u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190378: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19037c: 0xa0880008  sb          $t0, 0x8($a0)
    ctx->pc = 0x19037cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x190380: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x190380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x190384: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x190384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x190388: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x190388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x19038c: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x19038cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190390: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190394: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x190394u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190398: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19039c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1903a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1903a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1903a4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1903a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1903a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1903a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1903ac: 0xa088000c  sb          $t0, 0xC($a0)
    ctx->pc = 0x1903acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 8));
    // 0x1903b0: 0xa087000d  sb          $a3, 0xD($a0)
    ctx->pc = 0x1903b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x1903b4: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x1903b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1903b8: 0xa082000f  sb          $v0, 0xF($a0)
    ctx->pc = 0x1903b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x1903bc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1903bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1903c0: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1903c0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1903c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1903c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1903c8: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1903c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1903cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1903ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1903d0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1903d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1903d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1903d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1903d8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1903d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1903dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1903dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1903e0: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1903e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1903e4: 0xa0870001  sb          $a3, 0x1($a0)
    ctx->pc = 0x1903e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1903e8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1903e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1903ec: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1903ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1903f0: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1903f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1903f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1903f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1903f8: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x1903f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1903fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1903fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190400: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x190400u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190404: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190408: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x190408u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19040c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19040cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190410: 0xa0880004  sb          $t0, 0x4($a0)
    ctx->pc = 0x190410u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x190414: 0xa0870005  sb          $a3, 0x5($a0)
    ctx->pc = 0x190414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x190418: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x190418u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x19041c: 0xa0820007  sb          $v0, 0x7($a0)
    ctx->pc = 0x19041cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x190420: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x190420u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190424: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190428: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x190428u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19042c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19042cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190430: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x190430u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190434: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190438: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x190438u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19043c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19043cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190440: 0xa0880008  sb          $t0, 0x8($a0)
    ctx->pc = 0x190440u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x190444: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x190444u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
    // 0x190448: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x190448u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x19044c: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x19044cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x190450: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x190450u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190454: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190458: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x190458u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19045c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19045cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190460: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x190460u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190464: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x190464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190468: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x190468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19046c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19046cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x190470: 0xa088000c  sb          $t0, 0xC($a0)
    ctx->pc = 0x190470u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 8));
    // 0x190474: 0xa087000d  sb          $a3, 0xD($a0)
    ctx->pc = 0x190474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x190478: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x190478u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x19047c: 0xa082000f  sb          $v0, 0xF($a0)
    ctx->pc = 0x19047cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x190480: 0x14c0ff9d  bnez        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x190480u;
    {
        const bool branch_taken_0x190480 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x190484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190480u;
            // 0x190484: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190480) {
            ctx->pc = 0x1902F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1902f8;
        }
    }
    ctx->pc = 0x190488u;
label_190488:
    // 0x190488: 0x3e00008  jr          $ra
    ctx->pc = 0x190488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190490u;
}
